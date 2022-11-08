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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,t;

void solve(ll kas)
{
    string a,b;
    ci>>a>>b;
    n=a.size();
    m=b.size();
    ll dp[n+1][m+1];
    string s[n+1][m+1];
    f(i,0,n+1)
    {
        dp[i][0]=0;
        s[i][0]="";
    }
    f(i,0,m+1)
    {
        dp[0][i]=0;
        s[0][i]="";
    }
    f(i,1,n+1)
    {
        f(j,1,m+1)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                s[i][j]=s[i-1][j-1]+a[i-1];
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                dp[i][j]=dp[i-1][j];
                s[i][j]=s[i-1][j];
            }
            else if(dp[i-1][j]<dp[i][j-1])
            {
                dp[i][j]=dp[i][j-1];
                s[i][j]=s[i][j-1];
            }
            else
            {
                dp[i][j]=dp[i][j-1];
                s[i][j]=min(s[i][j-1],s[i-1][j]);
            }
            
        }
    }
    //f(i,1,n+1) f(j,1,m+1) co<<dp[i][j]<<' ';
    if(dp[n][m]==0) co<<"Case "<<kas<< ": :("<<endl;
    else co<< "Case "<<kas<<": "<<s[n][m]<<endl;

}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//         auto start_time = clock();
//         cerr << setprecision(3) << fixed;
// //#endif
//         cout << setprecision(10) << fixed;
//         ios::sync_with_stdio(false);
//         cin.tie(nullptr);
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve(ca+1);
        }
//#ifdef LOCAL
//         auto end_time = clock();
//         cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
// //#endif
}