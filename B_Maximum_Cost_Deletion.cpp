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

void solve()
{
    ci>>n>>p>>q;
    string a;
    ci>>a;
    res=(p+q)*n;
    vector<ll>zz,on;
    f(i,0,n)
    {
        if(a[i]=='1')
        {
            c=0;
            while(a[i]=='1' and i<n)
            {
                c++;
                i++;
            }
            on.pb(c);
            i--;
        }
        else
        {
            c=0;
            while(a[i]=='0' and i<n)
            {
                c++;
                i++;
            }
            zz.pb(c);
            i--;
        } 
    }
    ll sm1=0,sm2=0;
    for(ll ii:zz) sm1+=ii;
    for(ll ii:on) sm2+=ii;
    x=(sm1*p)+(sm2*p)+q*(ll)zz.size()+q*(ll)on.size();
    res=max(res,x);
    if(!on.empty()) res=max(res,(sm1*p)+(sm2*p)+q*(ll)zz.size()+q);
    if(!zz.empty()) res=max(res,(sm1*p)+(sm2*p)+q+q*(ll)on.size());
    co<<res<<endl;
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