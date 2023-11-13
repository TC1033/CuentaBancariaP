#pragma once // prevents multiple definitions
#include <iostream>

class CuentaBancaria{
    public:
        CuentaBancaria();
        CuentaBancaria(std::string, std::string, double);
        std::string getNombre();
        std::string getNumCuenta();
        double getSaldo();
        void setNombre(std::string);
        void setNumCuenta(std::string);
        void setSaldo(double);
        //Adicionales
        void imprime();
        int retira(double);
        void deposita(double);
        int transfiere(CuentaBancaria&, double);
    private:
        std::string nombre;
        std::string numCuenta;
        double saldo;
};