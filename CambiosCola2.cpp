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
