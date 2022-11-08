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

int main()
{
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        string a;
        ci>>a;
        x=y=0;
        f(i,0,n)
        {
            if(a[i]=='L') x++;
            else y++;
        }
        if(x==n or y==n) 
        {
            co<<(n+2)/3<<endl;
            continue;
        }
        res=0;
        ll i=0,j=n-1;
        if(a.front()==a.back())
        {
            char ch=a.front();
            x=y=0;
            while(a[i]==ch)
            {
                i++;
                x++;
            }
            while(a[j]==ch)
            {
                j--;
                y++;
            }
            res+=(x+y)/3;
        }
        for(ll it=i;it<=j;it++)
        {
            if(a[it]=='R')
            {
                ll cnt=0;
                while(a[it]=='R')
                {
                    it++;
                    cnt++;
                }
                res+=cnt/3;
            }
            else
            {
                ll cnt=0;
                while(a[it]=='L')
                {
                    it++;
                    cnt++;
                }
                res+=cnt/3;
            }
            it--;
        }
        co<<res<<endl;
        
    }
    return 0;
}