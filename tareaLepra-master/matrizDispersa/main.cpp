#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <ctime>


using namespace std;

#define MAX 100
#define LARGO 100

// orden = orden de matriz

//------------------------------------------------------CLASE

class Dispersa
{
    public:
        //FUNCIONES
        Dispersa();

        virtual ~Dispersa() {}; //El destructor está ahora definido virtualmente
        void crearMatriz(int num, int num2);
        void mostrarMatriz();
        int encontrarDatoEnPos(int i,int j, int []);
        int sumaMatrices(int x[],int y[]);
        int GetMatriz();
        int GetMatrizPos(int pos){ return Matriz[pos];};
        int GetDimensionI(){ return dimensionI;};
        int GetDimensionJ(){ return dimensionJ;};

        void SetMatriz(int valor, int pos) { Matriz[pos]=valor; } ;
        void SetDimensionI(int valor) { dimensionI = valor;};
        void SetDimensionJ(int valor) { dimensionJ = valor;};

    private:

        // Agregué  esto por si las moscas
        int dimensionI;
        int dimensionJ;
        int Matriz[MAX];
        //DATOS
};

//------------------------------------------------------METODOS



Dispersa::Dispersa()                                    //Define los atributos y deja la matriz en completa con 0
{
    Matriz[0]={0};
}

void Dispersa::crearMatriz(int num, int num2){

    int new_orden = ((num*num2)+1); // Matriz Cuadrada

    int veinteP = (new_orden*(0.2)); // Saca el 20%  total de la matriz para poder rellenar la matriz y dejar el al menos 80% lleno de 0's


    int pos;
    srand(time(0));                 // Esto permite que la variable rand() tenga valores distintos
    for (int cont = 0 ; cont < veinteP; cont++)
    {
        pos = (1 + (rand() %new_orden));    // Elije una posición al azar dentro e la matriz

        int aux = (1 + rand()&6);   // Crea numero
        if ( aux != 0)              // Evita que el numero random sea 0
        {
            SetMatriz(aux, pos);
        }


    }

    // FIX: LLENADO DE ARREGLOS CON 0
    // ADD: 20% DE NUMEROS Y 80% DE 0




}

void Dispersa::mostrarMatriz(){


    int num = GetDimensionI();
    int num2 = GetDimensionJ();
    int vector[MAX] = {0};

    int aux;

    /*
        Copia la 'matriz' a un vector, para facilitar la vista del proceso.
    */

    for(int i = 0; i <= (num * num2 + 1); i++){

        aux = GetMatrizPos(i);
        vector[i] = aux;
    }



    cout << "\n\t\tMatriz  de dimension " << num  << "x" << num2;
    cout << "\n\n  Forma Matriz: \n\n\t\t";
    int valor=0;
    for(int i = 1; i <= num * num2; i++)
    {
        valor=vector[i];
        cout << " " << valor;

        if(i%num==0)
        {
            cout << "\n\t\t";

        }
    }

    cout << "\n\n  Forma Reducida 1: \n\n a = [";
    int j=0, fila=0;
    for(int i = 1; i <= num * num2; i++)
    {
        valor=vector[i];
        if(valor !=0)
        {
            cout << j << " " << fila << " " << valor << " ";

        }
        fila++;
        if(i%num==0)
        {
            j++;
            fila=0;
        }

    }
    cout << " ]";


    cout << "\n\n  Forma Lineal:\n\n a = [";
     for(int i = 1; i <= num * num2; i++)
    {
        valor=vector[i];
        cout << " " << valor;

        if(i%num==0 and i!=(num * num2))
        {
            cout << " |";

        }
    }
    cout << " ]";


    cout << "\n\n  Forma Reducida 2:\n\n a = [";
     for(int i = 1; i <= num * num2; i++)
    {
        valor=vector[i];
        if(valor !=0)
            cout << " " << i-1  << " " << valor;
    }
    cout << " ]";

    cout << "\n\n\t  ___________________________________\n\n";

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
    cout << "\t\t Matriz Dispersa\n\n" << endl;
    int  n;
    cout << "Ingrese el numero de matrices a crear: ";
    cin >> n;


    // Se crea un vector de objetos
    Dispersa A[LARGO];

    int  num;
    for(int i = 0; i<n; i++)
    {
        system("cls");
        cout << "\n\nIngrese la dimension I de la matriz  " << i+1 << " :" ;
        cin >> num;
        A[i].SetDimensionI(num); // Se almacena  la dimension de la matriz cuadrada
        int num2;
        cout << "Ingrese la dimension J de la matriz " << i+1 << " : ";
        cin >> num2;
        A[i].SetDimensionJ(num2);
        A[i].crearMatriz(num, num2);  // Se crea una matriz
    }

    system("cls");
    for(int i = 0; i<n; i++)
    {

        A[i].mostrarMatriz();   // muestra el i-esimo objeto matriz
    }


    return 0;
}
