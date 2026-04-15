#include<iostream>
#include<string>
#include<cctype>//islower()
using namespace std;

string CaesarCipher(string text, int desplazamiento){
    string resultado="";
    for(char &c:text){
        if(isalpha(c)){// Verificar si es letra
            char base=islower(c)?'a':'A';// Ayuda a que las minúsculas sigan siendo minúsculas y las mayúsculas mayúsculas
            // Aplicar desplazamiento y mantener circularidad 
            c=(c-base+desplazamiento)%26+base;
        }
        resultado+=c;
    }
    return resultado;
}

int main(){
    string message="Hola Mundo";
    int key=5;

    string cifrado=CaesarCipher(message,key);
    cout<<"Cifrado: "<<cifrado<<endl;

    string descifrado=CaesarCipher(cifrado,26-(key%26));
    cout<<"Descifrado: "<<descifrado<<endl;
}