//Thiago Hipólito Moreira - 2º Informática - Lista 03 - Questão 03



#include <iostream>

using namespace std;

int divs(int n){
    int cont=2;
    //Cont começa com 2 por ja considera o 1 e o proprio n;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            cont++;
        }
    }

    return cont;
}

int main()
{
    int n;
    cout << "Informe um valor inteiro e positivo: ";
    cin >> n;
    cout << n << " tem " << divs(n) << " divisores";

    return 0;
}
