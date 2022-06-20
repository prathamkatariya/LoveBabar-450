// Finding the minimum and maximum element in an array.

#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;                          // Taking input of size of an array.
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)     // Taking Array input.
    {
        cin>>arr[i];
    }

    int max = INT_MIN;              // Giving the minimum value to the max variable.
    int min = INT_MAX;              // Giving the maximum value to the min variable.

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)             // Checking every element that it 
        {                           // is greater than max or not if yes
            max = arr[i];           // then update max.
        }
        
    }
        cout<<"Maximun element is: "<<max<<endl;

      for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)             // Checking every element that it
        {                           // is smaller than min or not if yes
            min = arr[i];           // then update min.
        }
        
    }
        cout<<"Minimum element is: "<<min<<endl;

    
    return 0;
}

// Time Complexity : O(n).
