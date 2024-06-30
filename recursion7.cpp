#include<iostream>
using namespace std;
int pow(int p,int q)
{
    if(q==0)return 1;
    if(q%2==0){
        int result=(p,q/2);
        return result*result;
    }
    if(q%2!=0){
        int result=pow(p,(q-1)/2);
        return p*result*result;
    }
}
int function7(int a,int b)
{
    if(a==0)
        return 0;
    return pow((a%10),b)+function7(a/10,b);
}
int main()
{
    int num,a,i=0;cout<<"Enter number:\n";
    cin>>num;a=num;
    while(a>0){
        a/=10;
        i++;
    }
    int result=function7(num,i);
    if(result==num)cout<<"yes.\n";
    else cout<<"no.\n";    
    return 0;
}