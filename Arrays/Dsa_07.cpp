// Write a program to cyclically rotate an array by one.

#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;           // Taking the input of size of two arrays.
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++){  // Taking input of an array
            cin>>a[i];
        }

        int temp = a[n-1];
        for(int i=n-1; i>0; i--){   
            a[i]=a[i-1];         // Shifting the value by one place.
        }
        a[0]=temp;
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";       // Output the req. array.
        }
    }

    return 0;
}

// Time Complexity: O(n)
