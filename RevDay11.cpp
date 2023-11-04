#include<iostream>
using namespace std;

class MyConstructor{
    public : 
        string model = "BMW";
        int price = 500000;

        MyConstructor(){
            cout << "Default Constructor" << endl;
            cout << "Model : " << model << endl;
            cout << "Price : " << price << endl;
        }
        MyConstructor(string model, int price){
            cout << "Parameterized Constructor" << endl;
            this->model = model;
            this->price = price;
            cout << "Model : " << model << endl;
            cout << "Price : " << price << endl;
        }
};

class Student{
    public : 
        int age;
        string name;
        string Cname;
        string Sname;

        void set(int age, string name){
            this->age = age;
            this->name = name;
        }
        void setC(string Cname, string Sname){
            this->Cname = Cname;
            this->Sname = Sname;
        }
        void get(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
        void show();
};

class Mycons{
    public : 
        int Iprice = 25;
        string Iname = "Vadilal";
        Mycons(){
            cout << "Default Constructor" << endl;
            cout << "Ice Cream : " << this->Iname << endl;
            cout << "Price : " << this->Iprice << endl;
        }
        Mycons(int Iprice,string Iname){
            cout << "Parameterized Constructor" << endl;
            this->Iname = Iname;
            this->Iprice = Iprice;
            cout << "Ice Cream : " << this->Iname << endl;
            cout << "Price : " << this->Iprice << endl;
        }
};


class Teacher{
    public : 
        int age;
        string name;
        string subject;

        void set(int age, string name){
            this->age = age;
            this->name = name;
        }
        void get(){
            cout << ": Teacher Details : " << endl;
            cout << "   T Name : " << name << endl;
            cout << "   T Age : " << age << endl;
        }
        void setS(string subject){
            this->subject = subject;
        }
        //declaration
        void getS();
};
//defination
void Teacher::getS(){
    cout << "   T Subject : " << subject << endl;
};

//Scope Resolution
void Student::show(){
    cout << "Your Location : " << endl;
    cout << "City : " << Cname << endl;
    cout << "State : " << Sname << endl;
};

int salary = 5000;

int rno = 52;

//Constructor
class Con{
    public :
        int Cprice = 4000000;
        string Cname= "Fortuner";
        Con(){
            cout << "Default Constructor" << endl;
            cout << "CName : " << Cname << endl;
            cout << "CPrice: " << Cprice << endl;
        }
        Con(int Cprice, string Cname){
            cout << "Parameterized Constructor" << endl;
            this->Cname = Cname;
            cout << "CName : " << Cname << endl;
            this->Cprice = Cprice;
            cout << "CPrice: " << Cprice << endl;
        }
};

string Car = "Fortuner";

class Employee{
    public : 
        int Eid;
        string Ename, Ecity, Ecountry;

        void set(int Eid, string Ename){
            this->Eid = Eid;
            this->Ename = Ename;
        }
        void get(){
            cout << "EID : " << this->Eid << endl;
            cout << "ENAME : " << this->Ename << endl;
        }

        //Declaring inside
        void getC(string Ecity, string Ecountry);
};

//Defination outside
void Employee::getC(string Ecity, string Ecountry){
    this->Ecity = Ecity;
    cout << "ECITY : " << this->Ecity << endl;
    this->Ecountry = Ecountry;
    cout << "ECOUNTRY : " << this->Ecountry << endl;
};

int main(){
    // Student s;
    // int age = 21;
    // s.set(age, "Kanishk");
    // s.get();
    // cout << "Enter City and State name : " << endl;
    // cout << "City : " ;
    // cin >> s.Cname;
    // cout << "State : ";
    // cin >> s.Sname;
    // s.show();

    // MyConstructor c1;
    // MyConstructor c2("ROLLS_ROYCE", 1000000);

    // int salary = 5000000;
    // cout << "G Salary : " << ::salary << endl;
    // cout << "L Salary : " << salary << endl;

    //+++++++++++++ (REVISION : 1)

    // Teacher t;
    // int age = 51;
    // t.set(age,"Manish");
    // t.get();
    // t.setS("Mathematics");
    // t.getS();

    // Mycons c1;
    // Mycons c2(50, "Amool");

    // int rno = 20;
    // cout << "G rno : " << ::rno << endl;
    // cout << "L rno : " << rno << endl;

    //+++++++++++++ (REVISION : 2)
    Employee e;
    e.Eid = 1;
    e.set(e.Eid,"Kanishk");
    e.get();
    e.getC("Udaipur","India");

    string Car = "Scorpio";

    cout << "G Var : " << ::Car << endl;
    cout << "L Var : " << Car << endl;

    Con C1;
    Con C2(1500000, "Scorpio");

    return 0;
}
