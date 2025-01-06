#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <limits.h>
using namespace std;


bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}


void printRowWiseSum(int arr[][3], int rows, int cols){
    // row sum -> row traversal
    cout<<"Printing Row wise sum"<<endl;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}


int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

void transpose(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=i+1; j<cols; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    
}

void printArray(int arr[][3], int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){      
            cout<<arr[i][j]<<" ";
        }   
        cout<<endl;   
    }   
}



int main() {

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }
    cout<<endl;

     cout << "\nOriginal Matrix:" << endl;
    printArray(arr, rows, cols);

    transpose(arr, rows, cols);

    cout << "\nTransposed Matrix:" << endl;
    printArray(arr, rows, cols);
    // cout <<"Maximum Number :"<<getMax(arr, rows , cols)<<endl;
    // cout <<"Minimum Number :"<<getMin(arr, rows , cols)<<endl;
    
    return 0;
}

