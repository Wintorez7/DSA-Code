#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int binarySeacrh(int arr[],int size, int target){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
            // searching in left side
            end = mid - 1;
        }
        else{
            // search in right part
            start = mid + 1;
        }
        mid = start + (end - start)/2;

    }
    // element not found
    return -1;

}

int main(){

    // int arr[] = {2,6,8,10,12,14,16};
    // int target = 12;
    // int size = 7;

    // int indexTarget = binarySeacrh(arr,size,target);

    // if(indexTarget == -1){
    //     cout<<"target not found  "<<endl;
    // }else{
    //     cout<<"target Found at "<< indexTarget<<" index"<<endl;
    // }

    // another method

    vector<int> v{1,2,3,4,5,6};
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    if(binary_search (arr, arr + size, 5)){ 
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl; 
    }

    return 0; 

}