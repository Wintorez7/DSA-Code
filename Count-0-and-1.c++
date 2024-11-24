#include<iostream>
using namespace std;


int main(){
    int arr[10] = {0,1,1,0,0,0,1,0,1,0};
    int size = 10;
    int countNumOne = 0;
    int countNumZero = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            countNumZero++;
          
        }
        if(arr[i] == 1){
            countNumOne++;
            
        }
    }
    
  cout<<"No of Zero "<<countNumZero<<endl;
  cout<<"No of One "<<countNumOne<<endl;
}