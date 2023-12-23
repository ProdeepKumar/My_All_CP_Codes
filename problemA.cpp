#include<bits/stdc++.h>
using namespace std;

int objects;
double area;
class Shape
{
    public:
        static int id;
        virtual void ShowArea()
        {
            // cout<<area<<endl;
        }
        // Shape(int ii);  // Use of constructor
        
};
// Shape :: Shape(int ii)
// {
//     id=ii;
// }
class Triangle : public Shape
{
    public:
        int sides[3];
        void GetData(int x,int y,int z)
        {
            sides[0]=x;
            sides[1]=y;
            sides[2]=z;
        }
        void ShowArea()
        {
            double s=sides[0]+sides[1]+sides[2];
            s/=2;
            area=sqrtl(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
            cout<<area<<endl;
        }

};
class Trapezoid : public Shape
{
    public:
        int bases[2];
        int height;
        void GetData(int x,int y,int z)
        {
            bases[0]=x;
            bases[1]=y;
            height=z;
        }
        void ShowArea()
        {
            double s=bases[0]+bases[1];
            s/=2;
            s*=height;
            cout<<s<<endl;
        }
};
int main()
{
    cin>>objects;
    while(objects--)
    {
        int x;
        cin>>x;
        Shape *ptr;
        Shape obj;
        obj.id=x;
        if(x==1)
        {
            int a,b,c;
            cin>>a,b,c;
            Triangle obj1;
            obj1.GetData(a,b,c);
            ptr=&obj1;
            cout<<obj.id<<' ';
            ptr->ShowArea();
        }
        else
        {
            int a,b,c;
            cin>>a,b,c;
            Trapezoid obj2;
            obj2.GetData(a,b,c);
            ptr=&obj2;
            cout<<obj.id<<' ';
            ptr->ShowArea();
        }
    }
}