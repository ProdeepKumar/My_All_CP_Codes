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

vector<ll>str[200005];
void solve()
{
    ci>>n;
    vector<ll>a(n),b(n);
    set<ll>st;
    vector<ll>sum(200005,0);
    for(auto &x:a) ci>>x,st.insert(x);
    for(auto &x:b) ci>>x;
    f(i,1,n+1) str[i].clear();
    f(i,0,n)
    {
        str[a[i]].pb(b[i]);
        sum[a[i]]+=b[i];
    }
    mx=0;
    for(auto ii:st)
    {
        sort(allr(str[ii]));
        mx=max(mx,(ll)str[ii].size());
    }
    vector<ll>stt;
    for(auto ii:st) stt.pb(ii);
    map<pair<ll,ll>,ll >mp;
    for(ll i=0;i<stt.size();i++)
    {
        x=stt[i];
        stt[i]=str[x].size();
        mp[{x,stt[i]}]=x;
    }
    sort(all(stt));
    res=0;
    vector<ll>ans(n+1,0);
    for(ll i=1;i<=mx;i++)
    {
        ll temsum=0;
        ll xx=lower_bound(all(stt),i)-stt.begin();
        for(ll ii=xx;ii<stt.size();ii++)
        {
            y=mp[stt[ii]];
            //if((ll)str[y].size()<i) continue;
            x=stt[ii]%i;
            c=0;
            ll ssum=0;
            for(ll j=str[y].size()-1;j>=0;j--)
            {
                if(c>=x) br
                ssum+=str[y][j];
                c++;
            }
            temsum+=sum[y]-ssum;
        }
        ans[i]=temsum;
    }
    f(i,1,n+1) co<<ans[i]<<' ';
    en
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