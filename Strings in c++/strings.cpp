#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    // string  str;
    // cin>>str;
    // cout<<str;
    // string str1(5,'n');
    // cout<<str1<<endl;
    // getline(cin,str);
    // cout<<str<<endl;

    //add two string

    // string s1="man";
    // string s2="ish";
    // s1.append(s2);
    // cout<<s1+s2<<endl;
    //access string

    // cout<<s1[1]<<endl;

    //clear string

    // string abc = "shsgvhcdsbcksnckjdnkjdfbvdfhvb jbhdjfbv djscnkjdbk asda";
    // abc.clear();
    // cout<<abc;

    // important function are compare

    //    string s1 = "abc";
    //    string s2 = "abc";
    //    if(!s1.compare(s2)==0)
    //      cout<<"String are equal ";
    //    cout<<s2.compare(s1)<<endl;
    //    return 0;

    //empty function

    // string s1 = "abc";
    // cout<<s1<<endl;
    // s1.clear();
    // if(s1.empty())
    //     cout<<"String is Empty";

    //erase function

    // string s1 = "ninjacartoon";
    // s1.erase(3,5);
    // cout<<s1<<endl;

    //find function in string

    // string s1 = "ninjacartoon";
    // cout<<s1.find("toon")<<endl;

    //insert string into another strings

    // string s1 = "ninjacartoon";
    // s1.insert(2,"lol");
    // cout<<s1<<endl;

    //length and size of string

    // string s1 = "ninjacartoon";
    // for(int i=0;i<s1.length();i++)
    //   cout<<s1[i]<<endl;
    // cout<<s1.size()<<endl;

    //substring of strings

    // string s1 = "ninjacartoon";
    // string s  = s1.substr(6,4);
    // cout<<s<<endl;

    //string present in string it convert into integer

    //  string s1 = "786";
    //  int x = stoi(s1);
    //  cout<<x+4<<endl;

    //    integer to string
    // int x = 786;
    // cout<<to_string(x)+"5"<<endl;

    // sorting string using sort function
    string s1 = "xckjharbdefef";

    sort(s1.begin(),s1.end());

    cout<<s1<<endl;


    return 0;
}