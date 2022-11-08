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

void solve()
{
    ci>>n;
    char a[n+1][n+1];
    ll vis[10]={0};
    f(i,1,n+1)
        f(j,1,n+1)
            ci>>a[i][j],vis[a[i][j]-'0']++;
    ll mx_r[10],mx_c[10],mn_r[10],mn_c[10],ans[10]={0};
    f(i,0,10)
    {
        mx_r[i]=0;
        mx_c[i]=0;
        mn_r[i]=2005;
        mn_c[i]=2005;
    }
    f(i,1,n+1)
    {
        f(j,1,n+1)
        { 
            x=a[i][j]-'0';
            mx_r[x]=max(i,mx_r[x]);
            mx_c[x]=max(j,mx_c[x]);
            mn_r[x]=min(i,mn_r[x]);
            mn_c[x]=min(j,mn_c[x]);
        }
    }
    f(i,1,n+1)
    {
        f(j,1,n+1)
        {
            x=a[i][j]-'0';
            if(vis[x]<2) continue;
            //co<<mx_r[x]<<' '<<mn_r[x]<<' '<<mx_c[x]<<' '<<mn_c[x]<<endl;
            ans[x]=max(ans[x],max(j-1,n-j)*max(mx_r[x]-i,i-mn_r[x]));
            ans[x]=max(ans[x],max(i-1,n-i)*max(mx_c[x]-j,j-mn_c[x])); 
        }
    }
    for(ll ii:ans) co<<ii<<' ';
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