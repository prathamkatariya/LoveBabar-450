// Move all the negative elements to one side of the array .


#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;                      // Taking input of size of an array.
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)     // Taking Array input.
        {
            cin>>a[i];
        }

        int j = 0;              // Giving j the first position.

        for (int i = 0; i < n; i++)
        {
            if(a[i]<0){
                swap(a[i],a[j]);    // By Swaping all negative numbers 
                j++;                // are on the left side of an array.
            }
        }

        for (int i = 0; i < n; i++) 
        {
            cout<<a[i]<<" ";        // output the result.
        }
        
    }
    return 0;
}

// Time Complexity : O(n).
