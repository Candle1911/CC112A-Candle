/*3. Implementar búsqueda lineal para: (a)
primera ocurrencia, (b) última
ocurrencia, (c) contar ocurrencias.*/
#include<iostream>
using namespace std;

void Search(int arr[], int n, int key, int pos[]){
    int cantidad=0;// Inicializamos el contador
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            pos[cantidad]=i+1;// Guardamos el índice
            cantidad++;// Incrementamos el contador
        }
    }

    if(cantidad==0){
        cout<<key<<" No pertenece al arreglo"<<endl; 
    }else if(cantidad==1){
        cout<<key<<" se encontro en la posicion: "<<pos[0];
    }else if(cantidad>1){
        cout<<"El total de ocurrecias es: "<<cantidad<<endl;
        cout<<"La primera ocurrencia es en la posición: "<<pos[0]<<endl;
        cout<<"La última ocurrencia es la posición: "<<pos[cantidad-1]<<endl;
    }
    
}

int main(){
    int arr[]={3,2,4,5,3,4,5,3,3,2};
    int pos[10];
    int n=sizeof(arr)/sizeof(arr[0]);
    Search(arr,n,3,pos);
    return 0;
}