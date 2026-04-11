#include<iostream>
#include<cmath>
using namespace std;

/*Versión recursiva*/
int SumofDigits_Rec(int n){
    n=abs(n);
    
    if(n<10) return n;// Caso base
    return (n%10)+SumofDigits_Rec(n/10);// Caso recursivo
}

/*Versión iterativa*/
int SumofDigits_Iter(int n){
    n=abs(n);
    int suma=0;

    while(n>0){
        suma+=n%10;
        n/=10;
    }

    return suma;
}

int main(){
    int n=0;
    cout<<"Digite un numero: "<<endl;
    cin>>n;
    cout<<"La suma de digitos de "<<n<<" es: "<<SumofDigits_Rec(n);
    return 0;
}