#include<iostream>
#include<cmath>
using namespace std;
/*Algoritmo de Euclides: El mcd de dos números es igual al mcd del menor de ellos
y el residio por exceso o por defecto de la división entre ambos */
int mcd(int a, int b){
    a=abs(a);// manejo de negativos
    b=abs(b);
    if(b==0) return a;// Caso base
    return mcd(b,a%b);// Si a<b => a%b=a (recordar que "%" solo esta definido para aritmética entera)
}
/*Complejidad O(log mín(a,b))*/

int main(){
    int a=0;
    cout<<"Digite un numero: "<<endl;
    cin>>a;
    int b=0;
    cout<<"Digite otro: "<<endl;
    cin>>b;
    cout<<"\nEl mcd de "<<a<<" y "<<b<<" es: "<<mcd(a,b);
    return 0;
}