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
ll n,m,g,mx,mn,res,c,x,y,z,w,p,M,q,r,l,s,t;
vector<ll>A,B,C;

ll cal(ll i,ll j,ll k)
{
    ll ss=((A[i]+B[j])*(A[i]^B[j]))%M;
    ss+=((A[i]+C[k])*(A[i]^C[k]))%M;
    return ss;
}

ll call()
{
    f(i,0,A.size())
    {
        f(j,0,B.size())
        {
            f(k,0,C.size())
            {
                ll sum=cal(i,j,k);
                if(sum>mx)
                {
                    mx=sum;
                    p=i;
                    q=j;
                    r=k;
                }
            }
        }
    }
    A.erase(A.begin()+p);
    B.erase(B.begin()+q);
    C.erase(C.begin()+r);
    return mx;
}

void solve()
{
    ci>>n>>m>>M;
    A.clear();
    B.clear();
    C.clear();
    p=q=r=-1;
    mx=0;
    f(i,0,n) ci>>x,A.pb(x);
    f(i,0,n) ci>>x,B.pb(x);
    f(i,0,n) ci>>x,C.pb(x);
    res=0;
    f(ii,0,m)
    {
        mx=0;
        p=q=r=-1;
        res+=call();
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