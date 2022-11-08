#include<bits/stdc++.h>
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
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,x,y,z,w,p,q,r,d,l,s,t;
ll dp[1005][12005];
ll call(ll pos,ll kk,vector<pi>&vec)
{
    if(pos>=n) return 0;
    if(dp[pos]!=-1) return dp[pos];
    ll xx=0,yy=0;
    if(kk-vec[pos].se>=0) xx+=max(vec[pos].fi+call(pos+1,kk-vec[pos].se,vec),call(pos+1,kk,vec));
    else return 0;
    return dp[pos]=xx;
}
void solve()
{
    ci>>n>>k;
    vector<ll>b,c;
    f(i,0,n) ci>>x,b.pb(x);
    f(i,0,n) ci>>x,c.pb(x);
    vector<pi>vec;
    f(i,0,n)
    {
        x=1;
        y=0;
        while(x!=b[i])
        {
            if(x*2<=b[i]) x*=2;
            else
            {
                f(j,2,x+1)
                {
                    p=x/j;
                    if(x+p<=b[i])
                    {
                        x+=p;
                        br
                    }
                }
            }
            y++;
        }
        vec.pb({c[i],y});
    }
    res=0;
    // for(auto ii:vec) co<<ii.fi<<' '<<ii.se<<endl;
    f(i,0,n)
    {
        ll sum=0,sum1=0;
        f(j,i,n)
        {
            if(vec[j].se+sum<=k) 
            {
                sum+=vec[j].se;
                sum1+=vec[j].fi;
            }
        }
        res=max(res,sum1); 
    }
    sort(allr(vec));
    sum=0;
    mem(dp,-1);
    res=max(res,call(0,k,vec));
    f(i,0,n)
    {
        ll sum=0,sum1=0;
        f(j,i,n)
        {
            if(vec[j].se+sum<=k) 
            {
                sum+=vec[j].se;
                sum1+=vec[j].fi;
            }
        }
        res=max(res,sum1); 
    }
    reverse(all(vec));
    f(i,0,n)
    {
        ll sum=0,sum1=0;
        f(j,i,n)
        {
            if(vec[j].se+sum<=k) 
            {
                sum+=vec[j].se;
                sum1+=vec[j].fi;
            }
        }
        res=max(res,sum1); 
    }
    co<<res<<endl;
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
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}