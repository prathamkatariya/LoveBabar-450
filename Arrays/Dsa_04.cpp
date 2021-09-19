#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count_1 = 0;
        int count_2 = 0;
        int count_3 = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                count_1++;
            }
            else if(a[i]==1){
                count_2++;
            }
            else{
                count_3++;
            }
        }

        int k =0;
        for (int i = 0; i < count_1 ; i++)
        {
            a[k++] = 0;
        }
        for (int i = 0; i < count_2 ; i++)
        {
            a[k++] = 1;
        }
        for (int i = 0; i < count_3 ; i++)
        {
            a[k++] = 2;
        }
        
        for (int i = 0; i < n ; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }


    return 0;
}