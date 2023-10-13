#include<iostream>
using namespace std;

int main(){
    cout << "Day 9 of 100 Days of code" << endl;
    cout << "2D ARRAY" << endl;

    cout << "Enter Array Size : " << endl;
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    //input
    cout << "Enter the Array Elements" << endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin >> arr[i][j];
        }
    }
    //output
    cout << "Resultant Array : " << endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout << arr[i][j] << " ";
        }
        cout << " " << endl;
    }
    //search
    cout << "Enter the Element to Search" << endl;
    int x;
    cin >> x;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j] == x){
                cout << "Element Present At \n" << "Row : " << i << "\t" << "Col : " << j;
            }
        }
    }
    //spiral order
    cout << "" << endl;
    cout << ":SPIRAL ORDER:" << endl;
    int row_st = 0, col_st = 0, row_end = n-1, col_end = m-1;
    
    while(row_st <= row_end && col_st <= col_end){
       //row start
       for(int col=col_st; col<=col_end; col++){
            cout << arr[row_st][col] << " ";
       }
       row_st++;
       //col end
       for(int row=row_st; row<=row_end; row++){
            cout << arr[row][col_end] << " ";
       }
       col_end--;
       //row end
       for(int col=col_end; col>=col_st; col--){
            cout << arr[row_end][col] << " ";
       }
       row_end--;
       //col start
       for(int row=row_end; row>=row_st; row--){
        cout << arr[row][col_end] << " ";
       }
       col_st++;
    }

    
    return 0;
}
