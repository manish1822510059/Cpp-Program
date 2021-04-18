#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void Partition(int arr[],int left,int Right)
{
    int pivot=arr[left];
    while(left!=Right)
    {
        if(pivot==arr[left])
        {
            if(arr[Right]> pivot)
            {
                Right = Right-1;
            }
            else if(arr[Right]<=pivot)
            {
                swap(arr[left],arr[Right]);
                pivot=arr[Right];
                left = left+1;
            }

        }
        else if(pivot==arr[Right])
        {
            if(arr[left]< pivot)
            {
                left = left+1;
            }
            else if(arr[left]>=pivot)
            {
                swap(arr[left],arr[Right]);
                pivot = arr[left];
                Right = Right-1;
            }

        }

    }
}
int  main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Partition(arr,0,n-1);
        print(arr,n);

}
