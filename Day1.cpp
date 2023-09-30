/*
what is C++?
C++ is a cross-platform language that can be used to create high-performance applications.
C++ was developed by Bjarne Stroustrup, as an extension to the C language.

Why to use C++?
C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

Differrence between C & C++ ?
The main difference betweeen C & C++ is C++ supports classes and objects.
*/





//C+ SYNTAX
//Line 1 : #include <iostream> is a header file library that lets us work with input and output objects, such as cout , cin.
//Line 2: using namespace std means that we can use names for objects and variables from the standard library.
//Line 3: int main(). This is called a function. Any code inside its curly brackets {} will be executed.
//Line 4: cout is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".
//Line 5: endl denote line end.
//Line 6: return 0 ends the main function.
#include<iostream>
using namespace std;

int main(){
    cout << "Day 1/100 DSA " << endl;
    //output
    cout << "Hello World" << endl;
    //input
    //int is Data-Type = type of data
    //n is variable = stores data
    cout << "Enter Any Number :" << endl;
    int n;
    cin >> n;
    cout << "You Entered" << n << endl;

    cout << "Enter your Name : " << endl;
    string name;
    cin >> name;
    cout << "You Entered " << name << endl;


    //Sum of two Numbers
    cout << "To Find Sum :" << endl;
    cout << "Enter Two Numbers :" << endl;
    int num1,num2;
    cin >> num1 >> num2;
    int sum = num1+num2;
    cout << "Sum is : " << sum << endl;

    //Comments are unused part of code.
    //Single-Line Comments
    /*Multi-Line Comments*/

    //Operators
    //1. Arithmetic Operators
    cout << "Addition Operator : " << num1+num2 << endl;
    cout << "Subtraction Operator : " << num1-num2 << endl;
    cout << "Multiplication Operator : " << num1*num2 << endl;
    cout << "Division Operator : " << num1/num2 << endl;

    //2. Assginment Operators
    int z = 5;
    z += 3;
    z -= 3;
    z *= 3;
    z /= 3;

    //3. Comparison Operator
    int x = 5;
    int y = 4;
    x == y;
    x != y;
    x > y;
    x < y;
    x >= y;
    x <= y;

    //4. Logical Operator
    // && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
    // || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
    // !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

    return 0;
}