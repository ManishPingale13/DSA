// Problem: Find intersection of 2 arrays
#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> &A, vector<int> &B)
{
    int visited[B.size()] = {0};
    vector<int> temp;
    for (int i = 0; i < A.size(); i++)
    {
        int j = 0;
        while (j < B.size())
        {
            if (A[i] == B[j] && visited[j] == 0)
            {
                temp.push_back(A[i]);
                visited[j] = 1;
                j++;
                break;
            }
            j++;
            if(B[j]>A[i]) break;
        }
    }
    for (auto i : temp)
        cout << i << " ";
}

void optimal(vector<int> &A, vector<int> &B)
{
    int i = 0;
    int j = 0;
    vector<int> intersect;

    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
        else
        {
            intersect.push_back(A[i]);
            i++;
            j++;
        }
    }

    for (auto j : intersect)
        cout << j << "\n";
}

int main()
{
    vector<int> B = {0, 1, 2, 8,11};
    vector<int> A = {0, 1, 2, 5, 6, 7, 8, 10};

    optimal(A, B);

    brute(A, B);

    

    return 0;
}