#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int tab[n];
    int out[6]={0,0,0,0,0,0};
    
    for(int i =0;i<n;i++){
        
        cin>>tab[i];
    }
    
    for(int i =0;i<n;i++){
        
        out[tab[i]-1]++;
        
    }
    
    for(int i=0;i<=5;i++){
        
        cout<<out[i]<<" ";
    }
    

    
    return 0;
}
