#include<iostream>
#include<vector>
using namespace std;

int main(){

    // int arr[3][3];
    // int brr[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}};

    // // printing number in Row wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<< brr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // // printing number in column wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<< brr[j][i] <<" ";
    //     }
    //     cout<<endl;
    // }
    // int arr[3][3];
    // int row = 3;
    // int col = 3;

    // // input
    // // for col wise input
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // // printing Row Wise    
    // cout<<"printin row wise"<<endl;
    //  for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout << arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // vector<vector<int> > arr;

    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }

    // int row = 3;
    // int col = 5;
    // vector<vector<int> > arr(row,vector<int>(col,5));

    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<int>arr{0,1,0,1,0,1,1,0,1,0,0};
    vector<int>ans;

    int start = 0;
    int end = arr.size() - 1;
    int i=0;

    while (i <= end)
    {
        if(arr[i] == 0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }else if(arr[i] == 1){
            swap(arr[end],arr[i]);
            end--;
        }
    }
    
    for(auto value:arr){
        cout<<value<<" ";
    }

    return 0;
}
