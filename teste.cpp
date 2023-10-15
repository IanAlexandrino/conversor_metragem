#include <iostream>

using namespace std;


int main(){
    float metro;
    int metroCentimetro;
  
    cout << "                  *** Olá, bem vindo ao conversor de metros!! *** \n\n";
    cout << "Este app vai converter qualquer metragem que você digitar em centímetros, vamos lá:\n" << endl;
    cin >> metro;
    if(metro < 1){
        metroCentimetro = metro*1000;
    } else{
        metroCentimetro = metro*100;
    }
    cout << "\nA metragem convertida é: " << metroCentimetro << endl;
    

    return 0;
} 