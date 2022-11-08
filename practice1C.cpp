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
    //ci>>t;
    t=1;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        string a;
        ci>>a;
        bool fl=false;
        if(n==2 and (a=="01" or a=="10") ) co<< "Yes";
        else if(n==2 and (a=="11" or a=="00")) co<< "No";
        else if(n==1 and a=="0") co<< "No";
        else if(n==1 and a=="1") co<< "Yes";
        else
        {
            f(i,0,n)
            {
                if(a[i]=='1')
                {
                    c=0;
                    while(a[i]=='1' and i<n)
                    {
                        c++;
                        i++;
                    }
                    if(c>1)
                    {
                        fl=true;
                    }
                    i--;
                }
                else
                {
                    c=0;
                    while(a[i]=='0' and i<n)
                    {
                        c++;
                        i++;
                    }
                    if(c>2)
                    {
                        fl=true;
                    }
                    else if(c==2 and i==n) fl=true;
                    else if(c==2 and i==2) fl=true;
                    i--;
                }
                if(fl) br
                
            }
            if(fl) co<< "No";
            else co<< "Yes";
        }
        
    }
    return 0;
}