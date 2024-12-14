#include<iostream>
#include<vector>
using namespace std;


int main(){

  vector<int>arr {1,2,3,4,5,9};
  vector<int>brr {6,7,8,3,4,9};

  vector<int>ans = arr;

  for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j < brr.size(); j++){
      if(arr[i] == brr[j]){
        ans.push_back(arr[i]);
        break;
      }
    }
  }
  // cout << "Common elements are: ";
  //   for (int num : ans) {
  //       cout << num << " ";
  //   }
  //   cout << endl;

  //   return 0;

  

}