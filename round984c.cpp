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

void solve()
{
    ci>>n>>m;
    vector<string>aa;
    f(i,0,n)
    {
        string ss;
        ci>>ss;
        aa.pb(ss);
    }
    ll a[n][m];
    f(i,0,n)
    {
        f(j,0,m){
            a[i][j]=(aa[i][j]-'0');
        }
    }
    vector<pi>ans;
    f(j,0,m-2)
    {
        f(i,0,n-1)
        {
            if(a[i][j])
            {
                ans.pb({i+1,j+1});
                ans.pb({i+2,j+1});
                ans.pb({i+2,j+2});
                a[i][j]=1-a[i][j];
                a[i+1][j]=1-a[i+1][j];
                a[i+1][j+1]=1-a[i+1][j+1];
            }
        }
        if(a[n-1][j])
        {
            ans.pb({n,j+1});
            ans.pb({n,j+2});
            ans.pb({n-1,j+2});
            a[n-1][j]=1-a[n-1][j];
            a[n-1][j+1]=1-a[n-1][j+1];
            a[n-2][j+1]=1-a[n-2][j+1];
        }
    }
    if(n&1)
    {
        if(a[n-1][m-2] and a[n-1][m-1])
        {
            a[n-1][m-2]=0;
            a[n-1][m-1]=0;
            a[n-2][m-1]=1-a[n-2][m-1];
            ans.pb({n,m-1});
            ans.pb({n,m});
            ans.pb({n-1,m});
        }
        else if(!a[n-1][m-2] and a[n-1][m-1])
        {
            a[n-2][m-1]=1-a[n-2][m-1];
            a[n-1][m-1]=0;
            a[n-2][m-2]=1-a[n-2][m-2];
            ans.pb({n-1,m});
            ans.pb({n,m});
            ans.pb({n-1,m-1});
        }
        else if(a[n-1][m-2] and !a[n-1][m-1])
        {
            a[n-1][m-2]=0;
            a[n-2][m-1]=1-a[n-2][m-1];
            a[n-2][m-2]=1-a[n-2][m-2];
            ans.pb({n,m-1});
            ans.pb({n-1,m-1});
            ans.pb({n-1,m});
        }
    }
    for(ll i=0;i<=n-2;i+=2)
    {
        x=a[i][m-2]+a[i][m-1]+a[i+1][m-2]+a[i+1][m-1];
        if(x==4)
        {
            ans.pb({i+1,m});
            ans.pb({i+2,m-1});
            ans.pb({i+2,m});

            ans.pb({i+1,m-1});
            ans.pb({i+1,m});
            ans.pb({i+2,m});

            ans.pb({i+1,m-1});
            ans.pb({i+2,m-1});
            ans.pb({i+2,m});

            ans.pb({i+1,m-1});
            ans.pb({i+1,m});
            ans.pb({i+2,m-1});
        }
        else if(x==3)
        {
            if(a[i][m-2]) ans.pb({i+1,m-1});
            if(a[i][m-1]) ans.pb({i+1,m});
            if(a[i+1][m-2]) ans.pb({i+2,m-1});
            if(a[i+1][m-1]) ans.pb({i+2,m});
        }
        else if(x==2)
        {
            if(a[i][m-2] and a[i][m-1])
            {
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});
            }
            else if(a[i+1][m-2] and a[i+1][m-1])
            {
                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
            else if(a[i][m-2] and a[i+1][m-2])
            {
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});
            }
            else if(a[i][m-1] and a[i+1][m-1])
            {
                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
            else if(a[i][m-2] and a[i+1][m-1])
            {
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
             else if(a[i][m-1] and a[i+1][m-2])
            {
                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});
            }

        }
        else if(x==1)
        {
            if(a[i][m-2])
            {
                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
            else if(a[i][m-1])
            {
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
            else if(a[i+1][m-2])
            {
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
            }
            else if(a[i+1][m-1])
            {
                ans.pb({i+1,m-1});
                ans.pb({i+1,m});
                ans.pb({i+2,m});

                ans.pb({i+1,m});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});

                ans.pb({i+1,m-1});
                ans.pb({i+2,m-1});
                ans.pb({i+2,m});
            }
        }
        else if(!x) continue;
    }
    co<<ans.size()/3<<endl;
    c=0;
    for(auto ii:ans)
    {
        c++;
        co<<ii.fi<< ' '<<ii.se<<' ';
        if(c%3==0) en
    }


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