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

ll dp[10][100][2][10001][11];
vector<ll>num;

bool is_prime(ll nn)
{
    if(nn==0 or nn==1) return false;
    for(ll ii=2;ii<nn;ii++) if(nn%ii==0) return false;
    return true;
}
///ll k;
ll cnt=0;
ll call(ll pos,ll sum,ll flag,ll ok,ll suru)
{
    // co<<pos<<' '<<sum<<endl;
    if(pos==num.size())
    {
        if(ok==0) cnt++;
        if(sum%k==0 and ok==0 and suru!=11) return 1;
        else return 0;
    }
    ///if(is_prime(sum)) return 1;
    if(dp[pos][sum][flag][ok][suru]!=-1) return dp[pos][sum][flag][ok][suru];   // 2 9
    ll lt;
    if(flag==0) lt=num[pos];
    else lt=9;

    ll xx=0;
    ll gun;
    for(ll it=0;it<=lt;it++)
    {
        /*ll fl=0;
        if(flag==0 and it<lt) fl=1;
        // co<<sum<<' '<<it<<endl;
        xx+=call(pos+1,sum+it,fl);*/
        ll add;
        if(suru==11)
        {
            if(it==0)
            {
                add=0;
                gun=11;
            }
            else
            {
                add=it;
                gun=pos;
            }
        }
        else
        {
            gun=suru;
            add=it+(ok*(powl(10LL,pos-suru)));
        }
        if(flag==0 and it<lt) xx+=call(pos+1,sum+it,1,add%k,gun);
        else if(flag==0 and  it==lt) xx+=call(pos+1,sum+it,0,add%k,gun);
        else xx+=call(pos+1,sum+it,1,add%k,gun);
    }
    return dp[pos][sum][flag][ok][suru]=xx;
}
ll calc(ll nn)
{
    num.clear();
    while(nn)
    {
        num.pb(nn%10);
        nn/=10;
    }
    reverse(all(num));
    mem(dp,-1);
    return call(0,0,0,0,11);
}
void solve()
{
    cnt=0;
    cin>>n>>m>>k;
    if(n==0) n++;
    ///cout<<calc(m)-calc(n-1)<<endl;
    cout<<calc(m)<<endl;
    cout<<cnt<<endl;
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