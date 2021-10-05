#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n){


   for(int i=1;i<n;i++){

       int temp=arr[i];
       int j=i-1;

       while(j>=0 && arr[j]>temp){

           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
   } 
}

int main(){

    int n; 
    cout<<"Enter size\n ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements \n ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }


    insertionSort(arr,n);

    cout<<"\nSORTED array elements \n ";
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
return 0;

}