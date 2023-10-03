#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void fib(int n){
    int t1 = 0;
    int t2 = 1;;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout << t1 << " ";
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int fac(int n){
    int factorial = 1;
    for(int i=2;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    cout << "Day 4/100 Days od code" << endl;
    //TOPIC 1 : ADVANCED FUNCTIONS

    //Q1
    cout << "Print Prime Numbers" << endl;
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << " " << endl;
    //Q2
    cout << "Print Fibonacci Series" << endl;
    int l;
    cin >> l;
    fib(l);

    //Q3
    cout << "\nFactorial of N" << endl;
    int x;
    cin >> x;
    int ans =  fac(x);
    cout << "Factorial of " << x << " is : " << ans << endl;

    //Q4
    cout << "\nCalculate nCr" << endl;
    int n, r;
    cin >> n >> r;

    int result = fac(n)/(fac(r)*fac(n-r));
    cout << result << endl;


    //TOPIC 2 : BREAK & CONTINUE
    //BREAK
    cout << "BREAK" << endl;
    for(int i=0;i<=10;i++){
        if(i == 4){
            break;
        }
        cout << i << endl;
    }
    //CONTINUE
    cout << "CONTINUE" << endl;
    for(int i=0;i<=10;i++){
        if(i == 4){
            continue;
        }
        cout << i << endl;
    }

    //TOPIC 3 : ARRAYS
    //ARRAYS INPUT
    int myArray[5] = {1,2,3,4,5};
    cout << myArray[0] <<endl;

    //ARRAY & LOOPS
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    //ARRAY SIZE
    cout << "Size of Array is : " << sizeof(cars) << endl;

    //ARRAY INPUT
    int m;
    cout << "'Enter Array Size'" << endl;
    cin >> m;
    cout << "Enter Array Elements" << endl;
    
    int arr[m];
    //input
    for(int i=0;i<=m-1;i++){
        cin >> arr[i];
    }
    //output
    cout << "Resultant Array" << endl;
    for(int i=0;i<=m-1;i++){
        cout << arr[i] << " ";
    }

}
