// odd even element of array
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0) cout << "Even" << arr[i] << endl;
        else cout << "Odd : " << arr[i] << endl;
    }
}

