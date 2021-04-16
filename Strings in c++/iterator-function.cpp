#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str = "Geekforgeeks";
    
  // Declaring iterator
  std::string::iterator it;

  //declaring reverse iterator

  std::string::reverse_iterator it1;

  //displaying string 
  cout<<"The string using forward iterators is :";
  for(it=str.begin();it!=str.end();it++)
  cout<<*it;
  cout<<endl;

  //displaying reverse string 
  cout<<"reverse string using reverse iterators:";
  for(it1=str.rbegin();it1!=str.rend();it1++)
  cout<<*it1;
  cout<<endl;








}