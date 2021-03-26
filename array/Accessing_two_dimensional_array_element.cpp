#include<iostream>
using namespace std;
int main(){
int  a[50][2] = {{0,0},{1,2},{3,6},{4,8}};
//output each array element'svalues
for(int i=0;i<5;i++)
{
    for(int j = 0;j<2;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]:";
        cout<<a[i][j]<<endl;
    }
}
   



return 0;



}