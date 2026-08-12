//Second Largest and Smallest Element
#include <iostream>
#include <climits>
    using namespace std;
int main()
{

    int arr[5] = {100, 10, 50, 28, 90};
    int largest = arr[0];
    int second_largest = INT_MIN;
    int smallest = arr[0];
    int second_smallest = INT_MAX;

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }
    cout << "Second largest: " << second_largest << endl;
    cout << "Second smallest: " << second_smallest << endl;

    return 0;
}