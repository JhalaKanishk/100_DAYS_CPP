#include<iostream>
using namespace std;

static int object = 0;

class Test{
    public : 
        Test(){
            // cout << "Current Object Value : " << object << endl;
            cout << "Constructor is Called!!" << endl;
            object++;
            cout << "Object Get Created : " << object << endl;
        }
        ~Test(){
            cout << "Destructor is Called!!" << endl;
            object--;
            cout << "Object Get Destroyed : " << object << endl;
        }
};

class Sample{
    public : //Accessibility : From Anywhere
        int publicVar;
        void publicFun(int publicVar){
            cout << "This is a Public Function" << endl;
            this->publicVar = publicVar;
            cout << "Value : " << publicVar << endl;
        }
        void privateCall(int Var){
            this->privateFun(Var);
        }

    private : //Accessibility : Within the Class
        int privateVar;
        void privateFun(int privateVar){
             cout << "Accessing from the Outside of the class by Calling it from public AS" << endl;
            cout << "This is a Private Function" << endl;
            this->privateVar = privateVar;
            cout << "Value : " << privateVar << endl;
        }
    
    protected ://Accessibility : Within or Derived
        int protectedVar;
        void protectedFun(int protectedVar){
            cout << "This is Protected Function" << endl;
            cout << "Value : " << protectedVar << endl;
        }

    friend class f;
};

class SampleD:public Sample{
    public : 
        void show(int Var){
            cout << "This is a Derived Class Accessing Protected Member of Base Class" << endl;
            protectedFun(Var);
        }
};  

class f{
    public :
        void show(Sample& t){
            cout << "Calling The Private Fun : " << endl;
            t.privateFun(10);
            cout << "Calling The Protected Fun : " << endl;
            t.protectedFun(10);
        }
};

//---------------------------------


class Demo{
    public :
        Demo(){
            cout << "Constructor is called!!" << endl;
            object++;
            cout << "Object gets created : " << object << endl;
        } 
        ~Demo(){
            cout << "Destructor is called!!" << endl;
            cout << "Object gets destroyed : " << object << endl;
            object--;
        }
};


class Helper{
    public : //Accessibility : from anywhere
        int publicVar;
        void publicFun(int var){
            cout << "This is an Public Function" << endl;
            this->publicVar = var ;
            cout << "This is an Public Variable : " << this->publicVar << endl;
        }
        void privateCALL(int var){
            this->privateFun(var);
        }
    private : //Accessibility : within the class
        int privateVar;
        void privateFun(int Var){
            cout << "This is an Private Function : called from Public AS" << endl;
            this->privateVar = Var;
            cout << "This is an Private Variable : " << this->privateVar << endl;
        }
    protected : //Accessibility : within the class or derived
        int protectedVar;
        void protectedFun(int var){
            cout << "This is an Protected Function : called from Derived" << endl;
            this->protectedVar = var;
            cout << "This is an Protected Variable : " << this->protectedVar << endl;
        }

    friend class Myf;
};

class DHelper : public Helper{
    public : 
        void show(int var){
            this->protectedFun(var);
        }
}; 

class Myf{
    public : 
        //create an object of class in which it is declared frnd 
        //Parmeterized Constructor 
        Myf(Helper &o){
            cout << "Accessing using Friend Function : " << endl;
            o.publicFun(100);
            o.privateFun(200);
            o.protectedFun(300);
        }
};

//---------------------------------
int CDobj = 0;
class CD{
    public :
        CD(){
            cout << "Constructor is called" << endl;
            CDobj++;
            cout << "Object Created : " <<CDobj << endl;
        }
        ~CD(){
            cout << "Destructor is called" << endl;
            cout << "Object Destroyed : " <<CDobj << endl;
            CDobj--;
        }
};

class Sample1{
    public : //accessibiltiy : throught the class
        int publicVar;
        void PublicFun(int Var){
            cout << "This is an Public Fun" << endl;
            this->publicVar = Var;
            cout << "This is an Public Var : " << publicVar << endl;
        }
        void privateCall(int Var){
            this->PrivateFun(Var);
            this->protectedFun(Var);
        }
    private ://accessibility : inside the class
        int privateVar;
        void PrivateFun(int var){
            cout << "This is an Private Fun" << endl;
            this->privateVar = var;
            cout << "This is an Private Var : " << privateVar << endl;
        }
    protected ://accessibilty : inside, derived class
        int protectedVar;
        void protectedFun(int var){
            cout << "This is an Protected Fun" << endl;
            this->protectedVar = var;
            cout << "This is an Protected Var : " << protectedVar << endl;
        }
    //non-member function
    friend class Sample1F;
};

class S1Der : public Sample1{
    public :
        void Show(int var){
            this->protectedFun(var);
        }
};

//friend function
class Sample1F{
    public :
        void Display(Sample1 &S1){
            S1.PublicFun(100);
            S1.PrivateFun(200);
            S1.protectedFun(300);
        }
};


int main(){
    // cout << ": Access Specifiers :" << endl;
    // cout << "-----------------" << endl;
    // Sample s;
    // //Accessing Public
    // s.publicFun(26);
    // cout << "-----------------" << endl;

    // //Accessing Private
    // s.privateCall(46);
    // cout << "-----------------" << endl;

    // //Accessing Protetced
    // SampleD d;
    // d.show(66);

    // //Friend Class
    // f fobj;
    // fobj.show(s);

    // //Constructor & Destructor
    // Test t1, t2, t3;

    //+++++++++++++ (REVISION : 1)
    // cout << "Access Specifiers : " << endl;
    // cout << "-------------------" << endl;
    // Helper H;
    // H.publicFun(10);

    // cout << "-------------------" << endl;
    // H.privateCALL(20);

    // cout << "-------------------" << endl;
    // DHelper DH;
    // DH.show(30);

    // cout << "-------------------" << endl;
    // Myf obj(H);
    // //pass the object of the class in which it is declare frnd

    // cout << "-------------------" << endl;
    // Demo D1, D2, D3;

    //+++++++++++++ (REVISION : 2)
    cout << "Access Specifiers" << endl;
    cout << "-------------------"  << endl;
    Sample1 S;
    S.PublicFun(10);

    cout << "-------------------"  << endl;
    S.privateCall(20);

    cout << "-------------------"  << endl;
    S1Der D;
    D.Show(30);

    cout << "-------------------"  << endl;
    Sample1F F1;
    F1.Display(S);//pass the object of the class where it is declared as friend

    cout << "-------------------"  << endl;
    CD O1, O2, O3;
    return 0;
}
