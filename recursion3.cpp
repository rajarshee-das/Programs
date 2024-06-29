#include<iostream>
using namespace std;
int function(int n)
{
    if(n<1)
    return 0;
    if(n%2==0)
        return -n+function((n-1));
    else
        return n+function(n-1);
}
int main()
{
    int n;cout<<"Enter the number:\n";
    cin>>n;
    cout<<function(n);
    return 0;
}