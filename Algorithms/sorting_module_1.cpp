#include <bits/stdc++.h>
using namespace std;

void selection_sort()
{
    int arr[] = {90, -120, 20, 10, -30, 0};
    int n = 6;

    // All cases O(n^2)
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (auto i : arr)
        cout << i << endl;
}

void bubble_sort(){
    int arr[]={140,141,02,-34,31,501,-53,1,5,-31,0};
    int n=11;

    //Worst & Average case O(n^2)
    for(int i=n-1;i>0;i--){     
        bool swap=false;    

        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap=true;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }        
        }
        if(!swap)           //best case O(n) improvement
            break;
    }
    for(auto i:arr)
        cout<<i<<endl;
}

//Best case O(n) , worst,avg O(n^2)
void insertion_sort(){
    int arr[]={10,-214,510,23,0,2,5,1};
    int n=8;

    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(auto i:arr)
        cout<<i<<endl;
}

int main()
{
    // selection_sort();
    // bubble_sort();
    insertion_sort();
    return 0;
}
