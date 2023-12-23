#include <bits/stdc++.h>
using namespace std;
int main()
{

    string longtext;
    longtext = "Hello, my name is Prodeep Kumar Paul. I am currently pursuing my Bsc. Engineering degree at Khulna University of Engineering & Technology, Khulna. I am at my last semester now.";
    // getline(cin,longtext);
    cout<<longtext<<endl;int c=0;
    for(int i=0;i<longtext.size();i++) if(longtext[i]==' ') c++;
    cout<<c+1<<endl;


    //Main operation for alignment
    int i=0,n=longtext.size();
    vector<string>justify;
    while(i<n)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            count++;
            if(count==30)
            {
                if(longtext[j]!=' ')
                {
                    while(longtext[j]!=' ' and j>=0) j--;
                    string tmp="";
                    for(int k=i;k<j;k++) tmp+=longtext[k];
                    justify.push_back(tmp);
                    i=j+1;
                }
                else
                {
                    string tmp="";
                    for(int k=i;k<j;k++) tmp+=longtext[k];
                    justify.push_back(tmp);
                    i=j+1;
                }
                break;
            }
        }
        if(count<30)
        {
            string tmp="";
            for(int j=i;j<n;j++) tmp+=longtext[j];
            justify.push_back(tmp);
            break;
        }
    }
    //Left alignment of a long text
    cout<<endl<<"Left alignment: "<<endl<<endl;
    for(auto ii:justify) cout<<ii<<endl;
    //Right alignment of a long text
    cout<<endl<<"Right alignment: "<<endl<<endl;
    for(auto ii:justify)
    {
        int len=ii.size();
        int x=30-len;
        for(int i=0;i<x;i++) cout<<' ';
        cout<<ii<<endl;
    }
    //Center alignment of a long text
    cout<<endl<<"Center alignment: "<<endl<<endl;
    for(auto ii:justify)
    {
        int len=ii.size();
        int x=(30-len)/2;
        for(int i=0;i<x;i++) cout<<' ';
        cout<<ii<<endl;
    }
    //Justify content of a long text
    cout<<endl<<"Justify content: "<<endl<<endl;
    for(auto ii:justify)
    {
        int len=ii.size();
        int x=(30-len);
        int spaces=0;
        for(auto jj:ii) if(jj==' ') spaces++;
        int cnt=0;
        if(x<=spaces)
        {
            for(auto ch:ii)
            {
                cout<<ch;
                if(ch==' ' and cnt++<x) cout<<' ';
            }
            cout<<endl;
        }
        else
        {
            // cout<<"bara"<<endl;
            int y=x/spaces; // y=5/4=1
            int z=(spaces-1)*y;  // z=3*1=3
            int w=x-z;  // w=5-3=2
            int cnt=0;
            for(auto ch:ii)
            {
                cout<<ch;
                if(ch==' ') 
                {
                    if(cnt==0) cout<<string(w,' ');
                    else cout<<string(y,' ');
                    cnt++;
                }
            }
            cout<<endl;
        }
    }
}