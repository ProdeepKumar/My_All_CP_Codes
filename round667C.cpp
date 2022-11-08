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

bool chk(vector<ll>&a,ll x,ll y,ll n)
{
    ll cn=0;
    f(i,0,n)
    {
        if(a[i]==x or a[i]==y) cn++;
    }
    if(cn==2) return true;
    else return false;
}

int main()
{
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n>>x>>y;
        vector<ll>ans,anss;
        bool fl=false;
         mn=1e15;
        for(ll i=x;i>=1;i--)
        {
            for(ll j=50;j>=1;j--)
            {
                ans.clear();
                ans.pb(i);
                ll cur=j;
                for(k=1;k<n;k++)
                {
                    ans.pb(i+cur);
                    cur+=j;
                } 
                if(chk(ans,x,y,n) )
                {
                    // for(auto ii:ans) co<<ii<< ' ';
                    // en
                    if(ans[n-1]<mn)
                    {
                        mn=ans[n-1];
                        anss=ans;
                        //co<<mn<< " ";
                    }
                   // en
                    //anss=ans;
                }
            }
            //if(fl) br
        }
        //co<<mn<<endl;
        f(i,0,n) co<<anss[i]<< " ";
        en
    }
    return 0;
}