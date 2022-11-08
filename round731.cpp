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
    ci>>n;
    vector<ll>a(n),ans(n),tmp(n);
    for(auto &ii:a) ci>>ii;
    ans[0]=0;
    ll prev=a[0];
    tmp[0]=a[0];
    f(i,1,n)
    {
        x=2;
        while(x<=a[i]) x*=2;
        x--;
        tmp[i]=x;
        // if(x<prev) ans[i]=prev^a[i];
        // else ans[i]=a[i]^x;
        // prev=x;
    }
    // for(ll ii:tmp) co<<ii<<' ';
    // en
    f(i,1,n)
    {
        if(tmp[i]<tmp[i-1] and i==1)
        {
            x=2;
            while(x<=a[0]) x*=2;
            x--;
            tmp[0]=x;
            tmp[i]=tmp[i-1];
        }
        else if(tmp[i]<tmp[i-1])
        {
            tmp[i]=tmp[i-1];
        }
        else if(tmp[i]>tmp[i-1] and i==1)
        {
            if((tmp[i]&tmp[i-1])!=tmp[i-1])
            {
                x=2;
                while(x<=a[0]) x*=2;
                x--;
                tmp[0]=x;
            }
        }
    }
    // for(ll ii:tmp) co<<ii<<' ';
    // en
    f(i,0,n) a[i]^=tmp[i];
    // if(n>1)
    // {
    //     x=a[0]^ans[0];
    //     y=a[1]^ans[1];
    //     if((x&y)!=x)
    //         ans[0]=a[0]^y;
    // }
    for(ll ii:a) co<<ii<<' ';
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