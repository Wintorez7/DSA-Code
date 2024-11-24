#include<iostream>
#include<vector>
using namespace std;

bool find(int arr[], int size, int key){
    // linear search
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}


int main(){

 int arr[5] = {1,4,3,6,5};
 int size = 5;

 cout<<"enter the key"<<endl;
 int key;
 cin>>key;

 if( find(arr,size,key) ){
    cout<<"Found"<<endl;
 }else{
    cout<<"Not Found"<<endl;
 }
		
}

