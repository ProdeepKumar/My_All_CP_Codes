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

ll strconvert(string &a)
{
    ll sum=0,ii=0;
    for(ll i=a.size()-1;i>=0;i--)
    {
        ll xx=(a[i]-'0')*(ll)ceil(powl(10,ii));
        sum+=xx;
        ii++;
    }
    return sum;
}

string inttostr(ll nn)
{
    string ab;
    while(nn)
    {
        ab.pb((nn%10)+'0');
        nn/=10;
    }
    reverse(all(ab));
    ab+=ab;
    return ab;
}

void solve()
{
    ci>>n;
    ll nlen=0;
    ll ab[]={0,9,90,900,9000,90000,900000,9000000};
    f(i,1,8) ab[i]+=ab[i-1];
    x=n;
    while(x)
    {
        nlen++;
        x/=10;
    }
    // co<<nlen<<endl;
    nlen/=2;
    res=0;
    res+=ab[nlen-1];
    for(ll i=(ll)ceil(pow(10,nlen-1));i<(ll)ceil(pow(10,nlen));i++)
    {
        string tst;
        tst=inttostr(i);
        ll yy=strconvert(tst);
        // co<<tst<<' '<<yy<<endl;
        if(yy<=n) res++;
        else br
    }
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