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

    // cout<<"Printing Row wise"<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout << arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    // printRowWiseSum(arr,rows,cols);
    // cout <<findKey(arr,3,3,12)<<endl;
    cout << getMax(arr, rows , cols);
    

}






//     vector<int> histogram('z' - 'a' + 1, 0); // Vector to store letter frequencies

//     string in_str;
//     cout << "Enter a string: ";
//     getline(cin, in_str); // Read the entire line, including spaces

//     // Count the frequency of each letter
//     for (auto c : in_str) {
//         if (isalpha(c)) { // Check if c is a letter
//             ++histogram[tolower(c) - 'a'];
//         }
//     }

//     cout << endl;

//     // Display letters and their corresponding frequencies
//     for (char k = 'a'; k <= 'z'; ++k) {
//         cout << k << " ";
//     }
//     cout << endl;

//     for (auto h : histogram) {
//         cout << h << " ";
//     }
//     cout << endl;

//     return 0;
// }


// int findUnique(vector<int>arr){
//     int ans = 0;
//     for(int i = 0; i < arr.size(); i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }


// int main(){

//    int n;
//    cout<<"Enter the Size of Array"<<endl;
//    cin >> n;

//    vector<int>arr(n);
//    cout<<"Enter the Number of Element"<<endl;

//    for(int i = 0; i < arr.size(); i++){
   
//     cin >> arr[i];
//    }

//    int uniqueElement = findUnique(arr);
//    cout<<"Unique Element is "<<uniqueElement<<endl;

// }

    // int arr[3][3] = {
    //     {1,2,3},
    //     {4,5,6}, 
    //     {7,8,9}
    // };

    // // row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // // column wise
    //  for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
