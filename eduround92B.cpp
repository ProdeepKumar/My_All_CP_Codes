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
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

ll dp[100002][6];

ll calculateSum(vector<ll>&a,ll i,ll kk,ll zz)
{
    ll n=a.size();
    if(i>=n or kk==0 or i<0) return 0;
    if(dp[i][zz]!=-1) return dp[i][zz];
    ll sum=0;
    if(i<n) sum=max(sum,a[i]+calculateSum(a,i+1,kk-1,zz));
    if(i>=0 and zz>0) sum=max(sum,a[i]+calculateSum(a,i-1,kk-1,zz-1));
    return dp[i][zz]=sum;
}

int main()
{
    ll n,m,g,k,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n>>k>>z;
        vector<ll>a(n);
        for(auto &x:a) ci>>x;
        mem(dp,-1);
        res=a[0]+calculateSum(a,1,k,z);
        co<<res<<endl;
    }
    return 0;
}