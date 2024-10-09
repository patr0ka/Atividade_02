#include <iostream>
using namespace std;

int N=10; //variavel global

int somapar(int x){
    if(x%2==0){
        return x+N;
    }
    else{
        return x-N;
    }
}

int main(){
    int x;  //variavel local
    for(int i=0; i<10; i++){ //variavel bloco
        cin >> x;
        cout << somapar(x);
    }

}