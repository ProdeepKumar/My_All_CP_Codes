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

ll fact(ll n)
{
    if(n==1 or n==0) return 1;
    return n*fact(n-1);
}
void solve()
{
    ci>>n;
    string a;
    ci>>a;
    ll freq[26]={0};
    f(i,0,n) freq[a[i]-'a']++;
    c=0;
    f(i,0,26) if(freq[i]&1) c++;
    if(c>1) 
    {
        co<<0<<endl;
        return;
    }
    ll tot=0;
    vector<ll>tmp;
    f(i,0,26)
    {
        if(freq[i]!=0 and freq[i]%2==0) 
        {
            tot+=freq[i]/2;
            tmp.pb(freq[i]/2);
        }
        else if(freq[i]!=0 and freq[i]%2) 
        {
            tot+=(freq[i]-1)/2;
            tmp.pb((freq[i]-1)/2);
        }
    }
    res=fact(tot);
    c=1;
    for(ll ii:tmp) c*=fact(ii);
    res/=c;
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