#include<iostream>
using namespace std;
int main(){
int arr[100],i,temp,size;
cout<<"Enter array size: \t";
cin>>size;

cout<<"Enter Element in to array:\n";
for(i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<"\narray before swapping elements :\n";
for(i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
//swaping logic
for(i =1;i<size;i+=2)
{
    temp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = temp;

}
cout<<"\narray af swapping elements :\n";
for(i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}






}