#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a and b= ";
    cin>>a>>b;
    int op;
    cout<<"1.sum\n 2.subtract\n 3.multiply\n 4.divide\n";
    cout<<"enter your choice";
    cin>>op;

    switch(op){
     case 1: 
     cout<<"sum of "<<a<<" and "<<b<<" = "<<a+b;
     break;
     case 2:
     cout<<"subtract of "<<a<<" and "<<b<<" = "<<a-b;
     break;
     case 3:
     cout<<"multiply of "<<a<<" and "<<b<<" = "<<a*b;
     break;
     case 4:
     cout<<"divison of "<<a<<" and "<<b<<" = "<<a/b;
     break;

     default: 
     cout<<"enter your correct choice";
     break;
    }


 return 0;

}
