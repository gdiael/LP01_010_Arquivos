#include "leitura.h"

void TestLeitura(){
    ifstream arq("notas.csv");
    if(arq.is_open() == 0){
        return;
    };
    cout << arq.getline();
}