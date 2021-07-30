#include<iostream>
using namespace std;

//Selection Sort

void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selection_sort(int arr[],int n){
    int i,j, min_idx;
    //one by one move boundary of unsorted array
    min_idx=1;
    for(i=0;i<n-1;i++){
        //Find the minimum element in unsorted array
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
                //swap the found minimum element with the 1st element
                swap(&arr[min_idx],&arr[i]);

            }
        }
    }
}
//Function to print an array
void print_array(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

//Driver program to test above function
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);
    cout<<"sorted arrau ; \n";
    print_array(arr,n);
    return 0;
}