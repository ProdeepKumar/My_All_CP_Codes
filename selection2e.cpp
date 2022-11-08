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
    string a;
    ci>>a;
    char str[52],strr[52];
    f(i,0,52)
    {
        if(i<26) str[i]=65+i;
        else str[i]=65+(i-26);
    }
    f(i,0,52)
    {
        if(i<26) strr[i]=97+i;
        else strr[i]=97+(i-26);
    }
    //  f(i,0,52) co<<str[i]<<' ';
    //  en
    //  f(i,0,52) co<<strr[i]<<' ';
    //  en
    f(i,0,a.size())
    {
        if(a[i]>='a' and a[i]<='z') a[i]=toupper(a[i]);
        else a[i]=tolower(a[i]);
    }
    reverse(all(a));
    f(i,0,a.size())
    {
        if(a[i]>='a' and a[i]<='z')
        {
            x=a[i]-'a';
            x+=13;
            a[i]=strr[x];
        }
        else 
        {
            x=a[i]-'A';
            x+=13;
            a[i]=str[x];
        }
    }
    co<<a<<endl;
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