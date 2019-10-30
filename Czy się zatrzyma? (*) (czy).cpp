#include <iostream>
using namespace std;

int main() {
    long long int n;
    bool y=true;
    cin>>n;
    
    while (n>0){
        
        if (n%2==1 && n!=1){
            
            cout<<"NIE";
            y=false;
            break;
        }
        
        n/=2;
    }
    
    if(y){
        
        cout<<"TAK";
    }
    return 0;
}
