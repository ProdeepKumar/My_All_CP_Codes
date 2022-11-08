#include<bits/stdc++.h>
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
        for (long long int j=0; j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i];  j++) 
        { 
            isprime[i*prime[j]]=false; 
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
}

int main()
{
    ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    manipulated_seive(1000001);
    ci>>n>>m;
    ll a[n][m];
    f(i,0,n)
    {
        f(j,0,m)
        {
            ci>>a[i][j];
        }
    }
    res=1e18;
    f(i,0,n)
    {
        ll sum=0;
        f(j,0,m)
        {
            x=lower_bound(all(prime),a[i][j])-prime.begin();
            sum+=prime[x]-a[i][j];
        }
        res=min(res,sum);
    }  
    f(j,0,m)
    {
        ll sum=0;
        f(i,0,n)
        {
            x=lower_bound(all(prime),a[i][j])-prime.begin();
            sum+=prime[x]-a[i][j];
        }
        res=min(res,sum);
    }  
    co<<res;
    return 0;
}