#include<iostream>
#include<string>
#include<cctype>// toupper
using namespace std;

// 1.Generar alfabeto original
string genAlphabet(){
    string alphabet="";
    for(char c='A'; c<='Z';c++){
        alphabet+=c;
    }
    return alphabet;
}

// 2. Generar alfabeto desplazado
string shiftedAlphabet(string original, int d){
    string newalph="";
    for(int i=0; i<26; i++){
        int pos=(i+26-d)%26;
        newalph+=original[pos];
    }
    return newalph;
}

// 3. Función para cifrar
string code(string text, string originalAlph, string shiftedAlph){
    string result="";

    for(char c:text){
        if(c==' '){
            result+=' ';
        }else{
            c=toupper(c);// Convertir a mayúscula cada letra
            for(int i=0; i<26; i++){
                if(c==originalAlph[i]){
                    result+=shiftedAlph[i];
                    break;
                }
            }
        }
    }
    return result;
}

int main(){
    string originalAlph=genAlphabet();

    int displacement;
    cout<<"Ingrese desplazamiento (1-26): ";
    cin>>displacement;
    cin.ignore();

    string shiftedAlph=shiftedAlphabet(originalAlph,displacement);
    
    cout << "Alfabeto original:   " << originalAlph << endl;
    cout << "Alfabeto desplazado: " << shiftedAlph << endl;

    string text;
    cout<<"Ingrese frase: ";
    getline(cin,text);

    string codex=code(text,originalAlph,shiftedAlph);

    cout<<"Frase original: "<<text<<endl;
    cout<<"Frase codificada: "<<codex<<endl;
}