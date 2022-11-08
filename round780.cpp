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
#define p_b        pop_back
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
#define INF        0x3f3f3f3f
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;

map<char,ll>mp;

void solve()
{
    ci>>n;
    ll nn=n;
    vector<ll>a,b;
    f(i,0,n) ci>>x,a.pb(x);
    ll cnr=0,cnl=0;
    p=q=-1;
    f(i,0,n)
    {
        if(a[i]!=0)
        {
            cnr=i;
            p=i;
            br
        }
    }
    r(i,n-1,0)
    {
        if(a[i]!=0)
        {
            cnl=n-i-1;
            q=i;
            br
        }
    }
    if(p==-1 and q==-1)
    {
        co<<n<<" 0"<<endl;
        return;
    }

    f(i,p,q+1) b.pb(a[i]);
    a.clear();
    f(i,0,b.size()) a.pb(b[i]);
//     while(a.front()==0 and !a.empty()) a.erase(a.begin()),cnr++;
//     while(a.back()==0 and !a.empty()) a.p_b(),cnl++;
//     if(a.empty())
//     {
//         co<<n<<" 0"<<endl;
//         return;
//     }
    vector<pi>seg;
    n=a.size();
    ll num[n+1]={0};
    f(i,0,n)
    {
        if(a[i]<0) num[i+1]=1;
        num[i+1]+=num[i];
    }
    // f(i,0,n+1) co<<num[i]<<' ';
    // en
    l=0;
    f(i,0,n)
    {
        if(a[i]==0)
        {
            seg.pb({l,i-1});
            l=i+1;
        }
    }
    seg.pb({l,n-1});
    for(auto ii:seg) co<<ii.fi<<' '<<ii.se<<endl;
    mx=0;
    l=r=-1;
    for(auto ii:seg)
    {
        if(ii.se<ii.fi) continue;
        else if(ii.fi==ii.se)
        {
            if(a[ii.fi]==2 and mx==0)
            {
                mx=1;
                l=ii.fi;
                r=n-ii.se-1;
            }
            continue;
        }
        x=num[ii.se+1]-num[ii.fi];
        // co<<"x: "<<x<<endl;
        if(x&1)
        {
            ll idxl,idxr;
            f(j,ii.fi,ii.se+1) 
            {
                if(a[j]<0)
                {
                    idxl=j;
                    br
                }
            }
            r(j,ii.se,ii.fi)
            {
                if(a[j]<0)
                {
                    idxr=j;
                    br
                }  
            }
            ll no_of_two=0;
            f(j,idxl+1,ii.se+1) if(abs(a[j])==2) no_of_two++;
            if(no_of_two>mx)
            {
                mx=no_of_two;
                l=idxl+1;
                r=n-ii.se-1;
            }
            no_of_two=0;
            f(j,ii.fi,idxr) if(abs(a[j])==2) no_of_two++;
            if(no_of_two>mx)
            {
                mx=no_of_two;
                l=ii.fi;
                r=n-idxr;
            }
        }
        else
        {
            ll no_of_two=0;
            f(j,ii.fi,ii.se+1) 
            {
                if(abs(a[j])==2) no_of_two++;
                // co<<"a[j] now: "<<a[j]<<"mul now: "<<mul<<endl;
            }
        //     co<<"mul: "<<mul<<endl;
            if(no_of_two>mx)
            {
                mx=no_of_two;
                l=ii.fi;
                r=n-ii.se-1;
                // co<<"l: "<<l<<" r: "<<r<<endl;
            }
        }
    }
    if(l==-1 and r==-1) 
    {
        // if(a.size()&1) 
        // {
        //     if(a.front()>=a.back()) co<<"1 0"<<endl;
        //     else co<<"0 1"<<endl;
        // }
        // else co<<"0 0"<<endl;
        ll one=-1;
        f(i,0,n)
        {
            if(a[i]==1)
            {
                one=i;
                br
            }
        }
        if(one!=-1)
        {
            co<<one+cnr<<' '<<n-one-1+cnl<<endl;
            return;
        }
        ll mone=0;
        f(i,0,n)
        {
            if(a[i]==-1) mone++;
        }
        if(mone==1) co<<"1 0"<<endl;
        else if(mone>1)
        {
            mone=0;
            vector<ll>tmp;
            f(i,0,n)
            {
                if(a[i]==-1)
                {
                    tmp.pb(i);
                    mone++;
                }
                if(mone==2) br
            }
            co<<tmp[0]+cnr<<' '<<n-tmp[1]-1+cnl<<endl;
        }
        else co<<n+cnr<<' '<<cnl<<endl;
    }
    else co<<l+cnr<<' '<<r+cnl<<endl;
    
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