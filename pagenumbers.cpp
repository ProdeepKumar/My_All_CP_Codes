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
ll chk[1005]={0};
int main()
{
    //ci>>t;
    t=1;
    for(ll ca=0;ca<t;ca++)
    {
        string a;
        ci>>a;
        f(i,0,a.size())
        {
            if(a[i]!=',')
            {
                x=0;
                while(a[i]!=',' and i<a.size())
                {
                    y=a[i]-'0';
                    x*=10;
                    x+=y;
                    i++;
                }
                chk[x]=1;
                i--;
            }
        }
        c=0;
        f(i,0,1005)
        {
            if(chk[i])
            {
                l=i;
                while(chk[i]) i++;
                r=i-1;
                if(l==r)
                {
                    if(c==0) co<<l;
                    else
                        co<< ","<<l;
                    c++;
                }
                else
                {
                    if(c==0) co<<l<< "-"<<r;
                    else
                        co<< ","<<l<< "-"<<r;
                    c++;
                }
                i--;
            }
        }
        
    }
    return 0;
}