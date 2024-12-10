#include <iostream>
using namespace std;
void factorial(int a){
    int fact=a;
    for(int i=1; i<a; i++){
        fact=i*fact;
        
    }
    cout << fact;
}

int main(){
    int a;
    cout << "Enter number \n";
    cin >> a;
    factorial(a);
    
    factorial(a);
}