#include <iostream>

using namespace std;

//Converte as iniciais para maiusculas
string iniciais (string nome){
 int i = 0;
 while (i < nome.length()){
 if ((nome[i] < 65 || nome[i] > 90) && (i == 0 || nome[i - 1] == ' '))
 nome[i] -= 32;
 i++;
 }
 return nome;
 }

int main(){
 string aluno;

 getline(cin, aluno); //Chamadas equivalentes:
 cout << iniciais(aluno) << endl; //cout << pow (2,2) << endl;
 cout << aluno << endl;
 aluno = iniciais(aluno); // x = pow (2,2);
 cout << aluno << endl; // cout << x;
 return 0;
}


// Na linha 21 o programa irá imprimir o nome todo minusculo, já que o valor atualizado ainda não foi salvo na variavel aluno.
// Já na linha 23, o programa irá imprimir o nome com as iniciais maiusculas, já que a linha anterior salva o valor atualizado da função, na variavel impressa.