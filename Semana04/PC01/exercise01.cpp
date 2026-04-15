#include<iostream>
using namespace std;

void Hanoi(int n, char origin, char aux, char destiny){
    if(n==1){
        cout<<"Mover disco 1 de "<<origin<<" a "<<destiny<<endl;
        return;
    }

    Hanoi(n-1,origin,destiny,aux);
    cout<<"Mover disco "<<n<<" de "<<origin<<" a "<<destiny<<endl;;
    Hanoi(n-1,aux,origin,destiny);
}

int main(){
    cout<<"===== TORRES DE HANOI ====="<<endl;
    int n=0;
    cout<<"Ingrese el numero de discos: ";
    cin>>n;

    Hanoi(n,'A','B','C');
    return 0;
}