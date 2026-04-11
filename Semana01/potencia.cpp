#include<iostream>
using namespace std;

double potenciaRec(double a, int n){
    if(n==0) return 1.0;
    return a*potenciaRec(a, n-1);
}
/*"potenciaRec" n llamadas recursivas, complejidad O(n)*/

double potenciaFast(double a, int n){// Esta funcióon también sirve para bases negativas
    if(n==0) return 1.0;

    if(n<0) return 1.0/potenciaFast(a,-n);

    double mitad=potenciaFast(a,n/2);

    if(n%2==0){
        return mitad*mitad;
    }else{
        return a*mitad*mitad;
    }
}
/*"potenciaFast" tiene complejidad O(log(n))*/

int main(){
    int a=0;
    cout<<"Digile la base: "<<endl;
    cin>>a;

    int n=0;
    cout<<"Digite el exponente: "<<endl;
    cin>>n;

    cout<<"\nEl resultado de elevar "<<a<<" a "<<n<<" es: "<<potenciaFast(a,n);
    return 0;
}