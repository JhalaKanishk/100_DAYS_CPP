#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int ans = 0;
    for(int i=1;i<=n-1;i++){
        ans += i;
    }
    return ans;
}

bool check(int x,int y,int z){
    int a = max(x ,max(y,z));
    int b, c;
    if(a==x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = y;
        c = x;
    }

    if(a*a == b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}

int BinarytoDeciaml(int n){
    int ans = 0;
    int x = 1;
    while (n != 0)
    {
        /* code */
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    
    return ans;
}

int OctaltoDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

//<<==========================================>>//
void toInput(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
}

void toOutput(int arr[],int n){
     for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

int tofindMax(int arr[],int n){
    int Max = 0;
    for(int i=0;i<=n-1;i++){
        Max = max(Max,arr[i]);
    }
    return Max;
}

int tofindMin(int arr[],int n){
    int Min = 0;
    for(int i=0;i<=n-1;i++){
        Min = min(Min,arr[i]);
    }
    return Min;
}

int main(){
    //cout << "Day 7/100 Days of Code" << endl;
    //TOPIC - 1 DVANCED FUNCTION QUESTION

    //Q1 Sum of N natural Numbers
    // int n;
    // cin >> n;
    // cout << sum(n) << endl;

    //Q2 Check whether the triplet is a pyhtogorial triplet or not
    //a^2 + b^2 = c^2;
    // cout << "Enter three numbers :" << endl;
    // int x, y, z;
    // cin >> x >> y >> z;
    
    // if(check(x,y,z)){
    //     cout << "Yes it is a Pythogorial Triplet" << endl;
    // }
    // else{
    //     cout << "No it is not a Pythogorial Triplet" << endl;
    // }

    //Q3 BINARY TO DECIMAL
    // cout << "Enter Binary Number : " << endl;
    // int b;
    // cin >> b;

    // cout << "Resultant Decimal Number is : " << BinarytoDeciaml(b) << endl;


    //Q4 OCTAL TO DECIMAL
    // cout << "Enter Octal Number :" << endl;
    // int o;
    // cin >> o;

    // cout << "Resultant Decimal Number is : " << OctaltoDecimal(o) << endl;

    //TOPIC 2 : ARRAY CHALLENGES
    //Q1 : MAXIMUM in ARRAY
    cout << "Enter Array Size : " << endl;
    int size;
    cin >> size;
    cout << "Enter Array Elements : " << endl;
    int arr[size];

    //input
    toInput(arr,size);
    //output
    cout << "Resultant Array : " << endl;
    toOutput(arr,size);

    //tofindMax
    cout << "\nMaximum in Array is : " << tofindMax(arr,size) << endl;
    //tofindMin
    cout << "\nMinimum in Array is : " << tofindMin(arr,size) << endl;
}
