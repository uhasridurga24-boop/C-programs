#include <iostream>
using namespace std;
int main()
{
    int a[20], i, sum = 0, n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements in the array:\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }cout << "Sum of array elements: " << sum;
return 0;
}
