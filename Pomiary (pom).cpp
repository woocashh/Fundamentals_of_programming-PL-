#include <iostream>
using namespace std;



int main() {
    
    int n;
    int last=0;
    int count=0;
    cin>>n;
    
    while (n>=0){
        
        cin>>n;
        
        if (n-last>0 && n>0){
            count++;
        }
        last =n;
        
    }
    
    cout<<count;


    return 0;
}
