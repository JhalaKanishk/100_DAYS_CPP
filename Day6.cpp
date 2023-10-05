#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout << "Day 6/100 Days of Code" << endl;
    //TOPIC 1 : BINARY NUMBER SYSTEM
    //45 = 1x32 + 0x16 + 1x8 + 1x4 + 0x2 + 1x1
    //45 = 1x2^5 + 0x2^4 + 1x2^3 + 1x2^2 + 1x2^0
    //45 in Binary  : 101101

    //TOPIC 2 : BASIC QUESTIONS
    //Q1 : Prime Number
    cout << "Enter a Number : " << endl;
    int n;
    cin >> n;
    int flag = 0;
    //sqrt(n) is like to iterate upto smaller number than that of whole one

    for(int i=2;i<=sqrt(n);i++){
        if(n%i  == 0){
            cout <<"Not a prime number"<<endl ;
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
        cout << "a prime number" << endl;
    }

    //Q2 : Reverse a given Number N
    cout << "Enter the number : " << endl;
    int m;
    cin >> m;

    cout << "ORIGINAL NUMBER : " <<endl;
    int reverse = 0;
    while(m > 0){
        int lastdigit = m%10;
        reverse = reverse*10+lastdigit;
        m = m/10;
    } 

    cout << "REVERSE NUMBER : " << reverse << endl;

    //Q3 : Check if the Number is Armstrong or not
    cout << "Enter a Number : " << endl;
    int x;
    cin >> x;
    int sum = 0;
    int orgX = x;

    while (x != 0){
        int lastdigit = x%10;
        sum += lastdigit*lastdigit*lastdigit;
        x = x/10;
    }

    if(sum == orgX){
        cout << "Yes ArmStrong" << endl;
    }
    


    return 0;
}
