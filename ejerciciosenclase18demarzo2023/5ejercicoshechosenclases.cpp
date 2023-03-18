/*
//1er ejercicio
//con un numero ingresado por el usuario calcular su factorial y mostrarlo en pantalla
#include <iostream>

using namespace std;
int main() {

        int numeroaingresar,factorial=1;
        do
        {
            cout<<"Ingrese el numero que desea saber su factorial: ";
            cin>>numeroaingresar;
        } while ( numeroaingresar<1 );
        for (int factorialde = 1; factorialde <= numeroaingresar; factorialde++)
        {
            factorial=factorial*factorialde;
            cout<<factorialde<<"*";
        }
            cout<<" = "<<factorial<<"\n";
            cout<<"este es el factorial del numero que ingreso";

            system("pause");
        return 0;


}
*/

/*
//serie fibonacci hasta su suma 10
#include <iostream>

using namespace std;
int main() {

    int numerohastael10,fibona1,fibona2,i;
    do
    {
        cout << "la serie fibonacci hasta sumarlo 10 veces es: ";
        numerohastael10= 10;
    }while(numerohastael10<=1);
    cout << endl;
    cout << "Los " << numerohastael10 << " primeros numeros de la serie de Fibonacci son:" << endl;
    fibona1=1;
    fibona2=1;
    cout << fibona1 << " ";
    for(i=2;i<=numerohastael10;i++)
    {
        cout << fibona2 << " ";
        fibona2 = fibona1 + fibona2;
        fibona1 = fibona2 - fibona1;
    }
    cout << endl << endl;
    system("pause");
return 0;
}
*/

/*
//3er ejercicio por el numero ingresado por el usuario mostrar si es un numero primo o no
#include<iostream>
using namespace std;

int main(){
    int numeroaingresar = 0, division =1, residuo = 0;
    cout<<"Ingresa el numero que deseas saber si es primo o no: ";
    cin>>numeroaingresar;

    do{
        if(numeroaingresar % division ==0){
            residuo++;
        }
        division++;
    }while(division <= numeroaingresar);
    if(residuo == 2){
        cout<<"--> El numero "<<numeroaingresar<< " Es numero primo. <--";
    } else{
        cout<<"--> El numero "<<numeroaingresar<<" No es un numero primo. <--";
    }
    return 0;
}
*/

/*
//4to ejercicio al ingresar un numero el usuario mostrar si es par o no

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int numeroaingresar;
    div_t resultado;

    cout << "Ingrese un numero para verificar si es par: " << endl;

    cin >> numeroaingresar;

    resultado=div(numeroaingresar,2);

    if (resultado.rem>0)

    {

        cout << numeroaingresar << " es un numero impar" << endl;

    }

    else {

        cout << numeroaingresar << " es un numero par" << endl;

    }



    cin.get();

    cin.ignore();

    return 0;
}
*/


//5to. ejercicio
//muestre la tabla de multiplicar del numero que desea saber
#include <iostream>
using namespace std;

int main() {
    int numeroaingresar, multiplicacion, primernumero=1; //declaro mis variables a utilizar
    cout<<"ingrese el numero de la tabla de multiplicar que desea realizar:  \n";
    cin>>numeroaingresar; //aca pido que ingresen el numero de la tabla que quieran saber

    cout<<"la tabla del "<<numeroaingresar<< " es: "<<endl; //y aca nuestro el mensaje con el numero de la tabla que quiero saber
    do{
        multiplicacion =numeroaingresar * primernumero; //aca hago que el resultado de mi variable multiplicacion sea la variable numero a ingresar por la variable primer numero
        cout<< numeroaingresar <<" x "<< primernumero<<" = "<< multiplicacion <<endl; //aca nuestro en pantalla para que se vea estetico
        primernumero++;
    }
    while(primernumero<=10); //aca el ciclo le indico que quiero que me haga la tabla hasta el numero 10
}
