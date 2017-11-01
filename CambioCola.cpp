#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

//--------------------------------------------------------Funciones Recursivas

int sumasSucesivas(int x, int y)
{
  if(y > 1)
    return x + sumasSucesivas(x, y-1);
  else
    return x;
}

int restasSucesivas(int n, int d)
{
  if(n >= d)
    return 1 +  restasSucesivas(n - d, d);
  else
    return 0;
}

int sumaDigitos(int n)
{
  if(n > 0)
    return (n%10) + sumaDigitos(n/10);
  else
    return 0;
}

long double productosSucesivos(int b, int e)
{
  if(e > 1)
    return b * productosSucesivos(b, e-1);
  else
    return b;
}

int fibonnacci(int n)
{
  if(n == 0)
    return 0;
  if(n == 1)
    return 1;
  else
    return fibonnacci(n - 1) + fibonnacci(n - 2);
}

//--------------------------------------------------------Funciones Recursivas de Cola

// Multiplicación Cola
int sumasSucesivasCola(int x, int y, int suma=0)
{
  if(y > 0)
    return sumasSucesivasCola( x , y-1, suma + x);
  else
    return suma;
}

// División Cola
int restasSucesivasCola(int n, int d, int total = 0)
{
  if(n >= d)
    return restasSucesivasCola(n - d, d, 1 + total);
  else
    return total;
}

//Suma Digitos Cola
int sumaDigitosCola(int n, int suma  = 0)
{
  if(n > 0)
    return sumaDigitosCola(n/10, suma + n%10);
  else
    return suma;
}

// Producto Cola
long double productoSucesivoCola(int base, int expo, long double resultado = 1)
{
  if(expo > 0)
    return productoSucesivoCola(base, expo-1, resultado *= base );
  else
    return resultado;
}


// Fibonaci Cola
int fibonacciCola(int n, int fib = 0, int anterior = 1)
{
  if(n == 0)
    return fib;
  if(n == 1)
    return anterior;
  else
    return fibonacciCola(n-1, anterior, fib + anterior);
}

//--------------------------------------------------------Funciones Contador Cola

int sumasSucesivasColaContador(int x, int y, int registros=1)
{
  if(y > 0)
    return sumasSucesivasColaContador( x , y-1, registros + 1);
  else
    return registros;
}


int restasSucesivasColaContador(int n, int d, int total = 1)
{
  if(n >= d)
    return restasSucesivasColaContador(n - d, d, 1 + total);
  else
    return total;
}

int sumaDigitosColaContador(int n, int suma  = 1)
{
  if(n > 0)
    return sumaDigitosColaContador(n/10, suma + 1);
  else
    return suma;
}

//
int ProductoSucesivoColaContador(int base, int expo, int resultado = 1 )
{
  if(expo > 0)
    return ProductoSucesivoColaContador(base, expo-1, resultado +1);

  else
    return resultado;
}

int fibonacciColaContador(int n, int fib = 0, int anterior = 1,int contador = 1)
{
  if(n == 0)
    return contador;
  if(n == 1)
    return contador;
  else
    return fibonacciColaContador(n-1, anterior, fib + anterior, contador+1);
}

//--------------------------------------------------------Funciones Contador

int sumasSucesivasContador(int x, int y, int cont = 1)
{
  if(y > 1)
    return cont + sumasSucesivasContador(x, y-1, cont++);
  else
    return cont;
}

int restasSucesivasContador(int n, int d, int cont = 1)
{
  if(n >= d)
    return cont +  restasSucesivasContador(n - d, d, cont++);
  else
    return cont;
}

int sumaDigitosContador(int n, int cont = 1)
{
  if(n > 0){
    return cont + sumaDigitosContador(n/10, cont++);
  }
  else
    return cont;
}

long double productosSucesivosContador(int b, int e, int cont = 1)
{
  if(e > 1)
    return cont + productosSucesivosContador(b, e-1, cont++);
  else
    return cont;
}

int fibonacciContador(int n, int cont = 1)
{
  if(n == 0)
    return cont;
  if(n == 1)
    return cont;
  else
    return fibonacciContador(n - 1, cont+1) + fibonacciContador(n - 2, cont+1);
}

//--------------------------------------------------------Main

void pausa();

int main()
{
    cout << "Tarea de Lenguajes de Programacion Nº2"<< endl;
    cout << "--------------------------------------"<< endl;
    cout << "\nIntegrantes:"<< endl;
    cout << "------------"<< endl;
    cout << "\t\tNicolas Roa"<< endl;
    cout << "\t\tFelipe Ruiz"<< endl;
    cout << "\nDescripcion:"<< endl;
    cout << "------------"<< endl;
    cout << "La siguiente aplicacion comparara distintas funciones relizadas con recursividad\ny recursividad de cola, facilitando el analisis de la eficiencia de estas\nejecuciones y asi aprender a decidir cual utilizar frente a 'x' problema."<< endl;
    cout << "  "<< endl;
    cout << "\n\tEspere unos segundos..." << endl;
    sleep(15);

    bool bandera = false;
    int tecla;

    do
    {
        system("cls");
        cout << "\t\tTrabajo computacional Nº2" << endl;
        cout << "\t\t-------------------------" << endl << endl;
        cout << "\t1 .- Funciones Recursivas " << endl;
        cout << "\t2 .- Funciones Recursivas de Cola" << endl;
        cout << "\t3 .- Registros y Memoria de Recursividad" << endl;
        cout << "\t4 .- Registros y Memoria de Recursividad de Cola" << endl;
        cout << "\t5 .- Salir" << endl << endl;
        cout << "Elije una opcion: ";

        cin >> tecla;

        switch(tecla)
        {
            case 1:
                system("cls");
                cout << "\t\t1. Funciones Recursivas\n";
                cout << "\t\t-----------------------\n";
                int num1, num2;

                cout << "Ingrese el primer numero de sumas sucesivas :" ;
                cin >> num1;
                cout << "Ingrese el segundo numero numero de sumas sucesivas :" ;
                cin >> num2;
                cout << "Producto entre " << num1  << " y  " << num2 <<" es: "<<sumasSucesivas(num1,num2) << endl;

                num1 = 0;
                num2 = 0;
                cout << "\nIngrese el divisor: ";
                cin >> num1;
                cout << "\nIngrese el dividendo: ";
                cin >> num2;
                cout << "Division entre" << num1  << "y  " << num2 << " es: " << restasSucesivas(num1,num2) << endl;

                cout << "Suma de digitos de 81726354 : " << sumaDigitos(81726354) << endl;
                cout << "Exponenciación de 19 en 43 : " << productosSucesivos(19,43) << endl;
                cout << "Fibonnacci 40 : " << fibonnacci(40) << endl;
                pausa();
                break;

            case 2:
                system("cls");
                cout << "\t\t2. Funcines Recursivas de Cola\n";
                cout << "\t\t------------------------------\n";
                int num3, num4;

                cout << "Ingrese el primer numero de sumas sucesivas :" ;
                cin >> num3;
                cout << "Ingrese el segundo numero numero de sumas sucesivas :" ;
                cin >> num4;
                cout << "Producto Cola entre " << num3  << " y  " << num4 <<" es: "<< sumasSucesivasCola(num3,num4) << endl;
                cout << "\nRegistros y Memoria: " << endl;
                cout << "\n\tCantidad de registros: " << sumasSucesivasColaContador(num3,num4) << endl;
                cout << "\tTamano del registro en bytes: " << sumasSucesivasColaContador(num3,num4)*(3*sizeof(int)) << endl;
                cout << "\n";


                num3 = 0;
                num4 = 0;
                cout << "\nIngrese el divisor: ";
                cin >> num3;
                cout << "\nIngrese el dividendo: ";
                cin >> num4;
                cout << "Division Cola entre " << num3  << " y  " << num4 <<" es: "<< restasSucesivasCola(num3,num4) << endl;
                cout << "Registros y Memoria: " << endl;
                cout << "\n\tContador de registros: " << restasSucesivasColaContador(num3,num4) << endl;
                cout << "\tTamano del registro en bytes: " << restasSucesivasColaContador(num3,num4)*(3*sizeof(int)) << endl;
                cout << "\n";


                num3 = 0;
                cout << "\nIngrese el numero digitos a sumar: ";
                cin >> num3;
                cout << "Suma de Digitos Cola de" << num3 << " : " << sumaDigitosCola(num3) << endl;
                cout << "\nRegistros y Memoria: " << endl;
                cout << "\n\tCantidad de registros: " << sumaDigitosColaContador(num3) << endl;
                cout << "\tTamano del registro en bytes  : " << sumaDigitosColaContador(num3)*(3*sizeof(int)) << endl;
                cout << "\n";


                num3 = 0;
                num4 = 0;
                cout << "\nIngrese la base: ";
                cin >> num3;
                cout << "\nIngrese exponente: ";
                cin >> num4;
                cout << "Exponenciacion Cola entre " << num3  << " y  " << num4 <<" es: "<<productoSucesivoCola(num3,num4) << endl;
                cout << "\nRegistos y Memoria : "  << endl;
                cout << "\tContador de registros: " << ProductoSucesivoColaContador(num3,num4) << endl;
                cout << "\tTamano del registro en bytes: " << ProductoSucesivoColaContador(num3,num4)*(2*sizeof(int)+sizeof(long double)) <<  endl;
                cout << "\n";

                num3=0;

                cout << "Ingrese el n de Fibonacci: ";
                cin  >> num3;
                cout << "Fibonnacci Cola de " << num3 << ", es : " << fibonacciCola(num3) << endl;
                cout << "\nRegistros y Memoria: " << endl;
                cout << "\n\tContador de registros: " << fibonacciColaContador(num3) << endl;
                cout << "\tTamano del registro en bytes: " << fibonacciColaContador(num3)*(3*sizeof(int)) << endl;
                cout << "\n";


                pausa();
                break;

            case 3:
                system("cls");
                cout << "\t\t3. Registros y Memoria de Recursividad\n";
                cout << "\t\t--------------------------------------\n";
                cout << "\nSumas sucesivas: " << endl;
                cout << "\n\tCantidad de registros: " << sumasSucesivasContador(9,23) << endl;
                cout << "\tTamano del registro en bytes: " << sumasSucesivasContador(9,23)*(3*sizeof(int)) << endl;
                cout << "\n";


                cout << "Resta sucesivas: " << endl;
                cout << "\n\tContador de registros: " << restasSucesivasContador(93,4) << endl;
                cout << "\tTamano del registro en bytes: " << restasSucesivasContador(93,4)*(3*sizeof(int)) << endl;
                cout << "\n";


                cout << "\nSuma de digitos: " << endl;
                cout << "\n\tCantidad de registros: " << sumaDigitosContador(81726354) << endl;
                cout << "\tTamano del registro en bytes  : " << sumaDigitosContador(81726354)*(sizeof(int)) << endl;
                cout << "\n";


                cout << "\nProducto de digitos: "  << endl;
                cout << "\tContador de registros: " << productosSucesivosContador(19,43) << endl;
                cout << "\tTamano del registro en bytes: " << productosSucesivosContador(19,43)*(2*sizeof(int)+sizeof(long double)) <<  endl;
                cout << "\n";


                cout << "\nFibonacci: " << endl;
                cout << "\n\tContador de registros: " << fibonacciContador(40) << endl;
                cout << "\tTamano del registro en bytes: " << fibonacciContador(40)*(3*sizeof(int)) << endl;
                cout << "\n";
                pausa();
                break;

            case 4:
                system("cls");
                cout << "\t\t4. Registros y Memoria de Recursividad de Cola\n";
                cout << "\t\t----------------------------------------------\n";
                cout << "\nSumas sucesivas Cola: " << endl;
                cout << "\n\tCantidad de registros: " << sumasSucesivasColaContador(9,23) << endl;
                cout << "\tTamano del registro en bytes: " << sumasSucesivasColaContador(9,23)*(3*sizeof(int)) << endl;
                cout << "\n";


                cout << "Resta sucesivas Cola: " << endl;
                cout << "\n\tContador de registros: " << restasSucesivasColaContador(93,4) << endl;
                cout << "\tTamano del registro en bytes: " << restasSucesivasColaContador(93,4)*(3*sizeof(int)) << endl;
                cout << "\n";


                cout << "\nSuma de digitos Cola: " << endl;
                cout << "\n\tCantidad de registros: " << sumaDigitosColaContador(81726354) << endl;
                cout << "\tTamano del registro en bytes  : " << sumaDigitosColaContador(81726354)*(sizeof(int)) << endl;
                cout << "\n";


                cout << "\nProducto de digitos Cola: "  << endl;
                cout << "\tContador de registros: " << ProductoSucesivoColaContador(19,43) << endl;
                cout << "\tTamano del registro en bytes: " << ProductoSucesivoColaContador(19,43)*(2*sizeof(int)+sizeof(long double)) <<  endl;
                cout << "\n";


                cout << "\nFibonacci Cola: " << endl;
                cout << "\n\tContador de registros: " << fibonacciColaContador(40) << endl;
                cout << "\tTamano del registro en bytes: " << fibonacciColaContador(40)*(3*sizeof(int)) << endl;
                cout << "\n";
                pausa();
                break;

            case 5:
                bandera=true;
                //exit(1);
                cout << "\n";
                break;
            default:
                system("cls");
                cout << "Opcion no valida.\a\n";
                cout << "\n";
                pausa();
                break;
        }
    }while(bandera!=true);

    return 0;
}

void pausa()
{
    cout << "\n";
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
