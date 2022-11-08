//#pragma GCC target("avx,avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n)     printf("%lld\n",n);
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define M 1000005
#define MOD 1000000007


//Policy Based Data Structure(Randomly access into set in log(n) time)
// template <typename T>using orderedSet = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)


// Calculate NcK
int bigmod(int a, int b) // a^b % MOD
{
    if(b == 0) return 1;

    int p = bigmod(a, b/2);
    p = 1LL*p*p%MOD;
    if(b%2) p = 1LL*p*a%MOD;

    return p;
}
int inverse(int x) // x^-1 = x^(MOD-2) % MOD
{
    return bigmod(x, MOD-2);
}
int fact[M], invFact[M];

int nCk(int n, int k)
{
    int x = fact[n];
    int y = invFact[n-k];
    int z = invFact[k];

    return 1LL*x*y%MOD*z%MOD;
}
void precalc()
{
    fact[0] = 1;
    for(int i = 1; i < M; i++) fact[i] = 1LL*fact[i-1]*i%MOD;
    for(int i = 0; i < M; i++) invFact[i] = inverse(fact[i]);
}
// kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlal

//sparse table (rmq) (for min,max,gcd)
const ll LOG=20;
ll a[200005];
ll sparse_table[200005][LOG];
ll bin_log[200005];

ll query(ll L,ll R) // 0 based indexed query
{
    ll length=R-L+1;
    ll k=bin_log[length];
    return min(sparse_table[L][k],sparse_table[R-(1<<k)+1][k]);
}
void preprocess()
{
    bin_log[1]=0;
    for(ll i=2;i<=n;i++) bin_log[i]=bin_log[i/2]+1;
    for(ll i=0;i<n;i++) sparse_table[i][0]=a[i];
    for(ll j=1;j<LOG;j++)
    {
        for(ll i=0;i+(1<<j)-1<n;i++)
        {
            sparse_table[i][j]=min(sparse_table[i][j-1],sparse_table[i+(1<<(j-1))][j-1]);
        }
    }
}

//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlal
ll phi[5000005];
void totient(ll n)
{
    f(i,1,n+1) phi[i]=i;
    f(i,2,n+1)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(ll j=2*i;j<=n;j+=i) phi[j]=(phi[j]/i)*(i-1);
        }
    }
}

//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlal

int gcd(int a, int b)
{
    while(b > 0)
    {
        int x = b;
        int y = a%b;
        a = x, b = y;
    }
    return a;
}

void gcd_test()
{
    cout << "GCD(12, 8) = " << gcd(12, 8) << endl;
    cout << "GCD(10, 5) = " << gcd(10, 5) << endl;

    cout << endl;
}

int tau[M], sigma[M];
void set_tau(int n) // Complexity = O(n log n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j += i) // iterating over i's multiples
        {
            tau[j]++;
            sigma[j] += i;
        }
    }
}

void tau_sigma_test()
{
    set_tau(100);

    cout << "The number of divisors of 9 = " << tau[9] << endl;
    cout << "The sum of divisors of 9 = " << sigma[9] << endl;

    cout << endl;
}

int digits_of_factorial_in_base(int n, int b) // returns the number of digits of n! in base b
{
    double s = 0;
    for(int i = 1; i <= n; i++) s += log(i)/log(b); // log(i)/log(b) = log i with respect to base b

    int digits = floor(s)+1;
    return digits;
}

void digits_of_factorial_test()
{
    cout << "The number of digits of 10! in base 10 = " << digits_of_factorial_in_base(10, 10) << endl;
    cout << "The number of digits of 4! in base 2 = " << digits_of_factorial_in_base(4, 2) << endl;

    cout << endl;
}

int trailing_zeros_in_factorial(int n) // counts the number of trailing zeros in the decimal representation of n!
{
    int ans = 0;
    for(int p = 5; p <= n; p *= 5) ans += n/p;

    return ans;
}

void trailing_zeros_in_factorial_test()
{
    cout << "The number of trailing zeros in 10! = " << trailing_zeros_in_factorial(10) << endl;
    cout << "The number of trailing zeros in 4! = " << trailing_zeros_in_factorial(4) << endl;
    cout << "The number of trailing zeros in 25! = " << trailing_zeros_in_factorial(25) << endl;

    cout << endl;
}

//cerr << "time taken : " << (float)clock() / (float)CLOCKS_PER_SEC << " secs" << endl;

ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,l,s,t;

ll Set(ll N,ll pos) { return N=N | (1<<pos); }
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N, ll pos) { return (bool)(N & (1<<pos)); }

//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlal

ll parent[MAXN],cnt[MAXN];
void init(ll n)
{
    f(i,0,n)
    {
        parent[i]=i;
        cnt[i]=1;
    }
}
ll find(ll u)
{
    if(u==parent[u]) return u;
    return parent[u]=find(parent[u]);
}
void Union(ll u,ll v)
{
    ll p=find(u);
    ll q=find(v);
    if(p!=q)
    {
        parent[q]=p;
        cnt[p]+=cnt[q];
    }
}
ll findsize(ll u)
{
    if(u==parent[u]) return cnt[u];
    return findsize(parent[u]);
}

// For cycle detection, we can use this dsu concept,
// If we are connecting some edge of two vertices which are
// comming from same set of nodes, then there forms a cycle

//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlal

ll M=1e9+7;
 
ll FactMod(ll n)
{
    ll fact=1;
   for(ll i=1;i<=n;i++)
   {
      fact=((fact%M)*i)%M;
   }
   return fact;
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks


#define PRIME 1000000007
// Returns (x^n) % PRIME
ll binary_exp(ll x, ll n)
{
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x % PRIME;
    } else {
        ll temp = binary_exp(x, n / 2);
        temp = (temp * temp) % PRIME;
 
        if (n % 2 == 0) {
            return temp;
        } else {
            return ((x % PRIME) * temp) % PRIME;
        }
    }
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks

bool findd(set<ll>&a,ll x)
{
    ll si=a.size();
    a.insert(x);
    if(a.size()==si) return true;
    else return false;
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks

bool arraySortedOrNot(vector<ll>&arr, ll n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[n - 1] < arr[n - 2])
        return false;
    return arraySortedOrNot(arr, n - 1);
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks
const long long MAX_SIZE = 10000001; 
vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE); 
void manipulated_seive(int N) 
{ 
    isprime[0] = isprime[1] = false ; 
    for (long long int i=2; i<N ; i++) 
    {
        if (isprime[i]) 
        {
            prime.push_back(i); 
            SPF[i] = i; 
        } 
        for (long long int j=0; 
             j < (int)prime.size() && 
             i*prime[j] < N && prime[j] <= SPF[i]; 
             j++) 
        { 
            isprime[i*prime[j]]=false; 
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks
void simpleSieve(int limit, vector<int> &prime) 
{ 
    bool mark[limit+1]; 
    memset(mark, true, sizeof(mark)); 
  
    for (int p=2; p*p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            for (int i=p*2; i<limit; i+=p) 
            mark[i] = false; 
        } 
    } 
      for (int p=2; p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            prime.push_back(p); 
            cout << p << " "; 
        } 
    } 
} 

void segmentedSieve(int n) 
{ 
    int limit = floor(sqrt(n))+1; 
    vector<int> prime;  
    simpleSieve(limit, prime);  
  
    int low = limit; 
    int high = 2*limit; 

    while (low < n) 
    { 
        if (high >= n)  
           high = n; 
          
        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 
  
        for (int i = 0; i < prime.size(); i++) 
        { 
            int loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 
  
            for (int j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 
  
        for (int i = low; i<high; i++) 
            if (mark[i - low] == true) 
                cout << i << " "; 
          low = low + limit; 
        high = high + limit; 
    } 
} 

///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks
vector<pi>fact;

void factorize(long long n) 
{ 
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) 
        fact.pb({2,count}); 
  
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            fact.pb({i,count});
    } 
  
    if (n > 2) 
        fact.pb({n,1});
}
///kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks

ll NumberOfDivisor(ll n)   // Count number of divisor of n
{
    vector<pi>fact;
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) fact.pb({2,count}); 
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) fact.pb({i,count});
    }
    if (n > 2) fact.pb({n,1});
    ll mul=1;
    for(auto ii:fact) mul*=(ii.se+1);
    return mul;
}

//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks

ll SumOfDivisor(ll n)   // Sum of divisors of n
{
    vector<pi>fact;
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) fact.pb({2,count}); 
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) fact.pb({i,count});
    }
    if (n > 2) fact.pb({n,1});
    ll sum=1;
    for(auto ii:fact)
    {
        x=(ceil(powl(ii.fi,ii.se+1))-1)/(ii.fi-1);
        sum*=x;
    }
    return sum;
}
//kljsdfjsbvadsfvfadsfvlkjsahfdlskanvlkasiwwefsbdknaslkvvnaslfdlsbvklsbvlaksjbvilasfvasbfvdkjbasifgierfkasfdlalks

ll divv[1000005];
void divcnt()
{
    for(ll i=1;i<=1000002;i++)
    {
        for(ll j=i;j<=1000002;j+=i) 
        {
            divv[j]++;
        }
    }
    return;
}
map<ll,ll>level;

int main()
{
    ios::sync_with_stdio(0);
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a(n);
        for(auto &x:a) ci>>x;
        
    }
    return 0;
}