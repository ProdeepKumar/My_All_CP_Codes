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

void solve()
{
    ci>>n;
    string a[2];
    set<char>st;
    f(i,0,2){
        ci>>a[i];
        f(j,0,n) st.insert(a[i][j]);
    } 
    if(st.size()==1)
    {
        char ch=*st.begin();
        if(ch=='0') co<<n<<endl;
        else co<<0<<endl;
        return;
    }
    st.clear();
    for(char ii:a[0]) st.insert(ii);
    set<char>stt;
    for(char ii:a[1]) stt.insert(ii);
    if(st.size()==1 and stt.size()==1)
    {
        co<<(n*2)<<endl;
        return;
    }
    res=0;
    f(i,0,n)
    {
        if(a[0][i]=='0' and a[0][i]==a[1][i]) res++;
        else if(a[0][i]=='0' and a[1][i]=='1') res+=2;
        else if(a[0][i]=='1' and a[1][i]=='0') res+=2;
    }
    st.clear();
    ll ress=0;
    f(i,0,n)
    {
        st.insert(a[0][i]);
        st.insert(a[1][i]);
        if(st.size()==2)
        {
            ress+=2;
            st.clear();
        }
    }
    ll mex[n];
    ll sum=0;
    f(i,0,n)
    {
        if(a[0][i]==a[1][i] and a[0][i]=='0') mex[i]=1;
        else if(a[0][i]==a[1][i] and a[0][i]=='1') mex[i]=0;
        else if(a[0][i]!=a[1][i]) mex[i]=2;
        sum+=mex[i];
    }
    ll i=0;
    while(i<n)
    {
        if(mex[i]==1 and mex[i+1]==0 and i+1<n)
        {
            sum++;
            i+=2;
        }
        else if(mex[i]==0 and mex[i+1]==1 and i+1<n)
        {
            sum++;
            i+=2;
        }
        else i++;
    }
    res=max(res,ress);
    res=max(res,sum);
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