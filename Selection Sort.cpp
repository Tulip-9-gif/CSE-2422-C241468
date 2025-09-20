//Selection Sort....

#include<bits/stdc++.h>
using namespace std;
void Selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
            int smallestIdx=i ;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestIdx])
            {
                smallestIdx=j;
            }
        }
       swap(arr[i],arr[smallestIdx]);
    }
}
void AssendingPrint(int arr[],int n) {
    cout<<"Assending order: ";
    for(int i=0;i<n;i++)
    {  cout<<arr[i]<<" "; }
    cout<<endl;
}

int main(){
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Selectionsort(arr,n);
    AssendingPrint(arr,n);
    return 0; }

