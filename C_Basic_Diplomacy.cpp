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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
vector<ll>pos[100005];
void solve()
{
    ci>>n>>m;
    f(i,1,n+1) pos[i].clear();
    f(j,1,m+1)
    {
        ci>>x;
        f(i,0,x)
        {
            ci>>y;
            pos[y].pb(j);
        }
    }
    ll ans[m+1],ans1[m+1];
    mem(ans,-1);
    mem(ans1,-1);
    co<<"vul";
    f(i,1,n+1)
    {
        if(pos[i].empty()) continue;
        sort(all(pos[i]));
        for(auto ii:pos[i]) ans[ii]=i;
        for(ll j=pos[i].size()-1;i>=0;i--)
        {
            ans1[pos[i][j]]=i;
        }
    }
    ll ff=0;
    f(i,1,m+1)
    {
        if(ans[i]==-1)
        {
            ff=1;
            br
        }
    }
    ll fff=0;
    f(i,1,m+1)
    {
        if(ans1[i]==-1)
        {
            fff=1;
            br
        }
    }
    if(ff and fff)
    {
        con
        return;
    }
    map<ll,ll>cnt,cnt1;
    cnt.clear();
    cnt1.clear();
    mx=0;
    ll mxx=0;
    f(i,1,m+1) cnt[ans[i]]++,mx=max(mx,cnt[ans[i]]);
    f(i,1,m+1) cnt1[ans1[i]]++,mxx=max(mxx,cnt1[ans1[i]]);
    ff=fff=0;
    if(mx>(m+1)/2) ff=1;
    if(mxx>(m+1)/2) fff=1;
    if(ff and fff)
    {
        con
        return;
    }
    else
    {
        if(ff){
            coy
            f(i,1,m+1) co<<ans[i]<<' ';
            en
        }
        else if(fff)
        {
            coy
            f(i,1,m+1) co<<ans1[i]<<' ';
            en
        }
        else con
    }
    
    
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