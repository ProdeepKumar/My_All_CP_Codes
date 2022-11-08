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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,l,s,t;
map<ll,ll>mpa,mpb;
ll call(vector<ll>&a,vector<ll>&b)
{
    if(a.empty() or b.empty()) return 0;
    mpa.clear();
    mpb.clear();
    for(auto ii:a) mpa[ii]=1;
    for(auto ii:b) mpb[ii]=1;

    ll ans=0;
    for(auto ii:a)
    {
        if(mpb[ii]) ans++;
    }

    ll already=0;
    for(ll i=b.size()-1;i>=0;i--)
    {
        ll totbox=upper_bound(all(a),b[i])-a.begin();
        ll low=b[i]-totbox+1;

        if(totbox>0)
        {
            ll len=upper_bound(all(b),b[i])-lower_bound(all(b),low);
            ans=max(ans,len+already);
        }

        if(mpa[b[i]]) already++;
    }
    return ans;
}

void solve()
{
    ci>>n>>m;
    vector<ll>pos1,pos2,neg1,neg2;
    f(i,0,n)
    {
        ci>>x;
        if(x<0) neg1.pb(-x);
        else pos1.pb(x);
    }
    f(i,0,m)
    {
        ci>>x;
        if(x<0) neg2.pb(-x);
        else pos2.pb(x);
    }
    reverse(all(neg1));
    reverse(all(neg2));

    co<<call(neg1,neg2)+call(pos1,pos2)<<endl;
    
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