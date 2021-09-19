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
        cin >> n;

        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        
        sort(array, array+n);

        int k;
        cin>>k;

        cout<<array[k-1]<<" ";
    }

    return 0;
}