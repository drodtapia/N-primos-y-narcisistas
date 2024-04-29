#include <iostream>
#include <cmath>
using namespace std;

//Se definen las funciones que vamos a utilizar
bool nprimo(int p);
bool nnarcisista(int n );
int opciones();
void primos();
void narcisistas();
void primosynarcisistas();

int main()
{
    cout<<endl;
    cout<<"Busqueda de numeros primos y narcisistas \n"<<endl;
    opciones();
    return 0;

}

bool nprimo(int p)    //Usamos una funcion tipo bool para validar los numeros entregados
{   bool requisito1;
     if (p>0 && p !=1) // En este if descartamos los casos menor o igual a 1
        for (int i = 2; i <= p; ++i) // Los casos empiezan desde el dos hasta el valor de p
        {
            if(p % i == 0) // Se encuentra el primer numero divisible con p

                if (p == i) // Si el primer numero en dividirlo es si mismo es verdadero
                {
                   requisito1 = true;
                }
                else
                {
                    requisito1 = false; //si tiene otros divisores de si mismo es falso
                    return requisito1;
                }
        }
    else requisito1 = false; // Variables 1 y negativas son falsas
    return requisito1; // aqui se vuelve al comienzo
}


bool nnarcisista(int n ) //Nuevamente usamos una funcion tipo bool para validar los numeros entregados
{   int digito = 0,suma = 0,numero = 0,ncifras = 0; //Se definen las variables que se utilizaran
    bool requisito2;
    if (n !=0) // n tiene que ser distinto de 0
        {
            numero = n;   //Se crea una copia de mi numero n
            while(n > 0)  //Mientras n sea mayor a 0 dividimos por 10
            {
                n /=10;
                ncifras++; //Aqui se sabe cuantas veces se pudo dividir n
            }
            n = numero;   // n vuelve a tomar su valor original

            for (int j = 0; j < ncifras; j++) //Se ejecuta el for las veces de la cantidad de cifras
            {
                digito = n % 10;      //Se guarda el ultimo digito de n
                suma = suma + pow(digito, ncifras); //Se eleva el ultimo digito al numero de cifras
                n /=10; //Se divide por 10 para repetir el proceso hasta llegar a la unidad
            }

            if (suma == numero) // Si la suma anterior es igual al numero ingresado es verdad
            {
               requisito2 = true;
            }
            else
            {
                requisito2 = false; // Si la suma da cualquier valor distinto a n es falso
                return requisito2;

            }
        }
    else requisito2 = false; // Variables 0 son falsas
    return requisito2; // aqui se vuelve al comienzo
}
int opciones() //se despliega un menu de opciones mediante el uso de switch
{
    int m;
    cout<<"Que numeros desea buscar, digite el numero de su eleccion\n1.-Primos\n2.-Narcisistas\n3.-Primos y Narcisistas"<<endl; //Muestra en pantalla las opciones
    cout<<"Ingrese su eleccion: ";cin>>m;
    cout<<"\nNotas:\n-Si no hay numeros en su eleccion quiere decir que no se encontro ningun valor en el intervalo\n"  //Se muestran algunas consideraciones antes de empezar
                    "-Se aceptan numeros negativos, pero no hay ninguno que cumpla las categorias mencionadas\n"
                    "-Si el limite inferior es mayor al superior no se entregaran resultados\n"
                    "-Los caracteres especiales pueden ocasionar errores\n"
                    "-Solo se aceptan numeros enteros\n"<<endl;
    switch (m)
    {
    case 1:                 //Se muestra la funcion que se utilizara en cada caso
        primos();
        break;
    case 2:
        narcisistas();
        break;
    case 3:
        primosynarcisistas();

        break;
    default:
    {
    cout << "Eleccion invalida" << endl;      //Si el usuario teclea una opcion diferente se muestra un mensaje de error y se sale del programa
    }
    break;
    }
    cin.get();
    return 0;
}


void primos()   //Si se elige el caso 1 , se pediran los limites del intervalo
{
    int n,s;
    cout<<"Ingresar limite inferior del intervalo deseado : ";
    cin>>n;
    cout<<"Ingresar limite superior del intervalo deseado : ";
    cin>>s;
    cout<<"Su intervalo es :"<<"("<<n<<","<<s<<")"<<endl;
    cout<<"Los numeros primos encontrados en el intervalo son:\n{  ";
    for (int i = n; i <= s; ++i)    //Se ejecuta el for en el intervalo deseado
    {
        if (nprimo(i)) cout<<i<<"  "; // Se imprimen los numeros que cumplan los requisitos en la funcion nprimo
    }
    cout<<"}"<<endl;
    cout<<"\nPresione <ENTER> para terminar el programa.\n"<<endl;  
    cin.get();
}
void narcisistas() //Si se elige el caso 2 , se pediran los limites del intervalo
{
    int n,s;
    cout<<"Ingresar limite inferior del intervalo deseado : ";
    cin>>n;
    cout<<"Ingresar limite superior del intervalo deseado : ";
    cin>>s;
    cout<<"Su intervalo es :"<<"("<<n<<","<<s<<")"<<endl;
    cout<<"Los numeros narcisistas encontrados en el intervalo son:\n{  ";

    for (int k = n; k <= s; ++k) //Se ejecuta el for en el intervalo deseado
    {
        if (nnarcisista(k)) cout<<k<<"  "; // Se imprimen los numeros que cumplan los requisitos en la funcion nnarcisista
    }
    cout<<"}"<<endl;
    cout<<"\nPresione <ENTER> para terminar el programa.\n"<<endl;  
    cin.get();
}
void primosynarcisistas() // En este caso se imprimen los casos 1 y 2 juntos
{
    int n,s;
    cout<<"Ingresar limite inferior del intervalo deseado : ";
    cin>>n;
    cout<<"Ingresar limite superior del intervalo deseado : ";
    cin>>s;
    cout<<"Su intervalo es :"<<"("<<n<<","<<s<<")"<<endl;
    cout<<"Los numeros primos encontrados en el intervalo son:\n{  ";
    for (int i = n; i <= s; ++i)
    {
        if (nprimo(i)) cout<<i<<"  ";
    }
    cout<<"}\n"<<endl;

    cout<<"Los numeros narcisistas encontrados en el intervalo son:\n{  ";

    for (int k = n; k <= s; ++k)
    {
        if (nnarcisista(k)) cout<<k<<"  ";
    }
    cout<<"}"<<endl;
    cout<<"\nPresione <ENTER> para terminar el programa.\n"<<endl;  
    cin.get();
}

