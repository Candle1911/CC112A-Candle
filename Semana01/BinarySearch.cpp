#include<iostream>
using namespace std;

// Recordar que para BinarySearch los elementos del arreglo deben estar ordenados
// BinarySearch recursivo para valores ascendentes
int BinarySearch_Rec(int arr[], int left, int right, int key){
    if(left>right) return -1;// Caso base

    int mid=(left+right)/2;

    if(arr[mid]==key){
        return mid+1;
    }// Caso recursivo
    if(key<arr[mid]){// Para elementos en forma descendente if(key>arr[mid]){...}
        return BinarySearch_Rec(arr, left, mid-1,key);// Buscar en la izquierda
    }else{
        return BinarySearch_Rec(arr,mid+1,right,key);// Buscar en la derecha
    }
}

//BinarySearch iterativo para arreglos ordenados ascendentemente
int BinarySearch_Iter(int arr[], int n, int key){
    int left=0;
    int right=n-1;

    while(left<=right){
        int mid=(left+right)/2;

        if(arr[mid]==key){//Encontrado
            return mid;
        }

        if(key<arr[mid]){
            right=mid-1;// Buscar en la izquierda
        }else{
            left=mid+1;// Buscar en la derecha
        }
    }

    return -1;// No encontrado
}



int main(){
    int arr[]={1,2,4,10,23,84};

    int size=sizeof(arr)/sizeof(arr[0]);

    //Imprimimos el arreglo
    cout<<"El arreglo es: "<<"{";

    for(int i=0; i<size; i++){
        cout<<arr[i];

        if(i!=size-1) cout<<", ";// evita la coma al final
    }

    cout<<"}"<<endl;;

    int key;
    cout<<"Digite el elemento que desea buscar: ";
    cin>>key;

    int pos=BinarySearch_Rec(arr,0,size,key);

    if(pos!=-1){
        cout<<key<<" en contrado en la posicion: "<<pos<<endl;
    }else{
        cout<<key<<" no es un elemento del arreglo"<<endl;
    }
    
    return 0;
}