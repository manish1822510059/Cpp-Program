#include<iostream>
#include <string.h>
using namespace std;
int main()
{
int h[26],i,max=0,area,a,b;
for(i=0;i<26;i++)
cin>>h[i];
char ch[11];
cin>>ch;
a=strlen(ch);
for(i=0;i<a;i++)
{
    b=ch[i]-97;
    if(h[b]>max)
    max=h[b];
}
area=max*a;
cin>>area;
return 0;





}