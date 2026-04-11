/*Contar ocurrencias: dada una
cadena y un carácter, contar cuántas
veces aparece el carácter.*/
#include<iostream>
#include<cstring>// strlen()
#include<cctype>// tolower()

using namespace std;

int contadorOcurrencias(char cad[], char c){
    int contador=0;
    int n=strlen(cad);// int n=sizeof(cad)/sizeof(cad[0])-1

    for(int i=0; i<n; i++){
        if(cad[i]==c){// Distingue entre mayúsculas y minúsculas
            contador++;
        }
    }
    return contador;
}

//Version Optimizada

int contadorOcurrencias1(char cad[], char c){
    int contador=0;

    for(int i=0; cad[i]!='\0'; i++){
        if(cad[i]==' ') continue;// Salta el resto del código dentro del bucle y pasa a la siguiente iteración (ignora los espacios)
   
        if(tolower(cad[i])==tolower(c)){// No distingue entre mayúsculas y minúsculas
            contador++;
        }
    }
    return contador;
}
// Con esta función ya no cuento espacio c=' ', incluso si los buscos, retornan 0

int main(){
    char cad[100];
    char c;

    cout<<"Digite una expresión: ";
    cin.getline(cad,100);

    cout<<"Ingrese el caracter a buscar: ";
    cin>>c;

    cout<<"El caracter '"<<c<<"' aparece "<<contadorOcurrencias(cad,c)<<" veces."<<endl;
    return 0;
}