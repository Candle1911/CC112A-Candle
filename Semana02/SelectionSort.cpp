/*Selection Sort: En cada pasada i, busca el mínimo en el
subarreglo [ i . . .N−1 ] y lo intercambia
con el elemento en la posición i.*/
#include<iostream>
using namespace std;

/*Version iterativa*/
void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        //Buscar índice del mínimo
        int minIndex=i;//Asumimos que el menor es el actual
        for(int j=i+1; j<n; j++){//Buscamos en el resto del arreglo el valor más pequeño 
            //Si encontramos uno actualizamos su posición
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        // Intercambiar el mínimo con pos i
        if(minIndex!=i){
            swap(arr[i],arr[minIndex]);
        }
    }
}

/*Version Recursiva*/

//Función que calcula el indice del mínimo
int minIndex(int arr[], int inicio, int n){
    if(inicio==n-1) return inicio;// Caso base
    int iResto=minIndex(arr,inicio+1,n);// Caso recursivo
    return (arr[inicio]<=arr[iResto])? inicio:iResto;// Compara el elemento actual con el mínimo encontrado en el resto del arreglo
    // Operador ternario 
}

// Versión iterativa

//Función que intercambia
void SelectionSort_Rec(int arr[], int inicio, int n){
    if(inicio>=n-1) return;// Base: Cuando llegamos al final el arreglo ya está ordenado
    int Indmin=minIndex(arr, inicio,n);
    if(Indmin!=inicio){// Si el mínimo no está en el inicio, lo mueves al inicio
        swap(arr[inicio], arr[Indmin]);
    }
    SelectionSort_Rec(arr,inicio+1,n);// Caso recursivo
}
int main(){
    int arr[]={9,7,1,5,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"{";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<", ";
        }
    }
    cout<<"}";

    SelectionSort(arr, n);
    cout<<"\nEl arrreglo oredenado ascendentemente es: "<<endl;

    cout<<"{";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<", ";
        }
    }
    cout<<"}";

    return 0;
}