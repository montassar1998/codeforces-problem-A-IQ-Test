#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int t[n];
    int p=0;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int nbeven=0;
    for(int i=0;i<n;i++){
        if(t[i]%2==0){
            nbeven++;
        }
    }
    if(nbeven==1){
        for(int i=0;i<n;i++){
            if(t[i]%2==0){
                cout<<i+1;
                exit(0);
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(t[i]%2!=0){
                cout<<i+1;
                exit(0);
            }
        }
    }
    cout<<p;
    return 0;
}
