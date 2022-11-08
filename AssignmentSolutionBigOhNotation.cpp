#include<bits/stdc++.h>
using namespace std;


class SolarInverter{
    public:
        string name;
        int power;
    SolarInverter()
    {
        cout<<"SolarInverter class visited"<<endl;
    }

};

class NonSolarInverter{
    public:
        string name;
        int power;
    NonSolarInverter()
    {
        cout<<"NonSolarInverter class visited"<<endl;
    }
};

class Battery:public SolarInverter{
    public:
    Battery(string name,int current,int voltage)
    {
        this->power=current*voltage;
        this->name=name;
    }
    void print()
    {
        cout<<name<<" is a solar inverter having battery with power = "<<power<<endl;
    }
};
class Battery:public NonSolarInverter{
    public:
    Battery(string name,int current,int voltage)
    {
        this->power=current*voltage;
        this->name=name;
    }
    void print()
    {
        cout<<name<<" is a non solar inverter having battery with power = "<<power<<endl;
    }
};
class NonBattery:public SolarInverter{
    public:
    NonBattery(string name,int current,int voltage)
    {
        this->power=current*voltage;
        this->name=name;
    }
    void print()
    {
        cout<<name<<" is a solar inverter having no battery with power = "<<power<<endl;
    }
};
class GridOn:public SolarInverter{
    public:
    GridOn(string name,int current,int voltage)
    {
        this->power=current*voltage;
        this->name=name;
    }
    void print()
    {
        cout<<name<<" is a solar inverter having grid on system with power = "<<power<<endl;
    }
};
class GridOff:public SolarInverter{
    public:
    GridOff(string name,int current,int voltage)
    {
        this->power=current*voltage;
        this->name=name;
    }
    void print()
    {
        cout<<name<<" is a solar inverter having no grid on system with power = "<<power<<endl;
    }
};

int main()
{
    Battery PCU=Battery("PCU",10,20);
    PCU.print();
    NonBattery GTI=NonBattery("GTI",10,15);
    GTI.print();
    GridOn GTI1=GridOn("GTI",15,20);
    GTI1.print();
    GridOff PCU1=GridOff("PCU",16,22);
    PCU1.print();
    SolarInverter Regalia;
}