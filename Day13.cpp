#include<iostream>
#include<math.h>
using namespace std;

class demo{
    //private:
    int a, b;
    public : 
        void set(int a,int b){
            this->a = a;
            this->b = b;
        }
        void get(){
            cout << "A: " << a << endl;
            cout << "B: " << b << endl;
        }
};

class sample{
    int a, b;//data members are private so no one can modify them
    public : 
        int solve(int a, int b){
            this->a = a;
            this->b = b;
            int mul = a*b;
            return mul;
        }
};

class temp{
    //Private
    int x;
    
    public : 
        int n;
        void set(int n){
            x = n;
        }
        int solve(){
            return (x/2);
        }
};

int main(){
    //TOPIC 8 : [ENCAPSULATION]
    /*
    Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming.

    * Two Important  property of Encapsulation 

        -> Data Protection: Encapsulation protects the internal state of an object by keeping its data members private.   Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
        -> Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.
    */
    int n;
    cout << "Enter A Number : " << endl;
    cin>>n;
    temp half;
    int ans=half.solve();
    cout<<ans<<endl;

    sample mul;
    cout << "Enter Two Numbers : " << endl;
    int num1,num2;
    cin >> num1 >> num2;
    int result = mul.solve(num1,num2);
    cout << "Multiplication of Two Number is : " << result << endl;

    //TOPIC 8 : [ABSTRACTION]
    /*

        Class is a Abstract Data-Type

        Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. 

        Abstraction using Access Specifiers
        Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members. For example:
        Members declared as public in a class can be accessed from anywhere in the program.
        Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of the code outside the class.    
    */
    demo dobj;
    dobj.set(10,20);
    dobj.get();


    cout << "Abstraction" << endl;
    cout << "Enter the numbers and its power : " << endl;
    int m, k;
    cin >> m >> k;
    //Abstraction Example
    cout << "Result : " << pow(m,k) << endl;
    /*

    Difference Between
    Abstraction
    1. Process of Gaining Information.
    2. Method of hiding the unwanted information.
    3. Abstraction is implemented using abstract class and interface.
    
    Encapsulation
    1. Process or Method to contain information.
    2. Method of hiding the data in single unit to protect the information from the outsiders.
    3. While in encapsulation, the data is hidden using methods of getters and setters.

    */



    return 0;
}
