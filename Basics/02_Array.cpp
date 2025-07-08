#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "enter number of elements";
    cin >> size;

    int arr[size];
    cout << "enter "<<  size << "numbers";
    
    for (int i = 0; i<size; i++)
    {
        cin >> arr[i];
    }

    cout << "your array is ";

    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;

}