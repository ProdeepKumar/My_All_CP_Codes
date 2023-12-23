#include<bits/stdc++.h>
using namespace std;

// typedef struct employee
// {
//     int ak,dui,tin;
// }ep;
// union money
// {
//     int ak,dui,tin;
// };

class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int x,int y,int z);
        void getdata()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
        }

};

void employee :: setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
const int x;
int main()
{
    // ep harry;
    // harry.ak=3;
    // harry.dui=2;
    // harry.tin=1;
    // union money mm;
    // mm.ak=2;
    // mm.dui=333333;
    // cout<<mm.tin<<endl;
    // cout<<harry.ak<<' '<<harry.dui<<' '<<harry.tin<<endl;
    employee paul;
    paul.setdata(2,3,5);
    paul.d=89;
    paul.e=78;
    paul.getdata();
    
    cout<<x<<endl;
    //x=5;
    cout<<x<<endl;
    //x=6;
    cout<<x<<endl;
}