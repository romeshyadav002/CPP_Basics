//Find the largest and smallest number in the array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,key;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Algorithm to find the largest and smallest number

    int largest= INT_MIN;
    int smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"largest "<<largest<<endl;
    cout<<"smallest "<<smallest<<endl;

    /*
    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
        smallest=min(smallest,a[i]);
    }
    */

    return 0;
}
