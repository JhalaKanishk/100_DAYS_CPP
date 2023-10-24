#include<iostream>
using namespace std;

class Myconstructor{
    public :
        int age;
        string name;
        string cname;
        int model;
        int price;
        Myconstructor(){
            cout << "Default Constructor!!" << endl;
        }
        Myconstructor(int a, string n){
            cout << "Parameterized Constructor!!" << endl;
            age = a;
            name = n;
        }
        //to resolve ambigutiy we use this keyword !!
        Myconstructor(string cname,int model){
            this->cname = cname;
            this->model = model;
        }
        Myconstructor(string cname, int model,int price);
};
//defining outside the class
Myconstructor::Myconstructor(string cname,int model,int price){
    this->cname = cname;
    this->model = model;
    this->price = price;
}

class Teacher{
    //Inside the class 
    public:
        string name;
        int age;
        string subject;
        void Tname(){
            cout << "Name : " << name << endl;
        }
        //Outside the class
        //declaration inside the class
        void Tage();
        void Tsub();
};
// (::) Scope Resolution Operator is used to define a function outside the class.

void Teacher::Tage(){
    cout << "Age : " << age << endl;
}

void Teacher::Tsub(){
    cout << "Subject : " << subject;
}

//creating a class
class Student{
    //By defalut every Data Member and Member Functon is Private to increase accessibility we define them under public section.
    public :  //Access Specifiers
        int age;
        string name;

        void toPrint(){
            cout << "Age : " << age << endl;
            cout << "Name: " << name <<endl;
        }
};

int salary = 1000000;

int main(){
    //OOPS IN C++;  
    /*
    *   C++ is an Object-Oriented Programming Language.
    *   Everything in C++ is associated with classes and objects.
    *   Along with Data Members() & Member Function.
    *   Class is an User Defined Data Type or a Blue Print that we can use in our Program
    */

   //TOPIC 1 : [CLASS & OBJECTS]

   //creating a object of class
   Student s;
    // cout << "Enter Age : " << endl;

    // cin >> s.age;//accessung the data members using (.) operator.
    // cout << "Enter Name : " << endl;
    // cin >> s.name;

   //to create multiple objects
//    Student arr[3];
//    for(int i=0;i<3;i++){
//         cout << "Enter Age : " << endl;
//         cin >> arr[i].age;//accessung the data members using (.) operator.
//         cout << "Enter Name : " << endl;
//         cin >> arr[i].name;
//    }
    
//     for(int i=0;i<3;i++){
//         arr[i].toPrint();
//     }
    
    //Inside the Class
    //TOPIC 2 : [CLASS METHODS]
    Teacher T1;
    T1.name = "MAHADEV";
    T1.Tname();
    T1.subject = "Life Lessons";

    //TOPIC 3 : [SCOPE RESOLUTION]
    /*
    SCOPE RESOLTUION OPERATOR
        1) To access a global variable when there is a local variable with same name.

        2) To define a function outside the class

        3) To access a class static variable
    */
   int salary = 500000;
   cout << "Local Variable : " << salary << endl;
   cout << "Global Variable : " << ::salary << endl;

   //TOPIC 4 : [CONSTRUCTORS]
   //These are special method which are automatically called when the object of class is created.
   Myconstructor C1;
   Myconstructor C2(21,"Kanishk");
   cout << "Name : " << C2.name << "\t" << "Age : " << C2.age << endl;
   Myconstructor C3("BMW",1949);
   cout << "CName : " << C3.cname << "\t" << "Model : " << C3.model << endl;
   Myconstructor C4("MUSTANG",2022,1000000000);
   cout << "CName : " << C4.cname << "\t" << "Model : " << C4.model << "\t" << "CPrice : " << C4.price << endl;

    return 0;
}
