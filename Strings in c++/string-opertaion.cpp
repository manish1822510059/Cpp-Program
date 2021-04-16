#include<iostream>
#include<string>
using namespace std;
int main()
{
    //1. input string 
    // string str;
    // getline(cin,str);
    // cout<<str<<endl;
   
   //2. insert charater at the end of string

//    str.push_back('s');
//    cout<<str<<endl;

   //3. remove at the end 

//    str.pop_back();
//    cout<<str<<endl;

   //4. capacity
   
   string str = "geekforgeeks is for geeks";

   cout<<"inital string:\n"<<str;
   str.resize(13);
   cout<<"after resize\n"<<str<<endl;;

   cout<<"capicity"<<endl;
   cout<<str.capacity()<<endl;
   cout<<str.length()<<endl;

   // Decreasing the capacity of string
    // using shrink_to_fit()
     
     str.shrink_to_fit();
     cout<<"The New Capcity"<<endl;
     cout<<str.capacity()<<endl;




}