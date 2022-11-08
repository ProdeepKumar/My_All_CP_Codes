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
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;

ll dp[100000];
vector<ll>a(100000);
vector<ll>in[100000];
ll monkey(ll pos)
{
    if(dp[pos]!=-1) return dp[pos];
    if(in[pos].empty()) return a[pos];
    ll sum=0;
    
    if(in[pos].size()==1)
    {
        return dp[pos]=a[pos]+monkey(in[pos][0]);
    }
    else
    {

        return dp[pos]=max(a[pos]+monkey(in[pos][0]),a[pos]+monkey(in[pos][1]));
    }
    

}
void solve(ll kas)
{
    ci>>n;
    a.clear();
    l=(n*(n-1))+n;
    for(ll i=1;i<=l;i++)
    {
        ci>>a[i];
        in[i].clear();
    }
    mem(dp,-1);
    ll cur=1,nxt=2;
    for(ll i=1;i<n;i++)
    {
        f(j,1,i+1)
        {
            in[cur].pb(nxt);
            in[cur].pb(nxt+1);
            cur++;
            nxt++;
        }
        nxt++;
    }
    for(ll i=n;i>1;i--)
    {
        f(j,1,i+1)
        {
            if(j==1 or j==i)
            {
                in[cur].pb(nxt);
                cur++;
            }
            else
            {
                in[cur].pb(nxt);
                in[cur].pb(nxt+1);
                cur++;
                nxt++;
            } 
        }
        nxt++;
    }
    co<<"Case "<<kas<<": "<<monkey(1)<<endl;

}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
//#endif
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve(ca+1);
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}