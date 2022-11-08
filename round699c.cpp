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
ll n,m,k,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
ll bcnt[100005],ccnt[100005];
vector<ll>vul[100005],thik[100005];

void solve()
{
    ci>>n>>m;
    vector<ll>a(n),b(n),c(m);
    mem(bcnt,0);
    mem(ccnt,0);
    for(auto &x:a) ci>>x;
    for(auto &x:b) ci>>x,bcnt[x]++;
    for(auto &x:c) ci>>x,ccnt[x]++;
    f(i,0,n+1) vul[i].clear(),thik[i].clear();
    if(bcnt[c.back()]==0)
    {
        co<<"sesh val nai"<<endl;
        con
        return;
    }
    f(i,0,n)
    {
        if(a[i]!=b[i]) vul[b[i]].pb(i+1);
        else thik[b[i]].pb(i+1);

    }
    vector<ll>ans(m);
    f(i,0,m)
    {
        if(ccnt[c[i]]<vul[c[i]].size())
        {

            con
            return;
        }
        if(bcnt[c[i]]==0)
        {
            if(!vul[c.back()].empty()) ans[i]=vul[c.back()].back();
            else ans[i]=thik[c.back()].back();

        }
        else
        {
            if(!vul[c[i]].empty()){
                 ans[i]=vul[c[i]].back();
                vul[c[i]].pop_back();
                ccnt[c[i]]--;
                co<<"vul ok";
            }
            else if(!thik[c[i]].empty())
            {
                 ans[i]=thik[c[i]].back();
                //thik[c[i]].pop_back();
                ccnt[c[i]]--;
                co<<"thik ok";
            }
           
            
            
           
        }
        
    }
    coy
    f(i,0,m) co<<ans[i]<<' ';
    en

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