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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
map<ll,ll>mp;
void solve()
{
    ci>>n;
    vector<string>a(n);
    f(i,0,n) ci>>a[i];
    mp.clear();
    res=0;
    f(i,0,n)
    {
        string st=a[i];
        x=0;
        bool good=true,goood=true;
        f(j,0,st.size())
        {
            if(st[j]=='(') x++;
            else x--;
            if(x<0) good=false;
        }
        if(x==0 and good)
        {
            res++;
            continue;
        }
        y=0;
        r(j,st.size()-1,0)
        {
            if(st[j]==')') y++;
            else y--;
            if(y<0) goood=false;
        }
        if(x>0 and good) mp[x]++;
        if(x<0 and goood) mp[x]++;
    }
    res=res*res;
    for(auto ii:mp)
    {
        if(ii.fi>0) br
        if(mp.find(-ii.fi)!=mp.end()) res+=ii.se*mp[-ii.fi];
    }
    co<<res<<endl;
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