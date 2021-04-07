#include <iostream>
#include <string>

using namespace std;

string Letras="Sapo perro Augusto";
string Frase="";

void MayusFras();

int main()
{
    MayusFras();

    return 0;
}

void MayusFras(){
    for(unsigned short i=0; i<Letras.length(); i++){
        if((Letras[i]>='a') && (Letras[i]<='z')) Letras[i]-=32;
    }

    for(unsigned short j=0; j<Letras.length(); j++){
        if((Letras[j]>='A') && (Letras[j]<='Z')) Frase+='_';
        else Frase+=Letras[j];
    }
}
