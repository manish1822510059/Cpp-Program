#include <iostream>
using namespace std;
int main()
{
    int x1, v1, x2, v2 = 0;
    cin >> x1;
    cin>>v1;
    cin>>x2;
    cin>>v2;
    if (x1<x2)
    {
        if (v1 < v2)
        {
            cout << "NO";
        }
        
        else if (v1 > v2)
        {
            cout << "YES";
        }
    }
    else
    {
        cout<<"";
    }

   
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int x1,x2,v1,v2;
//     scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
   
//     if(x2>x1&&v2>v1){
//        printf("NO");
//     }
//     else{
//         for(int i=0;i<10000;i++){
//             x1+=v1;
//             x2+=v2;
//             if(x1==x2){
//                 printf("YES");
//                 exit(0);
//             }
//         }
//      printf("NO");   
//     }

// }