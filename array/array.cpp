#include<iostream>
using namespace std;

void print(const int arr[] , int size){
    for(int i = 0 ; i < size ; i++){cout << arr[i] << " ";}
}
int main(){
    // declaration and initalization 
    int arr[5] = {1,2,3,4,5};

    // size of array 
    int size = sizeof(arr) / sizeof(int);
    print(arr , size);
}