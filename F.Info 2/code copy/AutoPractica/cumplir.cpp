#include<iostream>

using namespace std;

int main(){
    
    bool a;
    
    a = 3;

    cout << a << endl;

    if(a = 3){
        a = true;
    }

    if(a = true){
        cout << "Lola eres un caraculo." << endl;
    }
    
    return 0;
}