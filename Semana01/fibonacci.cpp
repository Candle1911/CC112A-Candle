#include<iostream>  
using namespace std;
/*Fibonacci recursivo*/
int fibonacciRec(int n){
    if(n==0 || n==1) return 1; // Caso base
    return fibonacciRec(n-1)+fibonacciRec(n-2);
    
}

void PrintFibonacci(int n){
    for(int i=0; i<n; i++){
        cout<<fibonacciRec(i)<<" ";
    }
}
/*la función "fibonacciRec" realiza llamada duplicadas,
tiene complejidad exponencial O(n^2)*/

/*Fibonacci iterativo*/
void fibonacciIter(int n){
    int a=1, b=1;

    for(int i=0; i<n; i++){
        cout<<a<<" ";// Imprime
        int siguiente=a+b; // De esta linea hacia abajo: actualiza a y b
        a=b;
        b=siguiente;
    }
}
/*la función "fibonacciIter" tiene complejidad O(n)*/

int main(){
    PrintFibonacci(5);
    cout<<endl;
    fibonacciIter(5);
    return 0;
}