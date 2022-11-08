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
// template <typename T>using orderedSet = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)

ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;

const ll LOG=20;
ll a[250005];
ll sparse_table[250005][LOG],sparse_table1[250005][LOG];
ll bin_log[250005];
ll pos[250005];

ll querymn(ll L,ll R)
{
    ll length=R-L+1;
    ll k=bin_log[length];
    return min(sparse_table[L][k],sparse_table[R-(1<<k)+1][k]);
}
ll querymx(ll L,ll R)
{
    ll length=R-L+1;
    ll k=bin_log[length];
    return max(sparse_table1[L][k],sparse_table1[R-(1<<k)+1][k]);
}
void preprocess()
{
    for(ll i=0;i<n;i++) sparse_table[i][0]=sparse_table1[i][0]=a[i];
    for(ll j=1;j<LOG;j++)
    {
        for(ll i=0;i+(1<<j)-1<n;i++)
        {
            sparse_table[i][j]=min(sparse_table[i][j-1],sparse_table[i+(1<<(j-1))][j-1]);
            sparse_table1[i][j]=max(sparse_table1[i][j-1],sparse_table1[i+(1<<(j-1))][j-1]);
        }
    }
}
void call(ll L,ll R,ll chk)
{
    if(L==R) return;
    if(chk==0)
    {
        ll nxt_id=querymn(L,R);
        nxt_id=pos[nxt_id];
        // co<<"for left: "<<nxt_id<<endl;
        res++;
        call(L,nxt_id,1LL-chk);
    }
    else
    {
        ll nxt_id=querymx(L,R);
        nxt_id=pos[nxt_id];
        // co<<"for left: "<<nxt_id<<endl;
        res++;
        call(L,nxt_id,1LL-chk);
    }
}
void calr(ll L,ll R,ll chk)
{
    if(L==R) return;
    if(chk==0)
    {
        ll nxt_id=querymn(L,R);
        nxt_id=pos[nxt_id];
        // co<<"for right: "<<nxt_id<<endl;
        res++;
        calr(nxt_id,R,1LL-chk);
    }
    else
    {
        ll nxt_id=querymx(L,R);
        nxt_id=pos[nxt_id];
        // co<<"for right: "<<nxt_id<<endl;
        res++;
        calr(nxt_id,R,1LL-chk);
    }
}

void solve()
{
    ci>>n;
    f(i,0,n) ci>>a[i],pos[a[i]]=i;
    preprocess();
    res=0;
    call(0,pos[n],0);
    calr(pos[n],n-1,0);
    co<<res<<endl;
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
        bin_log[1]=0;
        for(ll i=2;i<=250001;i++) bin_log[i]=bin_log[i/2]+1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}