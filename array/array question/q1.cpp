// sum of all element of array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5} , sum = 0;
    for(int i = 0 ; i < 5 ; i++){sum += arr[i];}
    cout << "Sum of al element of array : " << sum << endl; 
    return 0;
}