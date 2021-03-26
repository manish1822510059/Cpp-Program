#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter How Many Elements you Want to Insert in array:";
    cin >> size;
    int arr[size];
    int c, searchelement;
    int flag = 0;
    cout << "\nEnter The Array Element:\n";
    for (int i = 0; i <= size; i++)
    {

        cin >> arr[i];
    }
    cout << "Enter the no search:";
    cin >> searchelement;
    for (c = 0; c < size; c++ )
    {
        if (arr[c] == searchelement)
        {
            cout<<"element is present at location:"<<c+1;
            flag=1;
            break;
        }
    }
    if(!flag)
    cout<<"element is not present in array";
}