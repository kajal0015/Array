// #include<iostream>
// using namespace std;
// int main(){
//     int a[100];

//     int n;
//     int pos;
//     int value;

// cout<<"enter size:";
// cin >>n;
// cout << "enter elements:";
// for(int i=0;i<n;i++)
//     cin >>a[i];
//     cout<<"enter position and value:";
//     cin >> pos>>value;
//     for(int i=n;i>=pos;i++)
//         a[i]=a[i-1];

//         a[pos-1]=value;
//         n++;
//         cout<<"array after insertion :";
//         for(int i=0;i<n;i++)
//         cout<<a[i]<< " ";




//     return 0;


// }


// Delete element from array
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    int pos;
    int value;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter position:";
    cin>>pos;
    for(int i=pos-1;i<n;i++)
    a[i]=a[i-1];
    n--;
    cout<<"array after deletion :";
    for(int i=0;i<n;i++)
    cout<<a[i]<< " ";
    return 0;

}