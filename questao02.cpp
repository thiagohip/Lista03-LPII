//Thiago Hipólito Moreira - 2º Informática - Lista 03 - Questão 02


#include <iostream>

using namespace std;

string categ(int age){
    if(age <= 7 && age >= 5){
        return "Infantil A";
    }else if(age <= 10 && age >= 8){
        return "Infantil B";
    }else if(age <= 13 && age >= 11){
        return "Juvenil A";
    }else if(age <= 17 && age >= 14){
        return "Juvenil B";
    }else if(age >= 18){
        return "Adulto";
    }
}

int main()
{
    int age;

    cout << "Digite a idade do atleta: ";
    cin >> age;
    cout << "O atleta esta na categora " << categ(age);

    return 0;
}
