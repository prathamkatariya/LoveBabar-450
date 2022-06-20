#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;           // Taking input of size of an array.

        int array[n];
        for (int i = 0; i < n; i++)     // Taking Array input.
        {
            cin >> array[i];
        }
        
        sort(array, array+n);       // Sort the array.

        int k;                      // Taking input of kth element.
        cin>>k;

        cout<<k<<" Minimum element: "<<array[k-1]<<endl;
        cout<<k<<" Maximum element: "<<array[n-k]<<endl;
    }

    return 0;
}

// Time Complexity : 
