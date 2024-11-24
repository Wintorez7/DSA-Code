#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int arr[10] = {0,10,2,5,4,8,12,6,7,13};
    int size = 10;
    
    int maxNum = INT_MIN;
    

    for(int i = 0; i < size; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    cout<<"Maximum Number "<<maxNum<<endl;
    return 0;
}