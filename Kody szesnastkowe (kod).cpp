#include <iostream>
using namespace std;



int main() {
    
    char hex[2];
    
    cin>>hex;
    
    int wynik;
    
    
    if ((int)hex[1]>64){
        wynik=((int)hex[0]-48)*16+(int)hex[1]-55;}
    else{
        wynik=((int)hex[0]-48)*16+(int)hex[1]-30-18;
    }
    
    cout<<wynik<<endl;
    cout<<(char)wynik<<endl;
    return 0;
}
