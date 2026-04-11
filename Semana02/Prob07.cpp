/*7. Generar un arreglo de doubles aleatorios
en [0, 1] (tamaño 20), ordenarlo con
inserción e imprimirlo con 4 decimales.*/
#include<iostream>
#include<cstdlib>// rand, srand
#include<ctime>// time()
#include<iomanip>// setprecision(), fixed()
using namespace std;

void InsertionSort(double arr[], int n){
    for(int i=1; i<n; i++){
        double key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}

void Random(double arr[], int n){
    srand(time(0));

    for(int i=0; i<n; i++){
        arr[i]=(double)rand()/RAND_MAX;
    }
}

void Print(double arr[], int n){
    cout<<fixed<<setprecision(4);//Nos da los cuatro decimales
    cout<<"{";
    for(int i=0; i<n; i++){
        cout<<arr[i];// setprecision(n) da n cifras significativas, no n decimales
        if(i!=n-1){
            cout<<", ";
        }
    }
    cout<<"}";
}

int main(){
    const int n=20;
    double arr[n];
    Random(arr,n);
    Print(arr,n);
    InsertionSort(arr,n);
    cout<<"\nEl vector ordenado es: "<<endl;
    Print(arr,n);
    

    return 0;
}
