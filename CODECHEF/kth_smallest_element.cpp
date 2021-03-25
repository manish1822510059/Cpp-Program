#include <iostream>
#include<algorithm>
using namespace std;
int kthsmallest(int arr[], int n, int k)
{
    //sort the give array
    sort(arr, arr + n);
    return arr[k - 1];
}

int main()
{

    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;

    cout << "kth smallest element is" << kthsmallest(arr, n, k);
}