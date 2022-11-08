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
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
#define infinity 1<<30  //2^30

vector<ll>g[100001], cost[100001];
ll parent[100001],dis[100001];
struct node{
    ll u;
    ll cost;
    node(ll _u, ll _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {  return cost > p.cost;   } //Operator overloading 
    
};
void dijstkra(ll n,ll source){
    parent[0]=-1;
    parent[1]=0;
        
    priority_queue<node>q;
    q.push(node(source,0));
    dis[source] = 0;
    
    while(!q.empty()){
        node top = q.top();
        q.pop();
        ll u=top.u;
        
        for(ll i=0;i<(ll)g[u].size();i++){
            ll v=g[u][i];
            
            //Relaxation
            if(dis[u] + cost[u][i] < dis[v]){
                dis[v] = dis[u] + cost[u][i];
                parent[v]=u;
                q.push(node(v, dis[v]));
            }
        }
    }
}
void printPath(ll n)
{
    if(parent[n]==-1) return;
    printPath(parent[n]);
    cout<<n<<' ';
}
int main(){
 
    ll n, m;
    cin>>n>>m;
    for(ll i=0;i<m;i++){
        ll u, v, w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        g[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    for(ll i=1;i<=n;i++) {
        dis[i] = 1e18;
    }
    dijstkra(n,1);
    if(dis[n]!=1e18) printPath(n);
    else co<<-1;
    return 0;
}