#include<bits/stdc++.h>
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

using namespace std;


void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    // Outer pass
    for(i = 0; i < n; i++)
    {
        flag = false;                                   // Set flag as false
        for(j = 0; j < n-i-1; j++)
        {
            // Compare values
            if( arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        // If no to elements are swapped then
        // array is sorted. Hence Break the loop.
        if(!flag)
        {
            break;
        }
    }
}
int main(int argv, char* argc[])
{
    int arr[] = {1,5,6,8,3,4,7,2,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Unsorted Array :";
    for(int i=0;i<n;i++)                           
        cout<<arr[i]<<" ";
    cout<<endl;
    bubbleSort(arr,n);                              
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++)                           
        cout<<arr[i]<<" ";
    return(0);
}