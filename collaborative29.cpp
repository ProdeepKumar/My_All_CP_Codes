#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m)
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p)
#define pf1(n)     printf("%lld\n",n)
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define p_b        pop_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define kase       "Case "<<ka<<": "
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
#define INF        0x3f3f3f3f
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl

//Policy Based Data Structure(Randomly access into set in log(n) time)
// template <typename T>using orderedSet = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)

ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;

map<ll,ll>mp;
set<ll>st;

const long long MAX_SIZE = 10000001; 
vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE); 
void manipulated_seive(ll N) 
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

void factorize(long long n) 
{ 
    int count = 0; 
    while (n%2==0)
    {
        count++;
        n/=2;
    }
    if(count)
    {
        st.insert(2);
    }

    for (long long i = 0; prime[i] <= sqrt(n); i++) { 
        count = 0; 
        while (n % prime[i] == 0) { 
            count++; 
            n = n / prime[i]; 
        } 
        if (count) 
        {
            // co<<"here"<<endl;
            // fact.pb({i,count});
            st.insert(prime[i]);
        }
    } 
  
    if (n > 2) 
    {
        // fact.pb({n,1});
        st.insert(n);
    }
    
}

void solve()
{
    ci>>k;
    if(mp.find(k)!=mp.end())
    {
        co<<mp[k]<<endl;
        return;
    }
    st.clear();
    factorize(k);
    factorize(k+1);
    mp[k]=st.size();
    co<<st.size()<<endl;
    // x=lower_bound(all(prime),32000)-prime.begin();
    // co<<x<<endl;
}

int main()
{
//#ifdef LOCAL
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        t=1;
        ci>>t;
        manipulated_seive(1000000);
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}