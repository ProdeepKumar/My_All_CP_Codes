/* ANTHOR KUMAR DAS
KUET ECE 2K18*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sc(a) scanf("%d",&a)
#define sc1(n) scanf("%lld",&n)
#define tc ll tc; sc1(tc);while(tc--)
#define sc2(b,c) scanf("%lld%lld",&b,&c)
#define f(a,c,b) for(a=c;a<b;a++)
#define pb(a) push_back(a)
#define pf push_front
#define p(k) printf("%lld\n",k)
#define pt printf
#define en printf("\n")
#define br break
#define dot(m) cout<<fixed<<setprecision(10)<<m<<endl
#define co continue
#define sc3(s) scanf("%s",&s)
#define ye cout<<"YES"<<endl
#define mp(a,b) make_pair(a,b)
#define mm memset
#define ss second
#define ff first
#define no cout<<"NO"<<endl
#define valid(x,y,row,col) (x>=1&&x<=row&&y>=1&&y<=col)
#define pii pair<ll,ll>
ll fx[]= {0,0,1,-1};
ll fy[]= {1,-1,0,0};
ll gcdd(ll a, ll b)
{
    if(a==0)
    {
        return b;
    }

        while(b!=0)
        {
            if(a>b)
            {
                a-=b;
            }
            else
            {
                b-=a;
            }
        }

        return a;

}
int main()
{
        
    double a,b,c,w,k,p,n,m,mn,mx=INT_MIN,t,j,i,l,z=0;
    while(cin>>l>>w and l and w){
        bool ans=true;
        
        k=l/2;
        mn=w-sqrt(k*k-(l-k)*(l-k))+2*k;
        while(1)
        {
            k+=0.1;
            p=w-sqrt(k*k-(l-k)*(l-k))+2*k;
            if(p>mn)
            br;
            else
            {
                mn=min(mn,p);
            }
        }
        printf("%0.2lf00\n",mn);

        }
    return 0;
}