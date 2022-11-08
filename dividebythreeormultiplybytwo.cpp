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
vector<ll>a;
ll vis[200]={0};
deque<ll>dq;
void left(vector<ll>&a,ll n)
{
    ll x=dq.front();
    ll fh=0;
    f(i,0,n)
    {
        if(a[i]*2==x and !vis[i])
        {
            dq.push_front(a[i]);
            vis[i]=1;
            left(a,n);
        }
        else if(a[i]==3*x and !vis[i])
        {
            dq.push_front(a[i]);
            vis[i]=1;
            left(a,n);
            
        }
    }
    //if(fh) left(a,n);
    //else return;
}
void right(vector<ll>&a,ll n)
{
    ll x=dq.back();
    ll fh=0;
    f(i,0,n)
    {
        if(a[i]==2*x and !vis[i])
        {
            dq.pb(a[i]);
            vis[i]=1;
            right(a,n);
           
        }
        else if(a[i]*3==x and !vis[i])
        {
            dq.pb(a[i]);
            vis[i]=1;
           right(a,n);
        }
    }
    
}

int main()
{
    //ci>>t;
    t=1;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        f(i,0,n) ci>>y,a.pb(y);
        x=a[0];
        vis[0]=1;
        for(ll i=1;i<n;i++)
        {
            if(a[i]==2*x and !vis[i])
            {
                dq.pb(x);
                dq.pb(a[i]);
                vis[i]=1;
                br
            }
            if(a[i]*2==x and !vis[i])
            {
                dq.pb(a[i]);
                dq.pb(x);
                vis[i]=1;
                br
            }
            if(a[i]==3*x and !vis[i])
            {
                dq.pb(a[i]);
                dq.pb(x);
                vis[i]=1;
                br
            }
            if(a[i]*3==x and !vis[i])
            {
                dq.pb(x);
                dq.pb(a[i]);
                vis[i]=1;
                br
            }
        }
        left(a,n);
        right(a,n);
        while(!dq.empty())
        {
            co<<dq.front()<< " ";
            dq.pop_front();
        }

    }
    return 0;
}