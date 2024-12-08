#include <bits/stdc++.h>
using namespace std;

// Q1,Q2
vector<int> comparator(int arr[], int n)
{
    int largest = arr[0];
    int secLarge = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secLarge = largest;
            largest = arr[i];
        }
        else if (arr[i] > secLarge && arr[i] < largest)
        {
            secLarge = arr[i];
        }
    }

    return {largest, secLarge};
}

// Q3
void checkSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(!(arr[i-1]<=arr[i])){
            cout<<"Not sorted\n";
            return;
        }
    }
    cout<<"Array is sorted\n";
}

// Q4 remove duplicate in sorted array,replace non duplicate in first places of array
int removeDuplicates(int arrX[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arrX[j]!=arrX[i]){
            arrX[i+1]=arrX[j];
            i++;
        }
    }
    return (i+1);
}
int main()
{
    int arr[] = {13, 9, 2, 6, 0, 2, 66, 9, 69};
    int n = 9;

    cout << "Largest element : " << comparator(arr, n)[0] << endl;
    cout << "Second Largest element : " << comparator(arr, n)[1] << endl;

    int arr2[]={0,2,2,2,3,3};
    checkSorted(arr2,6);

    cout<<"Unique elements: "<<removeDuplicates(arr2,6)<<endl;
    return 0;
}