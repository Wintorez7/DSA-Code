#include<iostream>
using namespace std;

bool find(int arr[],int key,int size){
    //linear search
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {1,5,4,8,9};
    int size = 5;

    cout<<"Enter the Key to Find"<<endl;
    int key;
    cin >> key;
    if(find(arr,size,key)){
        cout<<"Number Found"<<endl;
    }else{
        cout<<"Number Not Found"<<endl;
    }


}