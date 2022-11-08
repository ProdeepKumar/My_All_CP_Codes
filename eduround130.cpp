#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define kase       "Case "<<ka<<": "
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

//Policy Based Data Structure(Randomly access into set in log(n) time)
template <typename T>using Set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// typedef tree<int, null_type, less<int>, rb_tree_tag,
//         tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)

ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;


void solve()
{
    ci>>n;
    string a,b;
    ci>>a>>b;
    Set<ll>pos[3];
    ll fr[3]={0},frr[3]={0};
    for(auto ii:a) fr[ii-'a']++;
    for(auto ii:b) frr[ii-'a']++;
    f(i,0,3)
    {
        if(fr[i]!=frr[i])
        {
            con
            return;
        }
    }
    f(i,0,n) pos[a[i]-'a'].insert(i);
    for(int i=0;i<3;i++) pos[i].insert(n);
    f(i,0,n)
    {
        if(a[i]==b[i]) continue;
        if(a[i]=='a' and b[i]=='b')
        {
            co<<"now here "<<i<<endl;
            x=pos[1].order_of_key(i);
            x=*pos[1].find_by_order(x);
            y=pos[2].order_of_key(i);
            y=*pos[2].find_by_order(y);
            co<<x<<' '<<y<<endl;
            if(x<y and x<n)
            {
                co<<"done"<<endl;
                swap(a[i],a[x]);
                pos[1].erase(pos[1].find(x));
                pos[0].insert(x);
                for(auto ii:pos)
                {
                    for(auto jj:ii) co<<jj<<' ';
                    en
                }
            }
            else
            {
                con
                return;
            }
        }
        else if(a[i]=='b' and b[i]=='c')
        {
            co<<"now here "<<i<<endl;
            x=pos[0].order_of_key(i);
            x=*pos[0].find_by_order(x);
            y=pos[2].order_of_key(i);
            y=*pos[2].find_by_order(y);
            co<<x<<' '<<y<<endl;
            if(x>y and y<n)
            {
                swap(a[i],a[y]);
                pos[2].erase(pos[2].find(y));
                pos[1].insert(y);
                for(auto ii:pos)
                {
                    for(auto jj:ii) co<<jj<<' ';
                    en
                }
            }
            else
            {
                
                con
                return;
            }
        }
        else
        {
            co<<a<<endl<<b<<endl<<i<<endl;
            con
            return;
        }
    }
    coy
    return;
    
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
        ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}