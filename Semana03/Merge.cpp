#include<iostream>
using namespace std;
/*El algoritmo de ordenación por fusión (MergeSort) utiliza la estrategia de divide y vencerás*/
/*La función Merge hace que las dos mitades realicen una operación  de
ordenación y búsqueda. Compara los elementos de ambas mitades y los fusiona 
de manera que la lista resultante también quede ordenada.
*/
void Merge(int arr[], int left, int mid, int right){
    int n1=mid-left+1;// Número de elemento del array de la izquierda
    int n2=right-mid;// Número de elementos del array de la derecha

    int* Left= new int[n1];// Definimos el array de la izquierda
    int* Right=new int[n2];// Definimos el array de la derecha

    //Rellenamos los arrays
    for(int i=0; i<n1; i++){
        Left[i]=arr[left+i];
    }
    for(int j=0; j<n2; j++){
        Right[j]=arr[mid+1+j];
    }

    /*Hasta ahora, hemos dividido nuestra lista original en dos mitades,
     Lefty Right.
     Ahora, vamos a ordenar y fusionar estas mitades*/

     int i=0, j=0;
     int k=left;

     while(i<n1 && j<n2){
        if(Left[i]<=Right[j]){
            arr[k++]=Left[i++];
        }else{
            arr[k++]=Right[j++];
        }
     }

     /*Copiamos los elementos restantes de Left[] (si los hay) al final
     del arr[] array resultante.*/

     while(i<n1){
        arr[k++]=Left[i++];
    }

    
     /*Copiamos los elementos restantes de Right[] (si los hay) al final
     del arr[] array resultante.*/
    while(j<n2){
        arr[k++]=Right[j++];
    }

    delete[] Left;
    delete[] Right;
}

/*Ahora, implementemos el método para dividir el array en dos mitades. En cuanto a la programación, 
necesitaremos definir un sort()método para dividir el array y gestionar el proceso de fusión. 
Dividiremos el array y sus mitades de forma recursiva hasta obtener arrays pequeños de un solo elemento, 
¡que estarán ordenados de forma natural! A continuación, fusionaremos estos arrays en un único array grande 
y ordenado.*/

void Sort(int arr[], int left, int right){
    if(left<right){
        int mid=left+(right-left)/2;
    
        Sort(arr,left,mid);
        Sort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}

// Complejidad de MergeSort O(nlog(n))


int main(){
    return 0;
}