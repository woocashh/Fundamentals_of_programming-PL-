#include <iostream>
#include<algorithm>

using namespace std;


int main() {
    
    
    int n;
    
    cin>>n;
    
    int tab[n];
    
    for(int i=0;i<n;i++){
        
        cin>>tab[i];
    }
    
    bool w=true;

    for(int i=1;i<n;i++){
        
        if (tab[0]!=tab[i]){
            w=false;
            break;
        }
    }
    

    
    if (w){
        
        cout<<"BRAK";
    }
    
    else{
        
        if (tab[0]!=tab[n-1]){
            
            cout<<n-1;
        }
        
        else{
            int lefty=0;
            int righty=0;
            
            for(int j=0;j<n;j++){
                
                if(tab[0]!=tab[j]){
                    
                    lefty= n-j-1;
                    break;
                }
            }
            
            for(int j=n-1;j>=0;j--){
                
                if(tab[n-1]!=tab[j]){
                    
                    righty= j;
                    break;
                }
            }
            
            cout<<max(righty,lefty);
        }
    }
    return 0;
}
