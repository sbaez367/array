#include <iostream>

using namespace std;

int main (){
/*
int numero[]={1, 2, 3, 4, 5, 6, 7, 8, 9};

int largo = sizeof (frutas)/sizeof(frutas[0]);
cout<< largo;

int largo = sizeof (frutas)/sizeof(frutas[0]);
for (int i=0; i<largo; i++){

    cout << frutas[i] << endl;

}
*/
int numero[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
int largo = sizeof (numero)/sizeof(numero[0]);

int nuevoElemento =10;

int nuevoTamanio = largo +1;
int nuevoArray [nuevoTamanio];

copy (numero, numero + largo, nuevoArray);
nuevoArray[largo] = nuevoElemento;


for(int i = 0; i<nuevoTamanio;i++){
  cout << nuevoArray [i];
}
return 0;
}

