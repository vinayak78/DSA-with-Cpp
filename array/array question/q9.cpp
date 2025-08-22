// second max value in array 
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int smax, max, size;
    smax = arr[0];
    max = arr[0];
    size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {   
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && arr[i] == max){
            smax = arr[i];
        }
    }
    cout << "Array max element : " << max << endl;
    cout << "Array second max element : " << smax << endl;

    return 0;
}
