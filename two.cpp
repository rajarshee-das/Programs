#include<iostream> //it places all the zeroes at the end
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void functionTwo(int arr[],int n){
    int i,j;
    for(i=n-1;i>=0;i--){
        j=0;bool flag=false;
        for(j=0;j<i;j++){
            if(arr[j]==0 && arr[j+1]>0){ 
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(flag==false)
            break;
    }
}
int main(){
    int n=5;int i;
    int arr[n];
    cout<<"Enter the aray elements:";
    for(i=0;i<n;i++)
        cin>>arr[i];
    functionTwo(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}