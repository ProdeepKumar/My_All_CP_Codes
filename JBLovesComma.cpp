#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sc1(a) scanf("%lld",&a);
#define f(a,b,c) for(a=b;a<c;a++)


int main()
{
   ll i,j,k,a,b,c,d,x,n,m;
   cin>>a>>b>>x;
   ll s=0;
   f(i,0,a)
   {
       sc1(d);
       if(d>=x)
       {
           s++;
       }
   }
   f(i,0,b)
   {
       sc1(d);
       if(d<=x)
       {
           s++;
       }
   }
   cout<<s;
   
   return 0;
}