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
ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
map<pair<pair<ll,ll>,ll>,ll> mp;
void solve()
{
    mp.clear();
    ci>>n>>m;
    char a[n+1][m+1];
    res=0;
    f(i,1,n+1)
    {
        f(j,1,m+1)
        {
            ci>>a[i][j];
            if(a[i][j]=='*') res++;
        }
    }
    f(k,2,n+1)
    {
        f(i,1,n+1)
        {
            f(j,1,m+1)
            {
                if(a[i][j]=='.') continue;
                if(mp[{{i,j},k}])
                {
                    res++;
                    continue;
                }
                ll xx=i,yy=j;
                ll need=1;
                c=1;
                if(yy+need-1>m) continue;
                ll vulpaisi=0,cnt=0;
                while(xx<=n and yy>0 and c<=k and yy+need-1<=m)
                {
                     vulpaisi=0;
                    for(ll ii=yy,jj=yy+need-1;ii<=jj;ii++,jj--)
                    {
                        if(a[xx][ii]!='*' or a[xx][jj]!='*')
                        {
                            vulpaisi=1;
                            br
                        }
                        else
                        {
                            if(i!=j) cnt+=2;
                            else cnt++;
                        }
                    }
                    if(vulpaisi) br
                    need+=2;
                    xx++;
                    yy--;
                    c++;
                }
                //co<<"k: "<<k<<" cnt: "<<cnt<<" for i: "<<i<<" j: "<<j<<endl;
                if(cnt==(k*k))
                {
                    res++;
                    mp[{{i,j},k}]=1;
                }
            }
        }
    }
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