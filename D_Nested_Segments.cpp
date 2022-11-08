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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
map<ll,ll>mp;
map<pair<ll,ll>,vector<ll> >pos;
map<ll,vector<ll> >ripos;
void solve()
{
    ci>>n;
    vector<pi>a(n);ll i=0;
    for(auto &x:a)
    {
        i++;
        ci>>x.fi>>x.se;
        pos[{x.fi,x.se}].pb(i);          // 10 11
    }                                    // 10 20
    sort(all(a));
    vector<ll>left(n);
    mp.clear();
    f(i,0,n) left[i]=a[i].fi,mp[a[i].se]++;
    vector<ll>maxel(n);
    maxel[0]=a[0].se;
    f(i,1,n) maxel[i]=max(maxel[i-1],a[i].se);
    f(i,0,n) ripos[a[i].se].pb(i+1);
    l=r=-1;
    x=0;
    ll ii;
    f(i,0,n)
    {
        ii=upper_bound(all(left),a[i].fi)-left.begin();
        --ii;
        x=maxel[ii];
        if(x>a[i].se)
        {
            l=pos[a[i]].front();
            br
        }
        else if(x==a[i].se and mp[x]>1)
        {
            y=ripos[x][0]-1;
            if(y<ii) {l=pos[a[i]].front();br}
        }
    }
    f(i,0,ii+1)
    {
        if(a[i].se==x and l!=-1)
        {
            r=pos[a[i]].back();
            br
        }
    }
   // if(l==-1 or r==-1) co<<-1<<' '<<-1<<endl;
    co<<l<<' '<<r<<endl;

}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // ci>>t;
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