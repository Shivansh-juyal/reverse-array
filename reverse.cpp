#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,i,j;
    cout<<"enter the size of array ";
    cin>>s;
    int arr[s] , temp =0;
    // to enter an array
    for(i = 0; i <s ;i++){
       cout<<"enter the element at "<<i<<endl;
       cin>>arr[i];
    }
    // to print the entred array
    cout<<"entered element  "<<endl;
    for(i = 0; i <s ;i++){
       
       cout<<arr[i];
    }
    // to reverse the entred array
    j=s-1;
    for(i=0;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    // to print the reverse array
    cout<<"reversed array  "<<endl;
    for(i = 0; i <s ;i++){
       
       cout<<arr[i];
    }
   
    return 0;
}