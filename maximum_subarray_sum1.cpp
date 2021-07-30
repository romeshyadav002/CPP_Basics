#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int maximumsum=0;
    int currentsum=0;
    int left=-1;
    int right =-1;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum=0;
            for(int k=i;k<=j;k++){
                currentsum+=a[k];
            }
            if(currentsum>maximumsum){
                maximumsum=currentsum;
                left =i; right=j;
            }
        }
    }
    //Print the mwximumsum
    cout<<"maximumsum "<<maximumsum<<endl;
    for(int k=left;k<=right;k++){
        cout<<a[k]<<" ";
        return 0;
    }
}