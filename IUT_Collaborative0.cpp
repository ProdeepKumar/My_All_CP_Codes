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

// ll n,m,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;
ll t;

unordered_map<string, int> mem;
 
int process(string& s, int l, int r)
{
    int ans = 1;
    if (l > r)
        return 0;
    // check if we've already solved this
    if (mem.find(s.substr(l, r - l + 1)) != mem.end())
        return mem[s.substr(l, r - l + 1)];
    for (int len = 1; len <= (r - l + 1) / 2; len++) {
        if (s.substr(l, len) == s.substr(r - len + 1, len))
            ans = max(ans,
                      2 + process(s, l + len, r - len));
    }
    // remember result for future
    mem[s.substr(l, r - l + 1)] = ans;
    return ans;
}
 
int LPC(string s) { return process(s, 0, s.length() - 1); }

     vector<int> records;
    int longestDecomposition(string text) {
        int n = text.size();
        this.records = vector<int>(n / 2 + 1, -1);
        return helper(text, n, 0);
    }
    /*
        initially, call helper(text, n, 0)
    */
    int helper(string text, int n, int p){
        
        int mirror_p = n - p - 1;
        if (p > mirror_p){
            return 0;
        }
        if (p == mirror_p){
            return 1;
        }
        if (this.records[p] != -1){
            return this.records[p];
        }
        // regular case:
        int sub, result = 1;
        for (int i = p; i < n / 2; i++){
            // [p, i] ------ [, mirror_p]
            int length = i - p + 1;
            string sub_left = text.substr(p, length);
            string sub_right = text.substr(n - i - 1, length);
            if (sub_left.compare(sub_right) == 0){
                sub = 2 + helper(text, n, i + 1);
                result = max(result, sub);
            }
        }
        this.records[p] = result;
        return result;
    }

void solve()
{
    string a,ab,bc;
    ci>>a;
    ll res=longestDecomposition(a);
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
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}