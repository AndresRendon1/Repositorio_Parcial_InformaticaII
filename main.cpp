#include <iostream>

using namespace std;
void datos_matriz(char matriz[][8][8], int);
void imagen(char matriz[][8][8], int);
void imprimir(char matriz[][8][8], int);
char Mostrar[][8][8]={}; //matriz que vamos a usar

int main()
{
    cout << "PARCIAL INFORMATICA II 2021" << endl;
    int a;
    cout<<"Cantidad de caracteres: ";cin>>a;
    Mostrar[a][8][8]={};
    datos_matriz(Mostrar,a);
    //verificar(Mostrar,a);
    imagen(Mostrar,a);
    imprimir(Mostrar,a);
    return 0;
}

void datos_matriz(char Mostrar[][8][8], int a){ //Ingresar los datos para el patron
    for(int k=0;k<a;k++){ //Cantidad de caracteres
        cout<<"Ingrese el patron del caracter #"<<++k<<endl;
        for(int i=0;i<8;i++){ //Filas
            for(int j=0;j<8;j++){ //Columnas
                cout<<"Ingrese el valor de la posicion: "<<"[ "<<i<<" ]"<<"[ "<<j<<" ]: ";
                cin>>Mostrar[k][i][j]; //Irlos colocando
            }
        }
        cout<<endl<<"---------------------------------------------"<<endl;
    }
}
void imprimir(char Mostrar [][8][8], int a){ //imprimir
    for (int k=0; k<a; k++){//Cantidad de caracteres
        cout<<"Patron del caracter #"<<++k<<endl;
    for(int i=0;i<8;i++){ //Filas
        for(int j=0;j<8;j++){ //Columnas
            cout<<"["<<Mostrar[k][i][j]<<"]"; //muestre lo que hay en la matriz
        }
        cout<<endl;
        }
        cout<<endl<<"-------------------------------------------"<<endl;
    }

}
void imagen(char Mostrar[][8][8],int a){ //Patron
    for(int k=0; k<a; k++){ //cantidad de caracteres
    for( int i=0; i<8;i++){ //flas
        for(int j=0; j<8 ; j++){ //columnas
            if (Mostrar[k][i][j]==49) Mostrar[k][i][j]=42; //convertir en *
            else Mostrar[k][i][j]=' ';
        }
    }
    }
}
