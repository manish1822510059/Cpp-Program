#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter Size Of Array:\n";
cin>>size;
int arr[size];
int small,large,count=0;
cout<<"\nEnter the Array Element\n";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
   count++;
}
large = small = arr[0];
for(int i=0;i<size;i++)
{
    if(arr[i]>large)
    {
        large = arr[i];

    }
    if(arr[i]<small)
    {
        small = arr[i];

    }
}
cout<<"No of Element in Given Array \t"<<count;
cout<<"\nThe Biggest Number is "<<large<<"\nThe Smallest Number is "<<small;




}