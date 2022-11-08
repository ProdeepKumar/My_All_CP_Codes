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

map<ll,ll>mp;


void solve()
{
    ci>>n;
    n*=2;
    vector<ll>a;
    f(i,0,n) ci>>x,a.pb(x);
    sort(all(a));
    f(i,0,n-1)
    {
        x=a[i]+a[n-1];
        multiset<ll>st;
        vector<pi>ans;
        f(j,0,n) st.insert(a[j]);
        f(j,0,(n/2))
        {
            auto it=st.end();
            it--;
            y=x-*it;
            st.erase(it);
            if(st.find(y)==st.end()) br
            ans.pb({x-y,y});
            x=max(x-y,y);
            st.erase(st.find(y));

        }
        if(ans.size()==(n/2))
        {
            coy
            co<<ans[0].fi+ans[0].se<<endl;
            for(auto ii:ans) co<<ii.fi<<' '<<ii.se<<endl;
            return;
        }
    }
    con

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