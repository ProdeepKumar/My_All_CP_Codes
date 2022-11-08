#include<bits/stdc++.h>
using namespace std;

//abstraction
class AbstractStudent{
    virtual void AskForResult()=0;
};

class Student:AbstractStudent{
    private:
        int roll;
    public:
        string name;
        string contact;

    Student(string name,string contact)
    {
        // this->roll=roll;
        this->name=name;
        this->contact=contact;
    }
    void AskForResult()
    {
        cout<<"Nothing"<<endl;
    }
    void setroll(int roll)
    {
        this->roll=roll;
    }
    int getroll()
    {
        return roll;
    }
    void print()
    {
        cout<<"Name: "<<name<<" Contact: "<<contact<<endl;
    }
};

//inheritance
class boy:public Student{

};
int main()
{
    Student id1=Student("Prodeep","01761503892");
    // Student id2;
    // id2.roll=12;
    // id2.name="kalsjhd";
    // id2.contact="kalshd";
    id1.setroll(10);
    cout<<"Roll: "<<id1.getroll()<<' ';

    id1.print();
}