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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
vector<ll>vec[300005];
void solve()
{
    ci>>n;
    f(i,1,n+1) 
    {
        vec[i].clear();
        vec[i].pb(0);
    }
    f(i,1,n+1)
    {
        ci>>x;
        vec[x].pb(i);
    }
    f(i,1,n+1) vec[i].pb(n+1);  
    ll ans[n+1];
    f(i,1,n+1) ans[i]=INT_MAX;
    f(i,1,n+1)
    {
        mx=0;
        f(j,0,vec[i].size()-1)
        {
             x=vec[i][j+1]-vec[i][j];
             mx=max(mx,x);
        }
        ans[mx]=min(ans[mx],i);
    }
    f(i,2,n+1) ans[i]=min(ans[i],ans[i-1]);
    f(i,1,n+1) 
    {
        if(ans[i]==INT_MAX) co<<-1<< ' ';
        else co<<ans[i]<<' ';
    }
    en
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
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}