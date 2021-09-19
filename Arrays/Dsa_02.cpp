#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
        cout<<"Maximun element is: "<<max<<endl;

      for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
        cout<<"Minimum element is: "<<min<<endl;

    
    return 0;
}