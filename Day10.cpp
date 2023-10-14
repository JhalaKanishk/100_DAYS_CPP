#include<iostream>
using namespace std;

void Increment(int a){
    a++;//11 local value
}

int main(){
    cout << "Day 10/100 Days of Code" << endl;
    cout << "Pointer & References" << endl;
    //Pointer are variable that stores the address of another variable
    //Pointer can access variable from anywhere and can modify it.
    int a = 26;
    int *aptr;
    aptr = &a;


    cout << &a << endl;//address
    cout << aptr << endl;//address
    cout << *aptr << endl;//dereferenciing value
    //Dereferencing : Accessing a variable with the help of pointer and memory addreess

    int b = 200;
    int *bptr;
    bptr = &b;

    cout << &b << endl;//Address
    cout << bptr << endl;//Address
    cout << &bptr << endl;//Value

    bptr++;//2004 increment of 4 as it is int type value
    cout << bptr << endl;

    //Character Pointer
    char ch = 'k';
    char *chptr = &ch;

    cout << &ch << endl;
    cout << chptr << endl;
    cout << *chptr << endl;

    chptr++;
    cout << chptr << endl;

    //POINTERS AND ARRAYS
    //Array is Indexing Pointer when we add the calue it goes to next index not to next memeory location
    int arr[] = {10,20,30};
    cout << *arr << endl;

    int *ptr = arr;//
    for(int i=0;i<=3-1;i++){
        cout << *ptr << " ";
        ptr++;
    }
    cout << " " << endl;

    //Pointer to Pointer
    int x = 99;
    cout << x << endl;
    cout << &x << endl;
    // xptr holds the address &x 
    // *xptr dereference or unlocks the address value of x
    int *xptr = &x;
    cout << xptr << endl;
    cout << *xptr << endl;

    int **yptr = &xptr; 
    cout << yptr << endl;
    cout << *yptr << endl;
    cout << **yptr << endl;

    //Passing Pointer to Function
    int val = 10; //original value
    //1. PASS BY VALUE
    Increment(val);
    cout << val << endl;//it will print 10;

    //2. PASS BY REFERENCE
    

   
    return 0;
}
