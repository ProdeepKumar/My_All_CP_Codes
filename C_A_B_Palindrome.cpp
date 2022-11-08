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
    string a;
    ci>>a;
    ll one=0,zero=0;
    f(i,0,a.size()) 
    {
        if(a[i]=='1') one++;
        else if(a[i]=='0') zero++;
    }
    if(one+zero==a.size())
    {
        string b;
        b=a;
        reverse(all(b));
        if(a==b)
        {
            if(one!=m or zero!=n)
            {
                co<<-1<<endl;
                return;
            }
            co<<a<<endl;
            return;
        }
        else
        {
            co<<-1<<endl;
            return;
        }
        
    }
    n-=zero;
    m-=one;
    ll siz=a.size();
    f(i,0,siz/2)
    {
        
        if(a[i]!='?' and a[siz-i-1]!='?')
        {
            if(a[i]!=a[siz-i-1])
            {
                co<<-1<<endl;
                return;
            }
        }
        if(a[i]=='1' and a[siz-i-1]=='?')
        {
            if(m>0)
            {
                a[siz-i-1]='1';
                m--;
            }
            else
            {
                co<<-1<<endl;
                return;
            }
        }
        else if(a[i]=='?' and a[siz-i-1]=='1')
        {
            if(m>0)
            {
                a[i]='1';
                m--;
            }
            else
            {
                co<<-1<<endl;
                return;
            }
        }
        else if(a[i]=='0' and a[siz-i-1]=='?')
        {
            if(n>0)
            {
                a[siz-i-1]='0';
                n--;
            }
            else
            {
                co<<-1<<endl;
                return;
            }
        }
        else if(a[i]=='?' and a[siz-i-1]=='0')
        {
            if(n>0)
            {
                a[i]='0';
                n--;
            }
            else
            {
                co<<-1<<endl;
                return;
            }
        }
        else if(a[i]=='?' and a[siz-i-1]=='?')
        {
            if(n>m and n>=2)
            {
                a[i]='0';
                a[siz-i-1]='0';
                n-=2;
            }
            else if(m>n and m>=2)
            {
                a[i]='1';
                a[siz-i-1]='1';
                m-=2;
            }
            else if(n==m and n>=2)
            {
                a[i]='1';
                a[siz-i-1]='1';
                m-=2;
            }
            else
            {
                co<<-1<<endl;
                return;
            }  
        }
        // co<<"test: "<<a<<" n: "<<n<<" m: "<<m<<endl;;
    }
    if(siz&1)
    {
        if(a[(siz/2)]=='?'){
            if(n>0)
            {
                a[(siz/2)]='0';
                n--;
            }
            else if(m>0)
            {
                a[(siz/2)]='1';
                m--;
            }
            else
            {
                co<<-1<<endl;
                return;
            }  
        }
    }
    if(n==0 and m==0) co<<a<<endl;
    else co<<-1<<endl;
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