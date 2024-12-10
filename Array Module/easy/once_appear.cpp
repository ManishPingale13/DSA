// Problem: finding out the number thats occuring once
#include <bits/stdc++.h>
using namespace std;

/**better approch
    *   
    * TC:O(nlog(m) + m)     map insertin + map traversal
    * where m = (n/2)+1     bcz every element appears twice
    * 
    * SC:(n/2+1)            hash map
 */
int main()
{
    int arr[] = {4, 4, 3, 1, 1, 2, 2};
    map<int, int> hash;

    for (auto i : arr)
        hash[i]++;

    for (int i = 1; i < hash.size(); i++)
        if (hash[i] == 1)
        {
            cout << i << endl;
            return 0;
        }

    return 0;
}