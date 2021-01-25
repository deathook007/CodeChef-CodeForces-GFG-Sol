#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int print2largest(int arr[], int n)
    {
        int max = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
                arr[i] = -1;
        }

        max = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
