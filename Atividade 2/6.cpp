#include <iostream>
#include <ctime>
using namespace std;

int GerarNumAleat(void);

int main(){
    srand(time(NULL));
    for(int i=0; i<10; i++){
        cout << GerarNumAleat() << endl;
    }
}

int GerarNumAleat(void){
    return rand()%100+1;
}

