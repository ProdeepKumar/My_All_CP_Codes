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

vector<ll>in[100005];
vector<ll>inn[100005];
map<ll,ll>mp,mpp;
void solve()
{
    ci>>n>>k;
    vector<ll>a(n),b(n);
    f(i,0,n) ci>>a[i],in[a[i]].pb(i);
    f(i,0,n) ci>>b[i],inn[b[i]].pb(i);
    x=y=0;
    f(i,0,n)
    {
        if(a[i]>=k) continue;
        z=k-a[i];
        if(in[z].empty()) continue;
        w=upper_bound(all(in[z]),i)-in[z].begin();
        w=in[z].size()-w;
        x+=w;
    }
    f(i,0,n)
    {
        if(b[i]>=k) continue;
        z=k-b[i];
        if(inn[z].empty()) continue;
        w=upper_bound(all(inn[z]),i)-inn[z].begin();
        w=inn[z].size()-w;
        y+=w;
    }
    if(x>y) co<<"Mahmoud"<<endl;
    else if(x<y) co<<"Bashar"<<endl;
    else co<<"Draw"<<endl;


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