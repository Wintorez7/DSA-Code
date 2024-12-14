#include<iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

void printingRowWiseSum(int arr[][3],int rows, int cols){
    // row wise traversal sum
    cout<<"Printing Row wise Sum"<<endl;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
}


int main(){

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // input
    // for col wise input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[j][i];
        }
    }

    // printing Row Wise    
    // cout<<"printin row wise"<<endl;
    //  for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // creating Function
    // printingRowWiseSum(arr,rows,cols);
    int key = 5;
    cout<< findKey(arr,3,3,key);

    return 0;
}