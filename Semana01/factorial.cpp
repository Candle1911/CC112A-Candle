#include<iostream>
using namespace std;
/*Factorial recursivo*/
int factRec(int n){
    if(n==0) return 1;
    return n*factRec(n-1);
}

/*Factorial iterativo*/
int factIter(int n){
    int r=1;
    for(int i=2; i<=n; i++){
        r*=i;
    }
    return r;
}

int main(){
    cout<<factRec(5)<<endl;
    cout<<factIter(5)<<endl;
    return 0;
}