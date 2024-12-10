// Problem: Left shift array by k bits
#include <bits/stdc++.h>
using namespace std;

/*
    TC: O(k*n)
    SC: O(1)
 */
void brute_rotate(int arr[], int n, int k)
{
    // Brute force approach to rotate array k times
    for (int j = 0; j < k; j++)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
            arr[i - 1] = arr[i];
        arr[n - 1] = temp;
    }
}

/*
    TC: O(n+k)
    SC: O(k)
 */
void better_rotate(int arr[], int n, int k)
{
    // Better approach to rotate array k times

    k = k % n; // reduce k>n to k<n 10%7 -> 3
    int temp[k];

    for (int i = 0; i < k; i++)         // store first k elements in temp arr
        temp[i] = arr[i];

    for (int i = k; i < n; i++)         // rotate array elements to 0th places
        arr[i - k] = arr[i];

    for (int i = n - k; i < n; i++)     // paste stored k elements from temp
        arr[i] = temp[i - (n - k)];
}

/*
    TC: O(2n)
    SC: O(1)
*/

void best_rotate(int arr[], int n, int k)
{
    //Optimal approach to rotate array k times

    reverse(arr,arr+k);                 // reverse first k      
    reverse(arr+k,arr+n);               // reverse  k to n 
    reverse(arr,arr+n);                 // reverse all 
    
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 4;

    // brute_rotate(arr,n,k);

    // better_rotate(arr, n, k);

    best_rotate(arr, n, k);

    for (auto i : arr)
        cout << i << endl;
    return 0;
}