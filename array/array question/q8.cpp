// Duplicate is presence 
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 2, 2, 3};
    int occ = 0;
    int checcking_element;
    cout << "Value : ";
    cin >> checcking_element;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == checcking_element)
        {
            occ++;
        }
    }
    if(occ > 1) cout << "Duplicate presence : " << occ << " times";
    return 0;
}