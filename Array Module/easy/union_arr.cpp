// Problem: Find union of two sorted arrays.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 4,  8};
    vector<int> B = {0, 1, 3, 5, 6, 7, 9, 10};
    vector<int> unionArr;
    int i = 0;
    int j = 0;

    while (i < A.size() && j < B.size())
    {
        if (A[i] <= B[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != A[i])
            {
                unionArr.push_back(A[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != B[j])
            {
                unionArr.push_back(B[j]);
            }
            j++;
        }
    }

    while (i < A.size())
    {
        if (unionArr.size() == 0 || unionArr.back() != A[i])
        {
            unionArr.push_back(A[i]);
        }
        i++;
    }

    while (j < B.size())
    {
        if (unionArr.size() == 0 || unionArr.back() != B[j])
        {
            unionArr.push_back(B[j]);
        }
        j++;
    }

    for(auto i:unionArr)
        cout<<i<<"\n";

    return 0;
}