#include <iostream>
#include "bancaria.h"

using namespace std;

//Constructor de la clase CuentaBancaria
CuentaBancaria::CuentaBancaria() : saldo(0), numeroCuenta(0) {}

//Metodo para obtener el saldo de la cuenta
int CuentaBancaria::getSaldo() {
    return saldo;
}

//Metodo para establecer el saldo de la cuenta
void CuentaBancaria::setSaldo(int nuevoSaldo) {
    saldo = nuevoSaldo;
}

//Metodo para obtener el número de cuenta
int CuentaBancaria::getNumeroCuenta() {
    return numeroCuenta;
}

//Metodo para establecer el número de cuenta
void CuentaBancaria::setNumeroCuenta(int nuevoNumero) {
    numeroCuenta = nuevoNumero;
}
