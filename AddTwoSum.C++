// 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//   vector<int>arr;
//   cin >> arr;
//   int target;
//   cin >> target;

//   for(int i = 0; i < arr.size(); i++){
//     for(int j = i+1; j < arr.size(); j++){
//         if(arr[i] + arr[j] == target){
//             return {i , j};
//         }
//     }
//   }  
// return {};
// }






// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//        for(int i = 0; i < nums.size(); i++){
//         for(int j = i+1; j < nums.size(); j++){
//             if(nums[i] + nums[j] == target){
//                 return{i,j};
//             }
//          }
//        }
//        return {};   
//     }
// };