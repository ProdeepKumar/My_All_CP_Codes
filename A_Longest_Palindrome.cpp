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
map<string,ll>mp;
void solve()
{
    ci>>n>>m;
    vector<string>a(n);
    mp.clear();
    f(i,0,n) ci>>a[i],mp[a[i]]++;
    set<pair<string,ll>>st;
    string ans;
    f(i,0,n)
    {
        string ss=a[i];
        reverse(all(ss));
        if(mp[ss] and ss!=a[i])
        {
            st.insert({ss,min(mp[ss],mp[a[i]])});
            mp[a[i]]=mp[ss]=0;
        } 
        else if(mp[ss] and ss==a[i])
        {
            if(mp[ss]>1) st.insert({ss,mp[ss]/2});
            else
            {
                if(ss.size()>ans.size()) ans=ss;
            }
            mp[ss]=0;
        }
    }
    deque<string>dq;
    if(!ans.empty()) dq.push_back(ans);
    for(auto ii:st)
    {
       f(i,0,ii.se) dq.push_back(ii.fi);
       string sm=ii.fi;
       reverse(all(sm));
       f(i,0,ii.se) dq.push_front(sm); 
    }  
    co<<dq.size()*m<<endl;
    while(!dq.empty())
    {
        co<<dq.front();
        dq.pop_front();
    }
    en
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