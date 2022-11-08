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
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;

ll str_to_num(string str)
{
    sum=0;
    reverse(all(str));
    ll xx=1;
    f(i,0,str.size())
    {
        sum+=(str[i]-'0')*xx;
        xx*=10;
    }
    return sum;
}
void solve()
{
    string a;
    ci>>a;
    n=a.size();
    if(n==1)
    {
        co<<(a[0]-'0')<<endl;
        return;
    }
    if(n==2)
    {
        res=(a[0]-'0')+(a[1]-'0');
        res+=(a[0]-'0')*10+(a[1]-'0');
        co<<res<<endl;
        return;
    }
    res=0;
    if(n==3)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==4)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==5)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==6)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=4;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==7)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=4;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=5;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==8)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=4;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=5;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=6;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==9)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=4;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=5;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=6;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=7;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
    }
    if(n==10)
    {
        ll i=0,j=0;
        c=0;
        ll prev=powl(2LL,n-2);
        ll cnt=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=1;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=2;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=3;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=4;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=5;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=6;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=7;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        cnt++;
        prev/=2;
        i=0;j=8;
        c=0;
        for(;i<n and j<n;i++,j++)
        {
            string str=a.substr(i,j+1);
            c++;
            ll mul;
            if(c==1 or c==n-cnt) mul=prev;
            else mul=prev/2;
            res+=str_to_num(str)*mul;
        }
        res+=str_to_num(a);
        co<<res<<endl;
        return;
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