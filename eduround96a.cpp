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
#define f(i,a,b)     for(ll i=a;i<b;i++)
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
    if(n%3==0) co<<n/3<<' '<<0<<' '<<0<<endl;
    else if(n%5==0) co<<0<<' '<<n/5<<' '<<0<<endl;
    else if(n%7==0) co<<0<<' '<<0<<' '<<n/7<<endl;
    else
    {
        ll f=0;
        for(ll i=1;i<=1000;i++)
        {
            x=n-(i*7);
            y=n-(i*5);
            z=n-(i*3);
            if(x%3==0 and x/3>0)
            {
                f=1;
                co<<x/3<<' '<<0<<' '<<i<<endl;
                br
            }
            else if(x%5==0 and x/5>0)
            {
                f=1;
                co<<0<<' '<<x/5<<' '<<i<<endl;
                br
            }
            else if(y%3==0 and y/3>0)
            {
                f=1;
                co<<y/3<<' '<<i<<' '<<0<<endl;
                br
            }
            else if(y%7==0 and y/7>0)
            {
                f=1;
                co<<0<<' '<<i<<' '<<y/7<<endl;
                br
            }
            else if(z%5==0 and z/5>0)
            {
                f=1;
                co<<i<<' '<<z/5<<' '<<0<<endl;
                br
            }
            else if(z%7==0 and z/7>0)
            {
                f=1;
                co<<i<<' '<<0<<' '<<z/7<<endl;
                br
            }
        }
        if(!f) co<<-1<<endl;
    }
    
        
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