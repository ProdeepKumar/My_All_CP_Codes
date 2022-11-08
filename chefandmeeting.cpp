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
    ll giventimehr,giventimemn,giventime;
    string giventimestr;
    char chh;
    ci>>giventimehr>>chh>>giventimemn>>giventimestr;
    if(giventimehr==12) giventime=giventimemn;
    else giventime=(giventimehr*60)+giventimemn;
    ci>>n;
    ll ans[n];
    f(i,0,n)
    {
        ll fromhr,frommn,tohr,tomn;
        string fromstr,tostr;
        ci>>fromhr>>chh>>frommn>>fromstr>>tohr>>chh>>tomn>>tostr;
        if(giventimestr=="AM")
        {
            if(fromstr==tostr and fromstr=="PM")
            {
                ans[i]=0;
            }
            else if(fromstr==tostr and tostr=="AM")
            {
                ll starttime,endtime;
                if(fromhr==12)
                {
                    starttime=frommn;
                }
                else
                {
                    starttime=(fromhr*60)+frommn;
                }
                if(tohr==12)
                {
                    endtime=tomn;
                }
                else
                {
                    endtime=(tohr*60)+tomn;
                }
                if(giventime>=starttime and giventime<=endtime)
                {
                    ans[i]=1;
                }
                else
                {
                    ans[i]=0;
                }
            }
            else if(fromstr=="AM" and tostr=="PM")
            {
                ll starttime,endtime;
                if(fromhr==12)
                {
                    starttime=frommn;
                }
                else
                {
                    starttime=(fromhr*60)+frommn;
                }
                if(giventime>=starttime) ans[i]=1;
                else ans[i]=0;
            }
            else if(fromstr=="PM" and tostr=="AM")
            {
                ll starttime,endtime;
                if(tohr==12)
                {
                    endtime=tomn;
                }
                else
                {
                    endtime=(tohr*60)+tomn;
                }
                if(giventime<=endtime) ans[i]=1;
                else ans[i]=0;
            }
        }
        else
        {
            if(fromstr==tostr and fromstr=="AM")
            {
                ans[i]=0;
            }
            else if(fromstr==tostr and tostr=="PM")
            {
                ll starttime,endtime;
                if(fromhr==12)
                {
                    starttime=frommn;
                }
                else
                {
                    starttime=(fromhr*60)+frommn;
                }
                if(tohr==12)
                {
                    endtime=tomn;
                }
                else
                {
                    endtime=(tohr*60)+tomn;
                }
                if(giventime>=starttime and giventime<=endtime)
                {
                    ans[i]=1;
                }
                else
                {
                    ans[i]=0;
                }
            }
            else if(fromstr=="PM" and tostr=="AM")
            {
                ll starttime,endtime;
                if(fromhr==12)
                {
                    starttime=frommn;
                }
                else
                {
                    starttime=(fromhr*60)+frommn;
                }
                if(giventime>=starttime) ans[i]=1;
                else ans[i]=0;
            }
            else if(fromstr=="AM" and tostr=="PM")
            {
                ll starttime,endtime;
                if(tohr==12)
                {
                    endtime=tomn;
                }
                else
                {
                    endtime=(tohr*60)+tomn;
                }
                if(giventime<=endtime) ans[i]=1;
                else ans[i]=0;
            }
        }
        
    }
    f(i,0,n) co<<ans[i];
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