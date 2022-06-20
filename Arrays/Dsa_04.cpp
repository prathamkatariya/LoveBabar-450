// Given an array which consists of only 0, 1 and 2. Sort the array 
// without using any sorting algo.


#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;          // Taking input of size of an array.
        cin>>n;
        int a[n];       
        for(int i=0;i<n;i++){       // Taking Array input.
            cin>>a[i];
        }
        int count_1 = 0;            // Initialize variables with 0.
        int count_2 = 0;
        int count_3 = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){            // Counting no. of 0's.
                count_1++;
            }
            else if(a[i]==1){       // Counting no. of 1's.
                count_2++;
            }
            else{                   // Counting no. of 2's.
                count_3++;
            }
        }

        int k =0;
        for (int i = 0; i < count_1 ; i++)
        {
            a[k] = 0;
            k++;
        }
        for (int i = 0; i < count_2 ; i++)   // updating the array.
        {
            a[k] = 1;
            k++;
        }
        for (int i = 0; i < count_3 ; i++)
        {
            a[k] = 2;
            k++;
        }
        
        for (int i = 0; i < n ; i++)
        {
            cout<<a[i]<<" ";             // Printing the output.
        }
        
    }


    return 0;
}

// Time Complexity : O(n).
