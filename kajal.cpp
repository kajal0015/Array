// linear Search and Binary Search
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,key;
    cout<<"enter size:";


    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter element:";
    cin >>key;
    for(int i =0;i<n;i++){
    if(a[i]==key ){
        cout<<"element found at position"
         <<i+1;

         return 0;

    }

}
cout<<"element not found ";
return 0;}
