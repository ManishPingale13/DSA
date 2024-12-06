#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    cout<<"Pivot: "<<pivot<<" Low: "<<low<<endl;
    int i = low;
    int j = high;

    while (i<j)
    {
        while (i < high && arr[i] <= pivot)    //Finding 1st bigger element than pivot
            i++;
        
        while (j > low && arr[j] > pivot)      //Finding 1st smaller element than pivot
            j--;

        if(i<j)        
            swap(arr[i],arr[j]);
    }
    cout<<"I: "<<i<<" J: "<<j<<endl;
    swap(arr[low],arr[j]);
    return j;
}

void quickSorty(int arr[], int low, int high)
{
    if (low < high)
    {
        int partitionInd = partition(arr, low, high);
        quickSorty(arr, low, partitionInd - 1);
        quickSorty(arr, partitionInd + 1, high);
    }
}

int main()
{
    int arr[] = {13, -41,-5, 0, 4, 5};
    cout<<"Before:\n"; 
    for(auto i:arr)
        cout<<i<<endl;

    quickSorty(arr, 0, 5);
    
    cout<<"After:\n"; 
    for(auto i:arr)
        cout<<i<<endl;
    return 0;
}