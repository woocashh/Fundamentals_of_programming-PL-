#include <iostream>
using namespace std;

int main() {
    
    int k;
    
    cin>>k;
    
    int tab[k+1];
    
    int powr=1;

    
    for(int i=0; i<=k;i++){
        tab[i]=powr;
        powr*=2;
    }
    
    
    
    int stan[k+1];
  
    for(int j=0;j<=k;j++){
        
        cin>>stan[j];
    }
    
    

    int sum=0;
    bool y =true;
    
    for(int i =0; i<k;i++){
        
        sum+=tab[i]*stan[i];

        if (sum<tab[i+1]-1){
            cout<<sum+1;
            y=false;
            break;
        }
    }
    
    if(y){
        cout<<sum+tab[k]*stan[k]+1;
        
    }
    
    return 0;
}
