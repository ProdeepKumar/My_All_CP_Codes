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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,q,r,l,s,t;
ll ans[200],pos[105];

void call(ll L,ll R,ll height,vector<ll>&a)    /// 3 5 2 1 4
{
    if(L>=n or R<0 or L>R) return;
    if(L==R)
    {
        ans[L]=height;
        return;
    }
    mx=0;
    ll p=-1;
    for(ll i=L;i<=R;i++) mx=max(mx,a[i]);
    p=pos[mx];
    ans[p]=height;
    call(L,p-1,height+1,a);
    call(p+1,R,height+1,a);
}

void solve()
{
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    mem(ans,0);
    mem(pos,-1);
    f(i,0,n) pos[a[i]]=i;
    call(0,n-1,0,a);
    f(i,0,n) co<<ans[i]<<' ';
    en

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