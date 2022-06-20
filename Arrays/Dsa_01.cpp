// Reverse the array. 


#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

       string s;
       cin>>s;
       int n = s.length();   // Geting the length of string. 
       int start = 0;        // Taking start that point the first value.
       int end = n-1;        // Taking end-1 that point the last value.
        while (start<end)
        {
            swap(s[start],s[end]);  // By Swaping we can reverse the string.
            start++;                // Increment the start. 
            end--;                  // Decreament the end.
        }
        cout<<s<<endl;
        
    }

    return 0;
}

// Time Complexity - O(n)
