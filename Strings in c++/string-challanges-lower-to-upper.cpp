#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s= "asdkjurtyhgpolq";

    //convert into upper case
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //         str[i] -= 32;
    // }
    // cout<<str<<endl;;

    //convert to lower case 

    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i]>='A' && str[i]<='Z')
    //        str[i]+=32;
    // }
    // cout<<str;

    //buit in function to convert lower case letter to upper case letter

    transform(s.begin(),s.end(),s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s<<endl;
}