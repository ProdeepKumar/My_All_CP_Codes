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
#define sf2(n,m)   scanf("%lld %lld",&n,&m)
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p)
#define pf1(n)     printf("%lld\n",n)
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define p_b        pop_back
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
#define INF        0x3f3f3f3f
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;

ll a[10][10];

void solve()
{
    ci>>n>>k;
    f(i,1,n+1) f(j,1,n+1) ci>>a[i][j];
    if(n==2)
    {
        res=0;
        f(i,2,n+1)
        {
            sum=0;
            sum+=a[1][i]+a[i][1];
            if(sum==k) res++;
        }
        co<<res<<endl;
    }
    else if(n==3)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                sum=a[1][ak]+a[ak][dui]+a[dui][1];
                if(sum==k) res++;
            }
        }
        co<<res<<endl;
    }
    else if(n==4)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                for(ll tin=dui+1;tin<=n;tin++)
                {
                    sum=a[1][ak]+a[ak][dui]+a[dui][tin]+a[tin][1];
                    co<<sum<<endl;
                    if(sum==k) res++;
                } 
            }
        }
        co<<res<<endl;
    }
    else if(n==5)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                for(ll tin=dui+1;tin<=n;tin++)
                {
                    for(ll car=tin+1;car<=n;car++)
                    {
                        sum=a[1][ak]+a[ak][dui]+a[dui][tin]+a[tin][car]+a[car][1];
                    if(sum==k) res++;
                    }
                } 
            }
        }
        co<<res<<endl;
    }
    else if(n==6)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                for(ll tin=dui+1;tin<=n;tin++)
                {
                    for(ll car=tin+1;car<=n;car++)
                    {
                        for(ll pac=car+1;pac<=n;pac++)
                        {
                            sum=a[1][ak]+a[ak][dui]+a[dui][tin]+a[tin][car]+a[car][pac]+a[pac][1];
                        if(sum==k) res++;
                        }
                        
                    }
                } 
            }
        }
        co<<res<<endl;
    }
    else if(n==7)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                for(ll tin=dui+1;tin<=n;tin++)
                {
                    for(ll car=tin+1;car<=n;car++)
                    {
                        for(ll pac=car+1;pac<=n;pac++)
                        {
                            for(ll choi=pac+1;choi<=n;choi++)
                            {
                                sum=a[1][ak]+a[ak][dui]+a[dui][tin]+a[tin][car]+a[car][pac]+a[pac][choi]+a[choi][1];
                                if(sum==k) res++;
                            }
                            
                        }
                        
                    }
                } 
            }
        }
        co<<res<<endl;
    }
    else if(n==8)
    {
        res=0;
        for(ll ak=2;ak<=n;ak++)
        {
            for(ll dui=ak+1;dui<=n;dui++)
            {
                for(ll tin=dui+1;tin<=n;tin++)
                {
                    for(ll car=tin+1;car<=n;car++)
                    {
                        for(ll pac=car+1;pac<=n;pac++)
                        {
                            for(ll choi=pac+1;choi<=n;choi++)
                            {
                                for(ll sat=choi+1;sat<=n;sat++)
                                {
                                    sum=a[1][ak]+a[ak][dui]+a[dui][tin]+a[tin][car]+a[car][pac]+a[pac][choi]+a[choi][sat]+a[sat][1];
                                if(sum==k) res++;
                                }
                                
                            }
                            
                        }
                        
                    }
                } 
            }
        }
        co<<res<<endl;
    }

}

int main()
{
//#ifdef LOCAL
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        t=1;
        // ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}