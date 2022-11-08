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
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
map<pair<ll,ll>,ll>mp;
ll func(ll n)
{
    if(n==0) return 0;
   x=n;
   c=0;
   while(x)
   {
       c++;
       x/=10;
   }
   x=n+1;
   ll mul=1;
   f(i,1,c+1)
   {
       mul*=n%(ll)ceil(pow(10LL,i));
       mul%=x;
   }
   return mul;
}
ll call(ll n,ll m)
{
    //if(mp.find(make_pair(n,m))!=mp.end()) return mp[{n,m}];
    if(m==1) return /*mp[{n,m}]=*/func(n);
    else return /* mp[{n,m}]=*/func(call(n,m-1));
}

void solve()
{
    ci>>n>>m;
    res=0;
    mp.clear();
    ll i=1;
    ll prev;
    for( ;i<=m;i++){
        x=func(n);
        if(prev==x)
        {
            br
        }
        //co<<x<<' ';
        res+=x;
        prev=x;
        n=x;
    } 
    res+=(m-i+1)*prev;
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
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}