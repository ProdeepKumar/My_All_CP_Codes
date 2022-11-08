#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<conio.h>
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
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;
map<char,ll>mp;

void solve(ll ka)
{
    string a,b;
    // getchar();
    getline(cin,a);
    // getchar();
    getline(cin,b);

    co<<"Case "<<ka<<": ";

    f(i,0,a.size()) 
    {
        if(a[i]==' ') continue;
        a[i]=tolower(a[i]);
    }
    f(i,0,b.size()) 
    {
        if(b[i]==' ') continue;
        b[i]=tolower(b[i]);
    }
    // co<<a<<endl<<b<<endl;
    ll fr[26]={0},frr[26]={0};

    f(i,0,a.size()) if(a[i]>='a' and a[i]<='z') fr[a[i]-'a']++;
    f(i,0,b.size()) if(b[i]>='a' and b[i]<='z') frr[b[i]-'a']++;
    // en
    // f(i,0,26) co<<fr[i]<<' '<<frr[i]<<endl;



    bool ok=true,okk=true;
    f(i,0,a.size())
    {
        if(a[i]==' ') continue;
        if((frr[a[i]-'a']<fr[a[i]-'a']))
        {
            ok=false;
            br
        }
    }
    f(i,0,b.size())
    {
        if(b[i]==' ') continue;
        if((fr[b[i]-'a']<frr[b[i]-'a']))
        {
            okk=false;
            br
        }
    }
    if(ok or okk) coy
    else con
    
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
        // ios::sync_with_stdio(false);
        // cin.tie(nullptr);
        t=1;
        ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            if(ca==0) getchar();
            solve(ca+1);
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}