#include<iostream>
#include<limits.h>
using namespace std;



void transpose(int arr[][3], int rows, int cols){
    
    for(int i = 0; i < rows; i++){
        for(int j = i + 1; j < cols; j++){
           swap(arr[i][j] , arr[j][i]);
        }
    }
    
}

void printArray(int arr[][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
    cout << endl;
    }
}

int main(){

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    cout<<"original Array"<<endl;
    printArray(arr,cols,rows);
    
    transpose(arr,cols,rows);
    cout<<"Transpose Array"<<endl;
    printArray(arr,cols,rows);
  
  
}