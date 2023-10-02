#include<iostream>
using namespace std;
/*
A 'FUNCTION' is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
*/


//creating a function outside the class 
//myFunction is the name of funvction()
//void is the return type means this function doese'nt return any value
//we will call this function form main() function.
void myFunction(){
    cout << "This Block Just Get's Executed" << endl;
}

//DEFINING FUNCTION
void Student(int rno,string name,string branch){
    cout << "Roll_No :  " << rno << "\nName : " << name << "\nBranch : " << branch << endl;
}

void swap(int &num1,int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

//function overloading
void myfun(int num1,int num2){
    cout << num1 << " " <<  num2 << endl;
}
void myfun(string name1,string name2){
    cout << name1 << " " <<  name2 << endl;
}
void myfun(int num1,string name1){
    cout << num1 << " " << name1 << endl;
}

int main(){
    cout << " Day 3/100 days of code " << endl;
    cout << " : Make  Every Day Count : " << endl;
    //TOPIC-1 : PATTERNS
    //BASIC PATTERN QUESTIONS
    /*
    * * * * *
    * * * * *
    * * * * *
    * * * * * 
    */
   cout << "(SOLID RECTANGLE)" << endl;
   for(int i=1;i<=4;i++){
        for(int j=1;j<=5;j++){
            cout << "*" << " ";
        }
        cout << " " << endl;
   }
   /*
   * * * * *
   *       *
   *       *
   * * * * *
   */
  cout << "(HOLLOW RECTANGLE)" << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=5;j++){
            if(i==1||j==1||i==4||j==5){
                cout << "*" << " ";
            }
            else{
                cout << " " << " ";
            }
        }
        cout << " " << endl;
    }
    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    */
   cout << "(HALF PYRAMID)" << endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        cout << " " << endl;
    }
    /*
    * * * * *
    * * * * 
    * * *
    * * 
    *  
    */
   cout << "INVERTED HALF PYRAMID" << endl;
   for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        } 
        cout << " " << endl;
   }
   /*
         *
       * * 
     * * *
   * * * * 
 * * * * *
    */
   cout << "HALF PYRAMID AFTRER 180DEG ROTATION" << endl;
   for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        cout << " " << " ";
    }
    for(int j=1;j<=i;j++){
        cout << "*" << " ";
    }
    cout << " " << endl;
   }

    /*
    1
    1 2 
    1 2 3
    1 2 3 4 
    1 2 3 4 5
    */
   cout << "PRINT HALF PYRAMID USING NUMBERS" << endl;
   for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << " " << endl;
   }
   /*
   1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
   */
   cout << "INVERTED HALF PYRAMID USING NUMBERS" << endl;
   for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << " " << endl;
   }
   /*
   1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
   */
   cout << "PRINT HALF PYRAMID USING NUMBERS 2" << endl;
  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout << i << " ";\
    }
    cout << " " << endl;
  }
   cout << "PRINT HALF PYRAMID USING NUMBERS 2" << endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << " " << endl;
    }
    /*
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4 
    5
    */
   cout << "PRINT INVERTED HALF PYRAMID USING NUMBERS 2" << endl;
   for(int i=5;i>=1;i--){
    for(int j=1;j<=5-i+1;++j){
       cout << i << " ";
    }
    cout << " " << endl;
   }
   /*
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
   */
    cout << "FLOYD'S TRIANGLE" << endl;
    int counter = 1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << counter << " ";
            counter++;
        }
        cout << " " << endl;
    }
    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    */
    cout << "PRINT 0-1 PATTERN" << endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2 == 0){
                cout << "1" << " ";
            }
            else{
                cout << "0" << " ";
            }
        }
        cout << " " << endl;
    }
   /*
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4 
  5 4 3 2 1 2 3 4 5
  */
    cout << "PALINDROMIC PATTERN" << endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        for(int j=2;j<=i;j++){
            cout << j << " ";
        }
        cout << " " << endl;
    }

    /*
                *
              * * *     
            * * * * *
          * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *    
    */
    cout << "DIAMOND STAR PATTERN " << endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=2;j<=i;j++){
            cout << "*" << " ";
        }
        cout << " " << endl;
    } 
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4-i;j++){
            cout << " " << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*" << " ";
        }
        for(int j=2;j<=i;j++){
            cout << "*" << " ";
        }
        cout << " " << endl;
    }
    
    //TOPIC 2 : FUNCTIONS
    //calling our functio
    cout << "FUNCTIONS" << endl;
    myFunction();
    myFunction();
    myFunction();
    //Output ☝️
    // I just got executed!
    // I just got executed!
    // I just got executed!

    //FUNCTIONS USING PARAMETERS
    cout << "FUNCTIONS USING PARAMETERS" << endl; 
    int roll_no = 52;
    string name = "Rohan";
    string branch = "CSE";
    //Declaring function
    Student(roll_no,name,branch);

    //FUNCTIONS PASS BY REFERRENCE
    cout << "\'Swapping Two Numbers\'" << endl;
    int firstNum = 10;
    int secondNum = 20;

    cout << "\'Number Before Swap\'" << endl;
    cout <<"First Number: "<<firstNum<<endl<<"Second Number:"<<secondNum<<endl;

    cout << "\'Number After Swap\'" << endl;
    //function
    swap(firstNum,secondNum);
    cout <<"First Number: "<<firstNum<<endl<<"Second Number:"<<secondNum<<endl;

    //FUNCTION OVERLOADING
    //With function overloading, multiple functions can have the same name with different parameters:

    string firstname = "rohan";
    string lastname = "saxena";

    myfun(firstNum,secondNum);
    myfun(firstname,lastname);
    myfun(firstNum,firstname);


    return 0;
}
