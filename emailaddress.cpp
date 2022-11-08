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
    string a,b;
    ci>>a;
    ll at=0;
    for(ll i=0;i<a.size(); )
    {
        if((i==0 or i==a.size()-2) and a.substr(i,2)=="at")
        {
            b+="at";
            i+=2;
        }
        else if((i==0 or i==a.size()-3) and a.substr(i,3)=="dot")
        {
            b+="dot";
            i+=3;
        }
        else if(a.substr(i,2)=="at" and at==0)
        {
            b+='@';
            i+=2;
            at++;
        }
        else if(a.substr(i,2)=="at" and at>0)
        {
            b+="at";
            at++;
            i+=2;
        }
        else if(a.substr(i,3)=="dot")
        {
            b+='.';
            i+=3;
        }
        else
        {
            b+=a[i];
            i++;
        }
        
    }
    co<<b;
    return 0;
}