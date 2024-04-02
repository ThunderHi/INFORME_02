#ifndef BANCARIA_H
#define BANCARIA_H

//Definimos la clase CuentaBancaria
class CuentaBancaria {
private:
    int saldo;
    int numeroCuenta;

public:
    //Constructor
    CuentaBancaria();   

    //Metodo para obtener el saldo
    int getSaldo(); 

    //Metodo para establecer el saldo
    void setSaldo(int nuevoSaldo);  

    //Metodo para obtener el numero de cuenta
    int getNumeroCuenta();  
    
    //Metodo para establecer el numero de cuenta
    void setNumeroCuenta(int nuevoNumero);  
};

#endif
