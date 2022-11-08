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
    ll ans[a.size()]={0};
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]=='a')
        {
            while(a[i]=='a' and i<a.size()) i++;
            reverse(a.begin(),a.begin()+i);
            i--;
            ans[i]=1;
        }
        else
        {
            while(a[i]=='b' and i<a.size()) i++;
            if(i!=a.size()){
                reverse(a.begin(),a.begin()+i);
                ans[i-1]=1;
            }
            i--;
        } 
    }
    f(i,0,a.size()) co<<ans[i]<< ' ';
    return 0;
}