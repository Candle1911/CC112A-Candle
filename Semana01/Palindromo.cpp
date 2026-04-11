#include<iostream>
#include<cstring>// ("<cstring>" trabaja con cadenas tipo C) strlen()
#include<cctype>// ("<cctype>" trabaja con caracteres) isalnum(), tolower()

using namespace std;

bool esPalindromo1(char cad[]){
    int i=0;
    int j=strlen(cad)-1;// sizeof no funciona dentro de funciones, porque cad[] pasa a un puntero

    while(i<j){
        // Saltar caracteres no alfanuméricos
        while(i<j && !isalnum(cad[i])) i++;
        while(i<j && !isalnum(cad[j])) j--;

        if(tolower(cad[i])!=tolower(cad[j])){// Trabaja con mayusculas
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool esPalindromo(char cad[]){
    int i=0;
    int j=strlen(cad)-1;

    while(i<j){
        if(cad[i]!=cad[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char cad[100];

    cout<<"Ingrese una cadena: ";
    cin.getline(cad,100);// "cin.getline" solo se aplica a arreglos de caracteres (char[]), cadenas tipo C, no strings
    //para string es getline(cin, cad);

    if(esPalindromo1(cad)){
        cout<<"Es palindromo"<<endl;
    }else{
        cout<<"No es palindromo"<<endl;
    }

    return 0;
}