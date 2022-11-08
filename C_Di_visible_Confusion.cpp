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

void solve()
{
    ci>>n;
    vector<ll>a;
    f(i,0,n)
    {
        ci>>x;
        if(i<=22) a.pb(x);
    }
    vector<ll>modu;
    ll ok=0;
    while(!a.empty())
    {
        modu.clear();
        ll ff=0;
        p=-1;
        f(i,0,a.size())
        {
            modu.pb(a[i]%(i+2));
            if(modu.back()==0 and ff==0)
            {
                p=i;
                ff=1;
            }
            // co<<a[i]<<' ';
        }
        // cout<<endl<<"modu: "<<endl;
        // for(ll ii:modu) co<<ii<<' ';
        // en
        while(modu.back()!=0 and !modu.empty())
        {
            // cout<<"deleted"<<endl;
            modu.pop_back();
            a.pop_back();
        }
        if(a.empty())
        {
            ok=1;
            br
        }
        if(modu.front()==0)
        {
            ok=0;
            br
        }
        else
        {
            a.erase(a.begin()+p-1);
        }
    }
    if(ok) coy
    else con

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