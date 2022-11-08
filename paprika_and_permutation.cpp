//#pragma GCC target("avx,avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
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
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,b,d,l,s,t;
map<ll,ll>mp,taken;
ll chk[100005];

void solve()
{
    ci>>n;
    vector<ll>a(n);
    mp.clear();
    taken.clear();
    for(auto &x:a) ci>>x,mp[x]++;
    vector<ll>tmp;
    mem(chk,0);
    f(i,0,n)  
    {
        if(a[i]>n) tmp.pb(a[i]);
        else if(mp[a[i]]>1 and taken[a[i]]==0)
        {
            taken[a[i]]++;
            f(j,1,mp[a[i]]) tmp.pb(a[i]);
        }
    }
    sort(all(tmp));
    f(i,0,n) if(a[i]<=n) chk[a[i]]=1;
    vector<ll>need;
    f(i,1,n+1) if(chk[i]==0) need.pb(i);
    // for(ll ii:tmp) co<<ii<<' ';
    // en
    // for(ll ii:need) co<<ii<<' ';
    // en
    bool ok=true;
    f(i,0,need.size())
    {
        if(tmp[i]%(tmp[i]-need[i])==0)
        {
            ok=false;
            br
        }
    } 
    if(ok) co<<need.size()<<endl;
    else co<<-1<<endl;

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
        ci>>t;
        // t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}