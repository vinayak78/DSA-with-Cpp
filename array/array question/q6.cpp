// reverse print array 
#include<iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int size;
    size = sizeof(arr) / sizeof(int);
    cout << "Original array" << endl;
    for(int i = 0 ;i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << "Reverse array" <<  endl;
    for(int i = size-1 ; i >= 0 ; i--){
        cout << arr[i] << " ";
    }

    // Two pointer approch 
    int arr1[5] = {1,2,3,4,5};
    int *start = &arr1[0];
    int *end = &arr1[4];
    for(int i = 0 ; i < 5 ; i++){
        if(start < end){
            int temp = *start;
            *start = *end;
            *end = temp;
        }
        start++;
        end--;
    }
    for(int i = 0 ; i < size ; i++){
        cout << arr1[i] << " ";
    }

return 0;
}