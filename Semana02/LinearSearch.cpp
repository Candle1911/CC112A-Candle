#include<iostream>
#include<cstdlib>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

// Versión recursiva

int LinearSearch_Rec(int arr[], int n, int key, int inicio=0){
    if(inicio>=n) return -1;// Caso sase
    if(arr[inicio]==key) return inicio;
    return LinearSearch_Rec(arr, n, key, inicio +1);// Caso recursivo
}

int GenRandom(int arr[], int n, int min, int max){
    srand(time(0));// Semilla: Sin esto obtendríamos la misma secuencia
    for(int i=0; i<n; i++){
        arr[i]=min+rand()%(max-min+1);
    }
}

int main(){
    return 0;
}