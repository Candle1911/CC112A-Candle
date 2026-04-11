/*Las funciones de ordenamiento adaptadas para orden decreciente*/
#include<iostream>
#include<cstring>

using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool change=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
                change=true;
            }
        }
        if(!change) break;
    }
}

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int maxIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex=j;
            }
        }
        if(maxIndex!=i){
            swap(arr[i],arr[maxIndex]);
        }
    }
}

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
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
    int arr[]={9,4,19,5,18,3,20};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"El tamaño del arreglo es: "<<n<<endl;

    PrintCad(arr,n);

    BubbleSort(arr,n);
    
    cout<<"La cadena ordenada es: "<<endl;

    PrintCad(arr, n);

    

}