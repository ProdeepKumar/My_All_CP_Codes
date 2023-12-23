#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a="32+45*3*-";
    stack<int>st;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='0' and a[i]<='9')
        {
            st.push(a[i]-'0');
        }
        else{
            char ch=a[i];
            int x=st.top();
            st.pop();
            int y=st.top();
            swap(x,y);
            st.pop();
            if(ch=='+')
            {
                x+=y;
                st.push(x);
            }
            else if(ch=='-')
            {
                x-=y;
                st.push(x);
            }
            else if(ch=='*')
            {
                x*=y;
                st.push(x);
            }
            else if(ch=='/')
            {
                x/=y;
                st.push(x);
            }
            else if(ch=='^')
            {
                int xx=powl(x,y);
                st.push(xx);
            }
        }
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}