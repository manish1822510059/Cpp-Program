#include<iostream>
using namespace std;
int main()
{
    int n,d,temp=0,j;
    
    cin>>n>>d;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int length = sizeof(arr)/sizeof(arr[0]);
    
    
   for(int i=0;i<d;i++)
   {  temp=arr[0];
       for(j=0;j<length-1;j++)
       {
        arr[j]=arr[j+1];
       }
      arr[j]=temp;
   }
   
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<endl;
  }
}
