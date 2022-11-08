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

int main()
{
    ios::sync_with_stdio(0);
    string a;
    ci>>a;
    n=a.size();
    p=0;
    x=y=z=0;
    f(i,0,n)
    {
       if(a[i]=='a') x++;
       else if(a[i]=='b') y++;
       else if(a[i]=='c') z++;
    }
    //co<<x<<' '<<y<< ' '<<z;en
    if(x==0 or y==0) con
    else if(z==x or z==y)
    {
        ll f=0;
        f(i,0,x)
        {
            if(a[i]!='a')
            {
                f=1;
                br
            }
        }
        f(i,x,x+y)
        {
            if(a[i]!='b')
            {
                f=1;
                br
            }
        }
        f(i,x+y,n)
        {
            if(a[i]!='c')
            {
                f=1;
                br
            }
        }
        if(f) con
        else coy
    }
    else con
    return 0;
}