#include<iostream>
using namespace std;

int main(){
    cout << "Day 8/100 Days of Code" << endl;
    //TOPIC 1 : CONTROL STATEMENTS
    /*Need of Conditional Statements
    There come situations in real life when we need to make some decisions and based on these decisions, we decide what should we do next. Similar situations arise in programming also where we need to make some decisions and based on these decisions we will execute the next block of code.*/
    //1. if Statement

    cout << "Enter a Number : " << endl;
    int num;
    cin >> num;

    //num > 10 it will not work
    if(num < 10){
        cout << "Num is Less than 10!!" << endl;
    }
    //num is less than 20 it will  work
    if(num < 20){
        cout << "Num is Less than 20!!" << endl;
    }
    cout << " " << endl;


    //2. if-else Statement
    //Ex1 : C++ Program to check whether the number is even or odd.
    cout << "Enter a Number to check even or odd" << endl;
    int number;
    cin >> number;

    if(number%2 == 0){
        cout << number << " is Odd !! " << endl;
    }
    else{
        cout << number << " is Even !!" << endl;
    }
    cout << " " << endl;


    //Ex2 : C++ Program to check whether a number is prime or not.
    cout << "check whether a number is prime or not" << endl;
    int value;
    cin >> value;
    int flag;

    for(int i=2;i<=value;i++){
        if(value%2==0){
            flag = 1;
        }
    }

    if(flag == 1){
        cout << "Not a Prime Number!" << endl;
    }
    else{
        cout << "It is a Prime Number!" << endl;
    }
    cout << " " << endl;

    //Ex3 : C++ Program to check whether a person is eligible to vote or not.
    cout << "Enter the Age to check whether the a person is eligible to vote or not " << endl;
    int age;
    cin >> age;

    if(age < 18){
        cout << "Not Eligible for voting!" << endl;
    }
    else{
        cout << "Eligible for voting!" << endl;
    }

    //Ex4 :  C++ Program to check whether a number is positive, negative or 0 using if else if ladder
    cout << "Enter a Number ot check whteher the the number is 0, positive or negative :" << endl;
    int check;
    cin >> check;

    if(check > 0){
        cout << "Positive Number !" << endl;
    }
    else if(check == 0)
    {
        cout << "It is 0" << endl;
    }
    else{
        cout << "Negative Number !" << endl;
    }

    //Ex5 : C++ Program to Calculate Grade According to marks using the if else if ladder
    cout << "Calculate Grade According to marks using the if else if ladder :" << endl;
    int marks = 91;
    if(marks <= 100 && marks >=90){
        cout << "A GRADE" << endl;
    }
    else if(marks < 90 && marks >= 80){
        cout << "B GRADE" << endl;
    }
    else if(marks < 80 && marks >=70){
        cout << "C GRADE" << endl;
    }
    else if(marks < 70 && marks >=60){
        cout << "D GRADE" << endl;
    }
    else{
        cout << "E GRADE" << endl;
    }

    //3. Switch Statement
    cout << "Enter a week day : " << endl;
    int day;
    cin >> day;
    //TYPE1
    switch(day){
        case 1: cout << "Monday" << endl;
                break;
        case 2: cout << "Tuesday" << endl;
                break;
        case 3: cout << "Wednesday" << endl;
                break;
        case 4: cout << "Thursday" << endl;
                break;
        case 5: cout << "Friday" << endl;
                break;
        case 6: cout << "Saturday" << endl;
                break;
        case 7: cout << "Sunday" << endl;
                break;
        default: cout << "Invalid Input" << endl;
    }   

    //TYPE2 RANGE IN SWITHC CASES
    int arr[] = {1,5,10,15};
    for(int i=0;i<sizeof(arr);i++){
        switch (arr[i]){
            case 1 ... 6:
                cout << arr[i] << endl;
                break;
            case 7 ... 10:
                cout << arr[i] << endl;
                break;
            case 11 ... 15:
                cout << arr[i] << endl;
                break;
        }
    }
    return 0;
}
