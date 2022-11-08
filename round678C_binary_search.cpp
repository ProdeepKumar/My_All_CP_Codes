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
ll cnt[1005]={0};

#define PRIME 1000000007
// Returns (x^n) % PRIME
ll binary_exp(ll x, ll n)
{
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x % PRIME;
    } else {
        ll temp = binary_exp(x, n / 2);
        temp = (temp * temp) % PRIME;
 
        if (n % 2 == 0) {
            return temp;
        } else {
            return ((x % PRIME) * temp) % PRIME;
        }
    }
}
ll M=1e9+7;
 
ll FactMod(ll n)
{
    ll fact=1;
   for(ll i=1;i<=n;i++)
   {
      fact=((fact%M)*i)%M;
   }
   return fact;
}

void binsearch(ll a[],ll x)
{
    ll left=0;
    ll right=n;
    while(left<right)
    {
        ll middle=(left+right)/2;
        cnt[middle]=1;
        if(a[middle]<=x) left=middle+1;
        else right=middle;
    }
    // if(left>0 and a[left-1]==x)
    //     return true;
    // else return false;
}

void solve()
{
    ci>>n>>x>>p;
    
    //cnt[p]=x;
    ll another[n+1];
    f(i,0,n) another[i]=i+1;
    ll val=another[p];
    binsearch(another,val);
   // f(i,0,n) co<<cnt[i]<<' ';
    ll leftcnt=0,rightcnt=0;
    f(i,0,p) if(cnt[i]) leftcnt++;
    f(i,p+1,n) if(cnt[i]) rightcnt++;
    res=1;
    if(leftcnt>x-1 or rightcnt>n-x) res=0;
    //co<<"lef : "<<leftcnt<<" rig : "<<rightcnt<<endl;
    ll xx=FactMod(x-1);
    ll yy=FactMod(x-1-leftcnt);
    //co<< "xx: "<<xx<<" yy: "<<yy<<endl;
    yy=binary_exp(yy,M-2);
    res=res*(xx*yy)%M;
    //res=((res*FactMod(x-1))%M/FactMod(x-1-leftcnt))%M;
   // co<<endl<< "res: "<<res<<endl;
    //if(res==0) res++;
    //res+=M;
    xx=FactMod(n-x);
    yy=FactMod(n-x-rightcnt);
    //co<< "xx: "<<xx<<" yy: "<<yy<<endl;
    yy=binary_exp(yy,M-2);
    xx=(xx*yy)%M;
    res=(res*xx)%M;
    
    //res=((res*FactMod(n-x))%M/FactMod(n-x-rightcnt))%M;
   // co<<endl<< "res: "<<res<<endl;
    //if(res==0) res++;
    //res+=M;
    res=(res*FactMod(n-leftcnt-rightcnt-1))%M;
    //co<<endl<< "res: "<<res<<endl;
    co<<res<<endl;
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
//#endif
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        //ci>>t;
        t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}