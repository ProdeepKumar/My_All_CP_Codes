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

ll dp[101][101],poss[101];

ll dust(ll pos,ll move)
{
    if(pos>=n or move==0) return 0;
    if(dp[pos][move]!=-1) return dp[pos][move];

    ll cnt=0,limit;
    limit=poss[pos]+w;
    ll i;
    for(i=pos;i<n and poss[i]<=limit;i++) cnt++;
    cnt+=dust(i,move-1);
    r=dust(pos+1,move);
    return dp[pos][move]=max(cnt,r);
}


int main()
{
        
//#ifdef LOCAL
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        // auto start_time = clock();
        // cerr << setprecision(3) << fixed;
//#endif
        //cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            ci>>n>>w>>k;
            mem(dp,-1);
            mem(poss,0);
            f(i,0,n)
            {
                ci>>x>>y;
                poss[i]=y;
            }
            sort(poss,poss+n);
            res=dust(0,k);
            co<<"Case "<<ca+1<<": "<<res<<endl;
        }
//#ifdef LOCAL
        // auto end_time = clock();
        // cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}