// Average of array element 
// sum of all element of array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5} , size ,  sum = 0; 
    size = sizeof(arr) / sizeof(int);
    for(int i = 0 ; i < 5 ; i++){sum += arr[i];}
    cout << "Average of element of array : " << sum / size << endl; 
    return 0;
}