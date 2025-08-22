// maximum and minimum element of array
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int min, max, size;
    min = arr[0];
    max = arr[0];
    size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Array max element : " << max << endl;
    cout << "Array min element : " << min << endl;

    return 0;
}
