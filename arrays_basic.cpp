#include<iostream>
using namespace std;

int main(){
    //Intialisation of an array
    int a[10]={0};

    //Size of an array
    cout<<sizeof(a)<<endl;
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;

    //Input all the elements from the useer.
    for(int i=0; i<5;i++){
        cin>>a[i];
    }
    //Update a single index
    a[8]=100;

    //Print all the first 10 elements
    for(int i=0;i<=10;i++){
        cout<<a[i]<<", ";
    }
    return 0;
}