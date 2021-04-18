#include <iostream>

using namespace std;
void datos_matriz(char matriz[8][8]);
void imagen(char matriz[8][8]);
void verificar(char matriz[8][8]);
int main()
{
    cout << "PARCIAL INFORMATICA II 2021" << endl;
    char matriz[8][8]={};
    datos_matriz(matriz);
    verificar(matriz);
    imagen(matriz);
    verificar(matriz);
    return 0;
}

void datos_matriz(char matriz[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<"Ingrese el valor de la posicion: "<<"[ "<<i<<" ]"<<"[ "<<j<<" ]: ";
            cin>>matriz[i][j];
        }
    }
}
void verificar(char matriz [8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<"["<<matriz[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<endl;
}
void imagen(char matriz[8][8]){
    for( int i=0; i<8;i++){
        for(int j=0; j<8 ; j++){
            if (matriz[i][j]==49) matriz[i][j]=42;
            else if (matriz[i][j]==48)matriz[i][j]=' ';
        }
    }
}
