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
vector<ll>a[200005];
void solve()
{
    ci>>n;
    f(i,1,n+1) a[i].clear();
    bool ok=true;
    f(i,0,n)
    {
        ci>>k;
        f(j,0,k) 
        {
            ci>>x;
            a[i+1].pb(x);
        }
        if(k==0) ok=false;
    }
    if(ok)
    {
        co<<-1<<endl;
        return;
    }
    ll chk[n+1]={0};
    q=200001;
    set<ll>st;
    res=0;
    while(q--){
        res++;
        st.clear();
        f(i,1,n+1)
        {
            if(a[i].empty()) chk[i]=1;
            else if(chk[i]==1) continue;
            else 
            {
                c=0;
                for(ll jj:a[i])
                {
                    if(chk[jj]==1) c++;
                }
                if(c==a[i].size()) chk[i]=1;
            }
            st.insert(chk[i]);
        }
        if(st.size()==1 and *st.begin()==1)
        {
            co<<res<<endl;
            return;
        }
    }


    
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