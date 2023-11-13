#include "CuentaBancaria.hpp"
#include <iostream>
using namespace std;

int main()
{
    CuentaBancaria cb1;
    CuentaBancaria cb2("Carolina Castro Herrera", "98765443211", 500.5);
    cb1.imprime();
    cb2.imprime();
    cout << cb2.getSaldo() << endl;
    cb2.setNombre("Fabiola Uribe");
    cb2.imprime();
    if(cb2.transfiere(cb1,30)){
        cout << "Nuevo saldo de cb1: " << cb1.getSaldo() << endl;
    }else{
        cout << "No se pudo realizar" << endl;
    }

}