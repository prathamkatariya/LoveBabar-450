#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]<0){
                swap(a[i],a[j]);
                j++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
    return 0;
}