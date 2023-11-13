#include "CuentaBancaria.hpp"
// ===============
// implementación de la clase
CuentaBancaria::CuentaBancaria(){
   nombre = "Dummy";
   numCuenta = "12345";
   saldo = 0;
}

CuentaBancaria::CuentaBancaria(std::string _nombre, std::string _numCuenta, double _saldo){
    nombre = _nombre;
    numCuenta = _numCuenta;
    saldo = _saldo;
}

std::string CuentaBancaria::getNombre(){
    return nombre;
}

std::string CuentaBancaria::getNumCuenta(){
    return numCuenta;
}

double CuentaBancaria::getSaldo(){
    return saldo;
}

void CuentaBancaria::setNombre(std::string _nombre){
    nombre = _nombre;
}

void CuentaBancaria::setNumCuenta(std::string _numCuenta){
    numCuenta = _numCuenta;
}

void CuentaBancaria::setSaldo(double _saldo){
    saldo = _saldo;
}

//Adicionales
void CuentaBancaria::imprime(){
    std::cout << "Cuenta: " << numCuenta << std::endl;
    std::cout << nombre << std::endl;
    std::cout << "Saldo: $" << saldo << std::endl; 
}

int CuentaBancaria::retira(double retiro){
    if (saldo > retiro){
        saldo -= retiro;
        return 1;
    }
    return 0;
}

void CuentaBancaria::deposita(double deposito){
    saldo += deposito;
}

int CuentaBancaria::transfiere(CuentaBancaria& cuenta, double transferencia){
    int sePudo = retira(transferencia);
    if (sePudo == 1){
        cuenta.deposita(transferencia);
    }
    return sePudo;
}
