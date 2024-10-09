//void bom_dia();
//int aleat();
//int dobro(int);
//void mostra_dobro(int);
//int main(){
//int x, num;
//bom_dia();
//printf("%d", aleat());
//x = aleat();
//num += dobro(x);
//if (dobro(x) > dobro(aleat())){
// mostra_dobro(x);
//}
//return 0;
//}

//Por mais que teoricamente as unicas funções que retornem algo, sejam as de tipo int, as 4 estão vazias, elas não possuem o conjunto de instruções para serem executadas e
//também não possuem parametros.
#include <iostream>
using namespace std;

void bom_dia(){
    cout  << "Bom dia!" << endl; // Adição das instruções

}
int aleat(){
    return rand()%10+1; // Adição das instruções
}
int dobro(int x){ // Adição do parametro
    int resultado;
    resultado = x*2;
    return resultado;
}
void mostra_dobro(int x){ // Remoção do parametro e adição de instrução
    int resultado;
    resultado =  x*2;   
    cout << resultado;
} 

int main(){
int x=0, num=0; //Inicializa em 0;
bom_dia();
cout << aleat() << endl;
x = aleat();
num += dobro(x);
cout << num << endl;
if (dobro(x) > dobro(aleat())){
 mostra_dobro(x);
}
return 0;
}

