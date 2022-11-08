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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;

void solve()
{
    ci>>n;
    string a;
    ci>>a;
    char ans[n][n];
    f(i,0,n) f(j,0,n) ans[i][j]='M';
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(i==j) ans[i][j]='X';
            else
            {
                if(a[i]=='1')
                {
                    if(a[j]=='1') ans[i][j]='=';
                    else ans[i][j]='+'; 
                }  
            }
        }
    }
    ll cnt[n]={1};
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(ans[i][j]=='+') ans[j][i]='-';
        }
    }
    f(i,0,n)
    {
        if(a[i]=='2')
        {
            f(j,0,n)
            {
                if(ans[i][j]=='M')
                {
                    ans[i][j]='+';
                    ans[j][i]='-';
                    br
                }
            }
        }
    }
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(ans[i][j]=='M')
            {
                ans[i][j]='+';
                ans[j][i]='-';
            }
        }
    }
    bool ok=true;
    f(i,0,n)
    {
        c=0;
        f(j,0,n) if(ans[i][j]=='+') c++;
        if(a[i]=='2')
        {
            if(c>0) ok=true;
            else ok=false;
        }
    }
    if(!ok)
    {
        con
        return;
    }
    coy
    f(i,0,n)
    {
        f(j,0,n) co<<ans[i][j];
        en
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
        ci>>t;
        // t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}