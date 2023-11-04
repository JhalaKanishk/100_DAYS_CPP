#include<iostream>
#include<math.h>
using namespace std;

class Temp{
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

class Demo{
    private : 
        int x;
        int y;
    
    public : 
        void set(int n,int m){
            x = n;
            y = m;
        }
        int get(){
            return (x+y);
        }
};

class Mul{
    //private
    int mul;

    public :
        int a, b;
        int Solve(int a, int b){
            this->a = a;
            this->b = b;
            mul = a * b;
            return mul;
        }
};

int main(){
    // cout << "Encapsulation" << endl;
    // Temp T;
    // cout << "Enter a number : " << endl;
    // int n;
    // cin >> n;
    // T.set(n);
    // cout << "Half of the number is : " <<  T.solve() << endl;

    // cout << "Abstraction" << endl;
    // cout << "Enter the numbers and its power : " << endl;
    // int m, k;
    // cin >> m >> k;
    // //Abstraction Example
    // cout << "Result : " << pow(m,k) << endl;

    //+++++++++++++ (REVISION : 1)
    // Demo D;
    // cout << "Enter two Numbers : " << endl;
    // int n, m;
    // cin >> n >> m;
    // D.set(n,m);
    // cout << "Sum of These two Numbers : " << D.get() << endl;

    // //Abstraction Example
    // cout << "Enter a Number whose Sqaure Root is Possible : " << endl;
    // int r;
    // cin >> r;
    // cout << "Square Root of the Number : " << sqrt(r) << endl;

    //+++++++++++++ (REVISION : 2)
    Mul obj;
    cout << "Encapsulation" << endl;
    cout << "Enter Two Numbers" << endl;
    int a, b;
    cin >> a >> b;
    cout << "Multiply of These Number is : " << obj.Solve(a,b) << endl;
    cout << "Abstraction" << endl;
    cout << "Enter a Number : " << endl;
    int n;
    cin >> n;
    cout << "Square Root of Number : " << sqrt(n) << endl;
    
    return 0;
}
