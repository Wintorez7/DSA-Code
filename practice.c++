#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
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

    int arr[3][3];
    int row = 3;
    int col = 3;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Printing Row wise"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}