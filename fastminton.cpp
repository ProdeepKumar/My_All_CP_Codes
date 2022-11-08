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
    ll player=1,leftpoint=0,rightpoint=0,leftgame=0,rightgame=0,;
    f(i,0,a.size())
    {
        if(a[i]=='Q')
        {
            x=max(leftgame,rightgame);
            y=min(leftgame,rightgame);
            if(x==2)
            {
                co<<leftgame;
                if(x==leftgame) co<<" (winner)";
                co<<rightgame;
                if(x==rightgame) co<<" (winner)";
                

            }
        }
        else
        {
            if(player==1)
            {
                if(a[i]=='S')
                {
                    leftpoint++;
                    player=1;
                }
                else
                {
                    rightpoint++;
                    player=2;
                }
                
            }
            else
            {
                if(a[i]=='S')
                {
                    rightpoint++;
                    player=2;
                }
                else
                {
                    leftpoint++;
                    player=1;
                } 
            }
            x=max(leftpoint,rightpoint);
            y=min(leftpoint,rightpoint);
            if((x>=5 and x-y>=2) or (x>=10))
            {
                if(x==leftpoint)
                {
                    leftgame++;
                }
                else rightgame++;
                leftpoint=0;
                rightpoint=0;
            } 
        }
        
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
        //ci>>t;
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