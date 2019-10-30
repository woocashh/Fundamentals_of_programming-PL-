#include <iostream>

using namespace std;


int main() {
    
    
    int n;
    int tab[4] = {6,2,4,8};
    
    cin>>n;
    
    if (n==0){
        cout<<1;
    }
    else{
        cout<<tab[n%4];
        
    }

    return 0;
}
