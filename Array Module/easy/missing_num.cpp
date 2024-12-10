#include <bits/stdc++.h>
using namespace std;

/**
     * TC: O(i*j)
     * SC=O(1)
 */

void brute(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << i << endl;
    }
}

/**
     * TC: O(2n)
     * SC: O(n+1)
 */
void better(int arr[], int n)
{
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++) // precompute
        hash[arr[i]] = 1;

    for (int i = 0; i < n + 1; i++) // fetch - print missing number
        if (hash[i] == 0)
            cout << "Missing number: " << i << endl;
}

/**
     * TC:O(n)
     * SC:O(1)
 */
void optimal1(int arr[], int n)
{
    int final_sum = n * (n + 1) / 2;
    int real_sum = 0;
    
    for (int i = 0; i < n; i++)
        real_sum+=arr[i];
    
    cout<<"Missing number: "<<final_sum-real_sum<<endl;
}
 
/**
     * TC: O(n) 
     * SC: O(1)
 */
void optimal2(int arr1[],int n){
    vector<int>arr={3,0,2,4};
    int xor1=0;
    int xor2=0;

    for(int i=0;i<arr.size();i++){
        xor1=xor1^i;
        xor2=xor2^arr[i];
    }
    xor1=xor1^arr.size();
    
    cout<<"Missing number: "<<(xor1^xor2)<<endl;
}

int main()
{
    int arr[] = {3, 0, 1};
    int n = 3;

    // brute(arr, n);

    // better(arr, n);

    // optimal1(arr, n);

    optimal2(arr, n);


    return 0;
}