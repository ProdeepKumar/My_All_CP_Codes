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
    vector<ll>ev,od;
    f(i,0,n)
    {
        ci>>x;
        if(x&1) od.pb(x);
        else ev.pb(x);
    }
    ll alice=0,bob=0;
    sort(all(ev));
    sort(all(od));
    ll turn=0;
    while(!ev.empty() and !od.empty())
    {
        if(turn==0)
        {
            if(ev.back()>od.back())
            {
                alice+=ev.back();
                ev.pop_back();
            }
            else
            {
                od.pop_back();
            }
            turn=1-turn;
            
        }
        else
        {
            if(od.back()>ev.back())
            {
                bob+=od.back();
                od.pop_back();
            }
            else
            {
                ev.pop_back();
            }
            turn=1-turn;
        }
    }
    if(!ev.empty())
    {
        if(turn==0)
        {
            c=0;
            for(ll i=ev.size()-1;i>=0;i--)
            {
                c++;
                if(c&1) alice+=ev[i];
            }
        }
        else
        {
            c=0;
            for(ll i=ev.size()-1;i>=0;i--)
            {
                c++;
                if(c%2==0) alice+=ev[i];
            }  
        }
        
    }
    else if(!od.empty())
    {
        if(turn==0)
        {
            c=0;
            for(ll i=od.size()-1;i>=0;i--)
            {
                c++;
                if(c%2==0) bob+=od[i];
            }
        }
        else
        {
            c=0;
            for(ll i=od.size()-1;i>=0;i--)
            {
                c++;
                if(c%2) bob+=od[i];
            }  
        }
    }
    //co<<alice<<' '<<bob<<endl;
    if(alice>bob) co<<"Alice"<<endl;
    else if(alice<bob) co<<"Bob"<<endl;
    else co<<"Tie"<<endl;

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