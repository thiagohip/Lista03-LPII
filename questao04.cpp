//Thiago Hipólito Moreira - 2º Informática - Lista 03 - Questão 04

#include <iostream>

using namespace std;

void recursiva(int i, int m[8][8]){
    if(i > 0){
        cout << m[i][i] << endl;
        recursiva(i - 1, m);
    }else{
        cout << m[i][i] << endl;
    }

}


int main()
{
    int m[8][8], i, j;

    srand(time(NULL));

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            m[i][j] = rand()%101;
        }
    }

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cout << m[i][j] << ' ' ;
        }
        cout << endl;
    }


    recursiva(7, m);






    return 0;
}
