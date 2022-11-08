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

vector<pi>fact;

void factorize(long long n) 
{ 
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) 
        fact.pb({count,2}); 
  
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            fact.pb({count,i});
    } 
  
    if (n > 2) 
        fact.pb({1,n});
}

void solve()
{
    ci>>n;
    fact.clear();
    factorize(n);
    sort(allr(fact));
    // for(auto ii:fact) co<<ii.fi<<' '<<ii.se<<endl;
    // en
    vector<ll>tmp,ans;
    for(auto ii:fact)
    {
        f(i,0,ii.fi) tmp.pb(ii.se);
    }
    ll bam=1,dan=1;
    f(i,0,tmp.size())
    {
        bam*=tmp[i];
        dan=n/bam;
        if(dan%tmp[i]==0) ans.pb(tmp[i]);
        else
        {
            bam/=tmp[i];
            br
        }
    }
    ans.pb(n/bam);
    co<<ans.size()<<endl;
    for(auto ii:ans) co<<ii<<' ';
    en
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