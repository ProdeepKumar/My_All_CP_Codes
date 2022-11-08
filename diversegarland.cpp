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
vector<pi>a,ans;
ll chk[1005];
int main()
{
    ci>>n;
    string a,ans;
    ci>>a;
    ans=a;
    for(ll i=0;i+1<n;i++)
    {
        if(a[i]!=a[i+1]) continue;
        if(i+2<n)
        {
            if(a[i]==a[i+2])
            {
                if(a[i]=='R') ans[i+1]='G';
                else if(a[i]=='G') ans[i+1]='B';
                else if(a[i]=='B') ans[i+1]='R';
                i++;
            }
            else
            {
                if(a[i]=='R' and a[i+2]=='G') ans[i+1]='B';
                else if(a[i]=='R' and a[i+2]=='B') ans[i+1]='G';
                else if(a[i]=='G' and a[i+2]=='R') ans[i+1]='B';
                else if(a[i]=='G' and a[i+2]=='B') ans[i+1]='R';
                else if(a[i]=='B' and a[i+2]=='R') ans[i+1]='G';
                else if(a[i]=='B' and a[i+2]=='G') ans[i+1]='R';
                i++;
            }
            
        }
        else
        {
            if(a[i]=='R') ans[i+1]='G';
            else if(a[i]=='G') ans[i+1]='B';
            else if(a[i]=='B') ans[i+1]='R';
        }
        
    }
    c=0;
    f(i,0,n) if(a[i]!=ans[i]) c++;
    co<<c<<endl<<ans;
    return 0;
}