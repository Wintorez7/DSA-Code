#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{8,2,3,4,5,6,7,1};
    int sum = 13;
    for(int i=0; i < arr.size(); i++){

       int element1 = arr[i];
        for(int j = i+1; j < arr.size(); j++){
            int element2 = arr[j];

            for(int k = j+1; j < arr.size(); k++){
                int element3 = arr[k];

                if(element1 + element2 + element3 == sum){
                cout<< element1<<" "<<element2<<" "<<element3<<endl;
               }
            }
       } 

    }

}