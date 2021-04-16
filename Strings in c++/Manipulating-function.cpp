#include<iostream>
#include<string>

using namespace std;
int main()
{   //Initializing 1st string 
    string str1 = "geeksforgeeks is for geeks";
    
    //Declaring 2nd string
    string str2 ="geeksforgeeks rocks";

    //declaring character array

    char ch[80];

    //using copy() to copy elements into char array
    //copies "geeksforgeeks"
    str1.copy(ch,13,0);

    //dispalying char array
    cout<<"The new copied character array is:";

    cout<<ch<<endl;



}