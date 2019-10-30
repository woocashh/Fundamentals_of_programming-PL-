#include <iostream>
#include<string>

using namespace std;



int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}



int main() {
    
    int gdc(int a, int b);
    int n;
    
    cin>>n;
    
    int tab[2*n];
    
    for (int i=0;i<2*n-1;i+=2){
        
        cin>>tab[i]>>tab[i+1];
    }
    
    
    for (int j=0; j < (2*n-1); j=j+2){
        
        cout<<tab[j]/gcd(tab[j],tab[j+1])<<endl;
        
    }

    

    return 0;
}
