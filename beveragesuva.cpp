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

int main()
{
    ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ll ca=1;
    while(ci>>n)
    {
        vector<string>vec,ans;
        map<string,ll>indegree;
        map<string,vector<string> >input;
        indegree.clear();
        input.clear();
        vec.clear();
        ans.clear();
        f(i,0,n)
        {
            string a;
            ci>>a;
            vec.pb(a);
        }
        ci>>m;
        f(i,0,m)
        {
            string a,b;
            ci>>a>>b;
            input[a].pb(b);
            indegree[b]++;
        }
        while (true)
        {
            for(auto it:vec)
            {
                if(indegree[it]==0)
                {
                    ans.pb(it);
                    indegree[it]=-1;
                    for(ll j=0;j<input[it].size();j++) indegree[input[it][j]]--;
                    br
                }
            }
            if(ans.size()==n) br
        }
        co<< "Case #"<<ca++<< ": Dilbert should drink beverages in this order:";
        for (ll i=0;i<ans.size();i++)
        {
            co<< " "<<ans[i];
        }
        co<< "."<<endl<<endl;
    }
    return 0;
}