#include<iostream>
#include<stack>
using namespace std;

int k,cnt[20];
string a;

int strtonum(string str)
{
    int sum=0;
    for(int ii=str.size()-1;ii>=0;ii--)
    {
        sum+=(str[ii]-'0');
        sum*=10;
    }
    sum/=10;
    return sum;
}

int main()
{
    cin>>k>>a;
    for(int i=0;i<20;i++) cnt[i]=0;
    stack<char>st;
    int level=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==')')
        {
            string tmp="";
            while(st.top()!='(')
            {
                tmp+=st.top();
                st.pop();
            }
            st.pop();
            int x=strtonum(tmp);
            cnt[level]+=x;
            level--;
        }
        else 
        {
            st.push(a[i]);
            if(a[i]=='(') level++;
        }
    }
    cout<<cnt[k+1]<<endl;
}