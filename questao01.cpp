//Thiago Hipólito Moreira - 2º Informática - Lista 03 - Questão 01

#include <iostream>

using namespace std;


float avg(float n1, float n2, float n3, char l){
    if(l == 'A' || l == 'a'){
        return ((n1+n2+n3)/3);
    }else if(l == 'P' || l == 'p'){
        return((n1*5+n2*3+n3*2)/(5+3+2));
    }
}


int main()
{

    float n1,n2,n3;
    char l;

    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite a nota 2: ";
    cin >> n2;
    cout << "Digite a nota 3: ";
    cin >> n3;
    cout << "Selecione a média; Ponderada[P]  Aritmética[A] ";
    cin >> l;
    cout << "A média do aluno foi de " << avg(n1,n2,n3,l);



    return 0;
}
