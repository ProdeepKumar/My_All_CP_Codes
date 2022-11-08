//#pragma GCC target("avx,avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
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

void solve()
{
    ci>>n>>m;
    ll sum=0;
    priority_queue<ll>pq;
    vector<ll>a(m),b(m);
    for(auto &x:a) ci>>x,pq.push(x);
    sort(allr(a));
    b=a;
    c=0;
    ll ff=0;
    f(i,0,n)
    {
        x=pq.top();
        if(x)
        {
            c++;
            sum+=x;
            pq.pop();
            x--;
            pq.push(x);
        } 
    }
    a=b;
    mx=sum;
    sum=0;c=0;
    while(true)
    {
        ll ff=0;
        r(i,m-1,0)
        {
            if(c+a[i]<=n)
            {
                c+=a[i];
                x=a[i]*(a[i]+1);
                x/=2;
                sum+=x;
            }
            else
            {
                while(c<n)
                {
                    c++;
                    sum+=a[i];
                    a[i]--;
                }
            }
            if(c==n)
            {
                ff=1;
                br
            }
            
        }
        if(ff) br
    }
    mn=sum;
    co<<mx<<' '<<mn<<endl;


}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        // ci>>t;
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