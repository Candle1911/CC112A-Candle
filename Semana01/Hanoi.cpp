/*Reglas del juego:
1. Solo mover un disco por vez
2. Mover solo el disco superior
3. No apilar un disco grande sobre uno pequeño*/
#include<iostream>
using namespace std;

// Hanoi 
void hanoi(int n, char origin, char aux, char destiny, int &counter){
    if(n==1){
        cout<<"Mover disco 1 de "<<origin<<" a "<<destiny<<endl;
        contador++;
        return; 
    }// Caso base

    //Pao 1: Mover (n-1) del origen al auxiliar
    hanoi(n-1, origin, destiny, aux, counter);

    //Pao 2: Mover el n-ésimo disco del origen al destino
    cout<<"Mover disco "<<n<<" de "<<origin<<" a "<<destiny<<endl;
    contador++;

    //Paso 3: Mover los (n-1) del auxiliar al origen
    hanoi(n-1, aux, origin, destiny, counter);
}

int main(){
    cout<<"------TORRES DE HANOI------"<<endl;
    int n=0;
    cout<<"Ingrese el numeros de discos: ";
    cin>>n;

    int contador=0;// número de movimientos

    hanoi(n, 'A', 'B', 'C', contador);
    cout<<"Total de movimientos: "<<contador<<endl;

    return 0;
}