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
ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;

void solve()
{
    ci>>n;
    vector<pi>a(n),b;
    res=0;
    f(i,0,n)
    {
        ci>>x>>y;
        a[i]={x,y};
    }
    ll fl=0;
    f(i,0,n)
    {
        f(j,i+1,n)
        {
            f(k,j+1,n)
            {
                ll x1=a[i].fi,y1=a[i].se;
                ll x2=a[j].fi,y2=a[j].se;
                ll x3=a[k].fi,y3=a[k].se;
                if((y2-y1)*(x3-x2)==((y3-y2)*(x2-x1)))
                {
                    fl=1;
                    br
                }
            }
            if(fl) br
        }
        if(fl) br
    }
    if(fl) co<<"Yes"<<endl;
    else co<< "No"<<endl;

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
        //ci>>t;
        t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}