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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
map<ll,vector<ll>>pos;
void solve()
{
    ci>>n;
    vector<ll>a(n);mx=c=0;
    pos.clear();
    for(auto &x:a)
    {
        c++;
        ci>>x;
        mx=max(mx,x);
        pos[x].pb(c);
    }
    ll lmax[n+1],rmax[n+1];
    mem(lmax,0);mem(rmax,0);
    if(pos[mx].size()>=3)
    {
        coy
        co<<pos[mx][1]-1<<" 1 "<<n-pos[mx][1]<<endl;
        return;
    }
    lmax[0]=a[0];
    f(i,1,n) lmax[i]=max(lmax[i-1],a[i]);
    rmax[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--) rmax[i]=max(rmax[i+1],a[i]);
    vector<ll>tmp;
    for(auto ii:pos)
    {
        if(ii.se.size()>=3) tmp.pb(ii.fi);
    }
    if(tmp.empty())
    {
        con
        return;
    }
    sort(allr(tmp));
    //for(ll ii:tmp) co<<"ii: "<<ii<<' ';
    //en
    for(ll ii:tmp)
    {
        ll left=0,right=0,middle=0;
        if(lmax[pos[ii][0]-1]==ii and rmax[pos[ii][pos[ii].size()-1]-1]==ii)
        {
            ll j=pos[ii][0]-1;
            while(a[j]<=ii and j<pos[ii][pos[ii].size()-2]-1) j++;
            left=j;
            j=pos[ii][pos[ii].size()-1]-1;
            while(a[j]<=ii and j>pos[ii][pos[ii].size()-2]-1) j--;
            right=n-j-1;
            ll i=left,valid=1,cnt=0;
            while(i<=j)
            {
                if(a[i]<ii or a[j]<ii)
                {
                    valid=0;
                    br
                }
                if(i!=j)
                {
                    if(a[i]==ii) cnt++;
                    if(a[j]==ii) cnt++;
                }
                else{ 
                    if(a[i]==ii) cnt++;
                }
                i++;
                j--;
            }
            //co<<valid<<endl;
            if(valid and cnt>0)
            {
                coy
                co<<left<<' '<<n-left-right<<' '<<right<<endl;
                return;
            }
        }
    }
    con
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