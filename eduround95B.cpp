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
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a(n),b(n),ans(n);
        for(auto &x:a) ci>>x;
        for(auto &x:b) ci>>x;
        ll poscnt=0,negcnt=0;
        vector<ll>pos,neg;
        f(i,0,n)
        {
            if(b[i]==0)
            {
                if(a[i]>=0) pos.pb(a[i]),poscnt+=a[i];
                else neg.pb(a[i]),negcnt+=a[i];
            }
        }
        sort(allr(neg));
        sort(allr(pos));
        ll i=0;
        ll ii=0;
        f(j,0,n)
        {
            if(b[j]==0)
            {
                if(i<pos.size()) ans[j]=pos[i++];
                else ans[j]=neg[ii++];
            }
            else ans[j]=a[j];
        }
        // if(poscnt>negcnt)
        // {
        //     ll i=0;
        //     ll ii=0;
        //     f(j,0,n)
        //     {
        //         if(b[j]==0)
        //         {
        //             if(i<pos.size()) ans[j]=pos[i++];
        //             else ans[j]=neg[ii++];
        //         }
        //         else ans[j]=a[j];
        //     }
        // }
        // else if(negcnt>=poscnt)
        // {
        //     ll i=0;
        //     ll ii=0;
        //     f(j,0,n)
        //     {
        //         if(b[j]==0)
        //         {
        //             if(i<neg.size()) ans[j]=neg[i++];
        //             else ans[j]=pos[ii++];
        //         }
        //         else ans[j]=a[j];
        //     }
        // }
        for(ll x:ans) co<<x<<' ';
        en
    }
    return 0;
}