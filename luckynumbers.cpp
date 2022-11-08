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

ll n,m,g,mx,mn,res=1000000000000000000,c,x,y,z,w,p,q,r,l,s,t;

bool chk(ll n)
{
    ll four=0,seven=0,other=0;
    while(n)
    {
        ll x=n%10;
        if(x==4) four++;
        else if(x==7) seven++;
        else other++;
        n/=10;
    }
    if(four==0 or seven==0) return false;
    else if(four==seven and other==0) return true;
    else return false;
}

void binsearch(ll lo,ll hi)
{
    if(lo==hi) return;
    ll mid=(hi+lo)/2;
    co<<mid<<endl;
    if(mid>=n)
    {
        if(chk(mid))
        {
            res=min(res,mid);
            binsearch(lo,mid-1);
        }
        else
        {
            binsearch(lo,mid-1);
            binsearch(mid+1,hi);
        }
        
    }
    else binsearch(mid+1,hi);
    co<<res<< " ";
    
}

int main()
{
    ci>>n;
    vector<ll>ans;
    for(ll i=2;i<=10;i+=2)
    {
        vector<ll>store;
        f(j,0,i/2) store.pb(4);
        f(j,0,i/2) store.pb(7);
        ll sum=0;
        f(j,0,i)
        {
            sum=sum*10+store[j];
        }
        ans.pb(sum);
        while(next_permutation(all(store)))
        {
            ll sum=0;
            f(j,0,i)
            {
                sum=sum*10+store[j];
            }
            ans.pb(sum);
        }
    }
    sort(all(ans));
    x=lower_bound(all(ans),n)-ans.begin();
    co<<ans[x];
    return 0;
}