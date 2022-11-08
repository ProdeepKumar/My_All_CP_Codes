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
#define INF        0x3f3f3f3f
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
map<ll,ll>row,col,add;
map<pi,ll>diag;
void solve()
{
    ci>>n>>q;
    row.clear();
    col.clear();
    add.clear();
    diag.clear();
    while(q--)
    {
        ci>>x>>y;
        if(row.find(x)==row.end())
        {
            coy
            row[x]=1;
            col[y]=1;
        }
        else if(col.find(y)==col.end())
        {
            coy
            row[x]=1;
            col[y]=1;
        }
        else if(add.find(x+y)==add.end())
        {
            coy
            add[x+y]=1;
        }
        else
        {
            ll ff=1;
            for(auto ii:diag)
            {
                if(ii.fi.fi%2==(x+y)%2 and (x+y)>=ii.fi.fi and (x+y)<=ii.fi.se)
                {
                    ff=0;
                    con
                    br
                }
            }
            if(ff)
            {
                coy
                if(x>y) diag[{x-y+2,n+n-x+y}]=1;
                else if(x<y) diag[{y-x+2,n+n+x-y}]=1;
                else diag[{2L,n+n}]=1;
            }
        }
        row[x]=1;
        col[y]=1;
        add[x+y]=1;
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