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

void solve()
{
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    set<ll>st,stt;
    f(i,0,n) st.insert(i+1);
    stt=st;
    st.erase(a.front());
    stt.erase(a.front());
    vector<ll>ans1(n,-1),ans2(n,-1);
    ans1[0]=ans2[0]=a[0];
    f(i,1,n)
    {
        if(a[i]!=a[i-1])
        {
            st.erase(a[i]);
            stt.erase(a[i]);
            ans1[i]=ans2[i]=a[i];
        }
    }
    f(i,0,n)
    {
        if(ans1[i]==-1)
        {
            ans1[i]=*st.begin();
            st.erase(ans1[i]);
        }
    }
    for(auto ii:ans1) co<<ii<<' ';
    en
    f(i,0,n)
    {
        if(ans2[i]==-1)
        {
            auto ii=stt.lower_bound(a[i-1]);
            ii--;
            ans2[i]=*ii;
            stt.erase(ans2[i]);
        }
    }
    for(auto ii:ans2) co<<ii<<' ';
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