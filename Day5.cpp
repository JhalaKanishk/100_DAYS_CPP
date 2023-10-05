#include<iostream>
using namespace std;

//Searching

//Time Complexcity o[Log n]
int Binary(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    for(int i=0;i<=n-1;i++){
        int mid = (start+end)/2;
        if(arr[mid] == key ){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

//Time Complexcity o[N]
int Linear(int arr[],int n,int key){
    for(int i=0;i<= n-1;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

//Print Function
void toPrint(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
}

//Sorting 
//1. Selection
void Selection(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i;j<=n-1;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//2. Bubble 
void Bubble(int arr[],int n){
    int counter = 1;
    while(counter < n){
        for(int i=0;i<=n-counter;i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

//3. Insertion
void Insertion(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j > 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}




int main(){
    cout << "Day 5/100 days of code" << endl;
    //TOPIC 1 : SEARCHING IN ARRAY 

    //Linear Search
    cout << "Enter Array Size : " << endl;
    int n;
    cin >> n;
    cout << "Enter Array Elements : " << endl;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    //output
    cout << "Resultant Array : " << endl;
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }
    cout << " " << endl;

    // int k;
    // cout << "Enter Key :" << endl;
    // cin >> k;
    // cout << " : Applying Linear Search : " << endl;
    // cout << " Elements found at Index : " << Linear(arr,n,k) << endl;

    //Binary Search
    //Elements should be in sorted order
    // cout << " : Applying Binary Search : " << endl;
    // cout << " Elements found at Index : " << Binary(arr,n,k) << endl;

    //TOPIC 2 : SORTING
    //Orederinh the elements in Ascending Order
    //1. Selection Sort - find the minimum element in unsorted array and swap it with element at the begining
    cout << "After Applying Selection Sort : "  << endl;
    Selection(arr,n);
    toPrint(arr,n);

    cout << " " << endl;

    //2. Bubble Sort - repeatedly swap two adjacent numbers element if they are in wrong order
    cout << "After Applying Bubble Sort : " << endl;
    Bubble(arr,n);
    toPrint(arr,n);


    //3. Insertion Sort - Insert an element from unsorted array to its correct position in sorted array
    Insertion(arr,n);
    toPrint(arr,n);
    
    return 0;
}
