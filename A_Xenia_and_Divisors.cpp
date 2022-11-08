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
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    ll one,two,three,four,five,six,seven;
    one=two=three=four=five=six=seven=0;
    f(i,0,n)
    {
        if(a[i]==1) one++;
        else if(a[i]==2) two++;
        else if(a[i]==3) three++;
        else if(a[i]==4) four++;
        else if(a[i]==5) five++;
        else if(a[i]==6) six++;
        else if(a[i]==7) seven++;
    }
    if(five or seven)
    {
        co<<-1<<endl;
        return;
    }
    if(one!=(n/3))
    {
        co<<-1<<endl;
        return;
    }
    if(three>six)
    {
        co<<-1<<endl;
        return;
    }
    six-=three;
    if(four+six!=two)
    {
        co<<-1<<endl;
        return;
    }
    f(i,0,three) co<<1<<' '<<3<<' '<<6<<endl;
    f(i,0,four) co<<1<<' '<<2<<' '<<4<<endl;
    f(i,0,six) co<<1<<' '<<2<<' '<<6<<endl;
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