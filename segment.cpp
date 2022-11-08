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
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n, t[4*MAXN];
 
void build(ll a[], ll v, ll tl, ll tr) {
    if (tl == tr) {
        t[v] = max(0LL,a[tl]);
    } else {
        ll tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
 
ll sum(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    ll tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
 
map<ll,ll>fst,lst,cnt;
 
int main ()
{
    cout<< "Okey"<<endl;
  ll g, k, m, mx = 0, mn = 1e9, c, res, c1, x, y, w, z, c2;
  ci>>n;
  ll a[n+1];
  //for(ll &x : a) ci>>x;
  f(1,n+1) ci>>a[i];
  build(a,1,1,n);
  cnt.clear();
  f(1,n+1)
  {
      lst[a[i]]=i;
      cnt[a[i]]++;
  }
  for(ll i=n;i>0;i--) fst[a[i]]=i;
  mx=0;
  f(1,n+1)
  {
      if(cnt[a[i]]>=2)
      {
          x=fst[a[i]];
          y=lst[a[i]];
          res=sum(1,1,n,x,y);
          if(res>mx)
          {
              mx=res;
              w=x;
              z=y;
          }
      }
  }
  vector<ll>ans;
  for(ll i=1;i<w;i++) ans.pb(i);
  for(ll i=w;i<=z;i++) if(a[i]<0) ans.pb(i);
  for(ll i=z+1;i<=n;i++) ans.pb(i);
  co<<mx<< " "<<ans.size()<<endl;
  f(0,ans.size()) co<<ans[i]<< " ";
  return 0;
}