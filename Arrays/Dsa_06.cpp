// Finding the union of two sorted arrays.

#include <iostream>
#include <unordered_map>  // including unordered map library.

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;          
        cin>>n>>m;      // Taking the input of size of two arrays.

        int a[n],b[m];  

        unordered_map<int, int> map;   // Using unordered map.

        for(int i=0; i<n; i++){
            cin>>a[i];                // Taking input of array & use 
            map[a[i]]++;              // map to find the unique no.
        }

        for(int i=0; i<m; i++){
            cin>>b[i];                // Taking input of array & use
            map[b[i]]++;              // map to find the unique no.
        }

        cout<<map.size()<<endl;
        
    }

    return 0;
}

// Time Complexity : O(n+m)
