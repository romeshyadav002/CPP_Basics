#include<iostream>
using namespace std;

void staircase_search (int a[][1000],int m, int n, int k){
    //bool found = true;
    for(int i=0;i<m;){
        for(int j=n-1;j>=0;){
            if(a[i][j]==k){
                cout<<"found ";
                //break;
                return;
                }
            else if(a[i][j]<k){
                i++;
            }
            else{
                j--;
            }
        }
    }
    cout<<"not found";
    return ;
}
int main(){
    int a[1000][1000]={0};
    int k;
    cin>>k;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    staircase_search(a,m,n,k);
    return 0;
}