#include<iostream>
using namespace std;
/*
The function that is calling the private member function should be declared public. The function will only execute if the public function is called from the object of that class.
*/

class MyAS{
    public : //can be accessed from anywhere
        int publicVar;
        void publicFun(){
            cout << "This is a Public Function" << endl;
            this->privateFun();
            this->privateVar = 20;
        }
    private : //can be accessed from within the class
        int privateVar;
        void privateFun(){
            cout << "This is a Private Function" << endl;
        }
    protected : //can be accessed from within the class or derived class
        int protectedVar = 30;
        void protectedFun(){
            cout << "This is a Protected Function" << endl;
        }

    /*
    A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes.
    */
    friend class f;//declaration

};

class MyDerAS:public MyAS{
    public :
        void derivedFun(){
            cout << "This is Derived class accessing protected function" << endl;
            protectedFun();
        }
};

class f{
    public :
        void display(MyAS& t){
            cout << "calling The Private Variable : " << t.privateVar << endl;
             cout << "calling The Protected Variable : " << t.protectedVar << endl;
        }
};


int main(){
    //TOPIC 5 : [ACCESS SPECIFIERS]
    //Access specifier in c++ can be private or public or protected. which defines the accessibility of data memeberse and member funtion outside the class.
    /*
    In C++, there are three access specifiers:
        public - members are accessible from outside the class
        private - members cannot be accessed (or viewed) from outside the class
        protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
   */
  MyAS obj;
  obj.publicVar = 10;
  obj.publicFun();

  //obj.privateVar = 20; private not accessible outside the class
  //obj.privateFun(); private function not callable outside the class

    MyDerAS dobj;
    dobj.derivedFun();

    //TOPIC 5 : [FRIEND FUNCTION]  
    //frined function
    f fobj;
    //passing the object of base class
    fobj.display(obj);


    return 0;
}
