#include<iostream>
#include<vector>
using namespace std;


int main(){

  vector<int>arr{1,2,3,4,5};
  vector<int>brr{6,2,7,3,8};

  vector<int>ans;

  for(int i=0; i < arr.size(); i++){
    for(int j=0; j < brr.size(); j++){
        if(arr[i] == brr[j]){
            ans.push_back(arr[i]);
            break;
        }
    }
    
  }

  for(int i=0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
  }

}