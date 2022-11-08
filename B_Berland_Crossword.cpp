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
ll n,m,k,g,mx,mn,res,c,x,u,d,y,z,w,p,q,r,l,s,t;

void solve()
{
    ci>>n>>u>>r>>d>>l;  //check for all 16 possibilities of corner positions
    int counter = 0;    //if any one works then there is a solution
    for(int i = 0; i < 16; i++){
        int u1 = u, l1 = l, r1 = r, d1 = d;
        if(i & 1){
            u1--;
            l1--;
        }
        if(i & 2){
            u1--;
            r1--;
        }
        if(i & 4){
            r1--;
            d1--;
        }
        if(i & 8){
            l1--;
            d1--;
        }
        //co<<"For i= "<<i<<": "<<u1<<' '<<r1<<' '<<d1<<' '<<l1<<endl;
        int counter1 = 1;
        vector<int> v1 = {l1, d1, r1, u1};
        for(auto j : v1){
            if(!(j >= 0 && j <= n - 2)){
                    counter1 = 0;
                    break;
            }
        }
        if(counter1 == 1){
            counter = 1;
            break;
        }
    }
    cout << (counter == 1 ? "YES" : "NO") << endl;
    

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