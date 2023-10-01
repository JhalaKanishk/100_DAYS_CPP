/*

*/
#include<iostream>
using namespace std;

int main(){
    cout << " Day 2/100 Days of Code " << endl;
    cout << "One Day or Day One you Decide" << endl;
    //TOPIC-1 STRINGS
    cout << "C++ Strings \n Strings are used for storing text." << endl;
    string name = "Solo_Learner";
    cout <<  name << endl;
    //String -> Concatination
    //The + operator can be used between strings to add them together to make a new string. This is called concatenation:
    string Fname = "John";
    string Lname = "Cena";
    string fullname = Fname+" "+Lname;
    cout << fullname << endl;
    //String -> Append
    //you can also concatenate strings with the append() function:
    string Combine = Fname.append(Lname);
    cout << Combine << endl;

    //If you try to add a number to a string, an error occurs:
    string first = "1";
    int second = 2;
    //string mix = first+second; it will produce an error

    //String -> Length(), Size()
    string txt = "anbsuyuefbfchodsjncpuwewgf2f";
    cout << "The Length of Text is : " << txt.length() << endl;
    cout << "The Length of Text is : " << txt.size() << endl;

    //String -> Access()
    string myString = "hello";
    cout<< myString[4] <<" "<< endl;//o

    //change string character
    myString[0] = 'j';
    cout << myString << " " << endl;//jello

    //String -> Special Character()
    cout << "Hi from \'Solo_Learner\'." << endl;
    cout << "It's alright " << endl;
    cout << "All the very \"Best\" ." << endl;

    //input
    cout << "Enter Your Name : " << endl;
    string your_name;
    //1. cin
    string full_name;
    cin >> full_name;
    cout << "Your Name is : " << your_name << endl;
    cout << "Enter Your Full Name : "<< full_name << endl;
    string fname;
    //2. getline
    getline(cin,Fname);
    cout << "Your Full Name is : " << Fname << endl;

    //TOPIC-2 CONDITIONS
    //1. if
    //example
    cout << "Enter Two Number and check which one is greater : " << endl;
    int x, y;
    cin >> x >> y;
    if(x > y){
        cout << x + " is Greater the " + y << endl;
    } 
    else if(x == y){
        cout << x + " equals to " + y << endl;
    }
    else{
        cout << y + " is Greater the " + x << endl;
    }
    //2. else
    cout << "Enter Age : " << endl;
    int age;
    cin >> age;
    if(age < 18){
        cout << "Teenager" << endl;
    }
    else{
        cout << "Adult" << endl;
    }

    //3. else-if
    cout << "Enter Time" << endl;
    int time;
    cin >> time;
    if(time < 12){
        cout << "Good Morning" << endl;
    }
    else if(time < 20){
        cout << "Good AfterNoon" << endl;
    }
    else{
        cout << "Good Evening" << endl;
    }

    //TOPIC-3 SWITCH CASE
    cout << "Enter any day in Number" << endl;
    int day;
    cin >> day;
    switch (day) {  
        case 1 : cout << "Monday";
                 break;
        case 2 : cout << "Tuesday";
                 break;
        case 3 : cout << "Wednesday";
                 break;
        case 4 : cout << "Thursday";
                 break;
        case 5 : cout << "Friday";
                 break;
        case 6 : cout << "Saturday";
                 break;
        case 7 : cout << "Sunday";
                 break; 
    }

    //TOPIC-4 LOOPS
    //1. While Loop
    //example 
    cout << "\nPrint Hello World 10 Times " << endl;
    int i = 1;
    while (i < 10){
        cout << "hello world" << endl;
        i++;
    }
    //2. Do While Loop
    int j = 5;
    do{
        cout << "I will Run Once whatever the condition is : " << endl;
    } while (j < 5);
    //3. For Loop
    /*
    for (statement 1; statement 2; statement 3) {
        // code block to be executed
    }   
    Statement 1 is executed (one time) before the execution of the code block.

    Statement 2 defines the condition for executing the code block.

    Statement 3 is executed (every time) after the code block has been executed.
    */
    //example1
    for(int i=1;i<=5;i++){
        cout << "Loop" << endl;
    }
    //3. Nested Loops
    //example2
    for(int i=1;i<=3;i++){
        cout << "Outer Loop" << endl;// executes 3 times
        for(int j=1;i<=2;j++){
            cout << "Inner Loop" << endl;// executes 6 times 2*3
        }
    }


    //TOPIC-5 POINTERS
    string food = "Pizza"; // A food variable of type string

    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)

    return 0;
}
