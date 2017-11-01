#include <iostream>
using namespace std;

// FIX: LLENADO DE ARREGLOS CON 0
// ADD: 20% DE NUMEROS Y 80% DE 0

//------------------------------------------------------CLASE

class Dispersa
{
    public:
        //FUNCIONES
        Dispersa();
        ~Dispersa();
        void crearMatriz(int num);
        void mostrarMatriz(int x[]);
        int encontrarDatoEnPos(int i,int j, int []);
        int sumaMatrices(int x[],int y[]);
    private:
        //DATOS
};

//------------------------------------------------------METODOS

void Dispersa::crearMatriz(int num){

    int new_orden = (num*num)+1; // Matriz Cuadrada
    int valor;
    int vector[new_orden] = {0};

    // FIX: LLENADO DE ARREGLOS CON 0
    // ADD: 20% DE NUMEROS Y 80% DE 0

    for(int i = 1; i <= num * num; i++)
    {
        valor=vector[i];
        cout << " " << valor;

        if(i%num==0)
        {
            cout << "\n";

        }
    }
}

void Dispersa::mostrarMatriz(int x[]){
}

int Dispersa::encontrarDatoEnPos(int i, int j, int[]){
    return 0;
}

int Dispersa::sumaMatrices(int x[], int y[]){
    return 0;
}

//------------------------------------------------------MAIN

int main()
{
    cout << "Matriz Dispersa" << endl;
    int  num;
    cout << "Ingrese el orden de la matriz: ";
    cin >> num;


    Dispersa A;
    A.crearMatriz(num);

    return 0;
}
