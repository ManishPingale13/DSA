// Sorting algorithm revision
#include <bits/stdc++.h>
using namespace std;

void merger(vector<int> &arr, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])   
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)                //right arr exhausted
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high)               //left arr exhausted
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = low; i <= high; i++)//paste into OG array
        arr[i] = temp[i - low];      // i-low bcz low!=0 everytime,but temp should start from 0
}

void mergesort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;

    int mid = (low + high) / 2;     //find mid of arr
    mergesort(arr, low, mid);       //sort 0-mid
    mergesort(arr, mid + 1, high);  //sort mid-high

    merger(arr, low, mid, high);
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot=arr[low];                 //first item is pivot
    int i=low;
    int j=high;

    while(i<j){

        while(arr[i]<=pivot && i<high)  //find 1st greater item than pivot
            i++;

        while(arr[j]>pivot && j>low)    //find 1st smaller item than pivot
            j--;
        
        if(i<j)                         //if no overlap,replace
            swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);              //OVERLAP-> replace pivot with last smallest i.e. j
    return j;
}

void quicksort(vector<int> &arr, int low, int high)
{
    if(low>=high) return;
    int partitionIndex = partition(arr, low, high); //places pivot @ right spot
    quicksort(arr,low,partitionIndex-1);            //sort left part of pivot recusively
    quicksort(arr,partitionIndex+1,high);           //sort right part of pivot recusively

}

int main()
{
    vector<int> arr = {-4, 0, 2, 5, 69};
    int n = 5;

    mergesort(arr, 0, n - 1);
    cout << "After Merge sort:\n";
    for (auto i : arr)
        cout << i << "\n";

    vector<int> arr2 = {-4, 0, -2, 5, 50};
    int n2 = 5;

    quicksort(arr2, 0, n2 - 1);
    cout << "After Quick sort:\n";
    for (auto i : arr2)
        cout << i << "\n";

    return 0;
}