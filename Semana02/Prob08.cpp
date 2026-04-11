#include<iostream>
#include<cstdlib>// srand(), rand()
#include<ctime>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool cambio=false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                cambio=true;
            }
        }
        if(!cambio) break;
    }
}

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            swap(arr[i],arr[minIndex]);
        }
    }
}

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>arr[key]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int BinarySearch(int arr[], int n, int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int half=(left+right)/2;
        if(arr[half]==key){
            return half;
        }else if(arr[half]<key){
            left=half+1;
        }else{
            right=half-1;
        }
    }
    return -1;

}

void Random(int arr[], int n, int min, int max){
    srand(time(0));
    for(int i=0; i<n; i++){
        arr[i]=min+rand()%(max-min+1);
    }
}

void PrintCad(int arr[], int n){
    cout<<"{";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        if(i!=n-1){
            cout<<", ";
        }
    }
    cout<<"}"<<endl;
}

int main(){
    int arr[10];
    int n=10;

    int min;
    cout<<"Ingrese el menor elemento del arreglo: "<<endl;
    cin>>min;
    int max;
    cout<<"Ingrese el mayor elemento del arreglo: "<<endl;
    cin>>max;

    cout<<"\nGenerando arreglo ...\n";
    Random(arr,n,min,max);
    cout<<"\nArreglo generado: ";
    PrintCad(arr,n);

    int option;
    do{
        cout<<"\nElija el metodo de ordenamiento: "<<endl;
        cout<<"1. BubbleSort\n";
        cout<<"2. SelectionSort\n";
        cout<<"3. InsertionSort\n";
        cout<<"Presione 0 para salir\n ";
        cin>>option;

        switch(option){
            case 1:
                cout<<"\nOrdenando arreglo...\n";
                BubbleSort(arr,n);
                cout<<"\nArreglo ordenado:";
                PrintCad(arr,n);
                break;
            case 2:
                cout<<"\nOrdenando arreglo...\n";
                SelectionSort(arr,n);
                cout<<"\nArreglo ordenado:";
                PrintCad(arr,n);
                break;
            case 3:
                cout<<"\nOrdenando arreglo...\n";
                InsertionSort(arr,n);
                cout<<"\nArreglo ordenado:";
                PrintCad(arr,n);
                break;
            case 0:
                cout<<"Saliendo...\n";
                break;
            default:
                cout<<"Opcion no valida.\n";
        }

        char c;
        int element;
        if(option==1 || option==2 || option==3){
            cout<<"\nDesea buscar un elemento del arreglo? (S/N):\n";
            cin>>c;
            if(c=='s'){
                cout<<"Digite el elemento:\n";
                cin>>element;
                cout<<"\nBuscando...\n";
                if(BinarySearch(arr,n,element)!=-1){
                    cout<<"\nElemento encontado en position: "<<BinarySearch(arr,n,element)<<endl;
                }else{
                    cout<<element<<" no pertenece al arreglo"<<endl;
                }
            }else if(c=='n'){
                cout<<"\nSaliendo...";
                break;
            }
        }
    }while(option!=0);




}