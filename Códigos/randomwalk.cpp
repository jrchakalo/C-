//Autor: José Izaias da Silva Júnior
//Data: 07/11/2022
//Nome do projeto: Rabdom Walk 2D - Processo Estocastico

#include <iostream>
#include <string>
//funcao time utilizada para randomizar o resultado.
#include <time.h>

//defines gerais
#define NUM 50 //numero de passos que o bebado vai dar.
#define FREN 0.9 //probabilidade do bebado ir para frente.
#define DIR 0.4 //probabilidade dele ir pra direita.
#define REP 10 //numero de testes.

using namespace std;

int main (void){
    //variaveis para o calculo.
    int bebdir;
    int bebsen;
    int totdir=0;
    int totsen=0;

    //funcao para randomizar o resultado a cada execucao do programa.
    srand(time(NULL));

    //for para calcular todas os testes.
    for(int i=0; i<REP; i++){
        bebdir = 0;
        bebsen = 0;

        //for para cada caminhada do bebado.
        for (int j=0; j<NUM; j++){
            //ve se o bebado anda pra frente ou pra tras.
            if(1.0*rand()/RAND_MAX < FREN){
                bebdir++;
            }else{
                //diminuir significa andar para tras.
                bebdir--;
            }

            //ve se o bebado vai para esquerda ou para direita.
            if(1.0*rand()/RAND_MAX < DIR){
                bebsen++;
            }else{
                //diminuir significa andar para esquerda.
                bebsen--;
            }

        }
        cout << "A posicao do bebado no teste " << i+1 << " em (x, y) eh: (" << bebdir << ", " << bebsen << ")" << endl;

        //soma os resultados de cada teste.
        totdir += bebdir;
        totsen += bebsen;
    }

    //divide o resultado de todos os testes pelo numero de repeticoes para obter a media.
    totdir = totdir/REP;
    totsen = totsen/REP;
    

    //printa o resultado da media final para o sentido e a diracao.
    cout << "A posicao media final do bebado em (x, y) eh: (" << totdir << ", " << totsen << ")" << endl;
}