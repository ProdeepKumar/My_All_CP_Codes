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
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

bool check(vector<ll>&a,vector<ll>&b)
{
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,c,q,r,l,s,t;
    ci>>n;
    vector<ll>a(n),b(n);
    for(ll &x:a) ci>>x;
    for(ll &x:b) ci>>x;
    vector<pi>ans;
    for(ll i=0;i<n;i++)
    {
        c=-1;
        if(check(a,b)) br
        for(ll j=i+1;j<n;j++) 
        {
            if(b[j]==a[i]){
                c=j;
                br
            }
        } 
        if(c==-1) continue;
        for(ll j=c;j>i;j--)
        {
            ans.pb({j,j+1});
            swap(b[j],b[j-1]);
        }
    }
    co<<ans.size()<<endl;
    for(auto it : ans) 
    {
        co<<it.fi<< " "<<it.se<<endl;
    }
    return 0;
}
