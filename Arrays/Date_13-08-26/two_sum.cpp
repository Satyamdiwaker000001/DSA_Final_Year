#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2, 7, 11, 15, 3};
    int target = 9;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if(arr[i]+arr[j] == target)
            {
                cout << "\nFirst element index: " << i << "\nsecond element index: \n" << j;
            }
        }
    }
    return 0;
}