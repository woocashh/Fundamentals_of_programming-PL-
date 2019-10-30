#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int out=0;
    
    while (n>0){
        
        out= 10*out + n%10;
        n/=10;

    }
    
    cout<<out;


    return 0;
}
