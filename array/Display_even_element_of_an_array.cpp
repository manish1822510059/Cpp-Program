#include<iostream>
using namespace std;
int main(){
    int arr[100],evenarr[100],i,j=0,k=0,num;

    cout<<"Enter Size of Array:\t";
    cin>>num;
    cout<<"\nEnter the Element\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];

    }

    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[j]=arr[i];
            j++;
            
        }
    }


if(j>0)
{
    cout<<"\nEven Numbers are:";
}
else
{
    cout<<"even element not present";
}

for ( i = 0; i < j; i++)
{
    cout<<evenarr[i]<<" ";

}



}