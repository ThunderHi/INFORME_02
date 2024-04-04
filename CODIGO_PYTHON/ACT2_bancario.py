class CuentaBancaria:
    def __init__(self, numeroCuenta, saldoInicial):
        self.numeroCuenta = numeroCuenta
        self.saldo = saldoInicial

    def getSaldo(self):
        return self.saldo

    def setSaldo(self, saldo):
        self.saldo = saldo

    def getNumeroCuenta(self):
        return self.numeroCuenta

    def setNumeroCuenta(self, numeroCuenta):
        self.numeroCuenta = numeroCuenta

if __name__ == "__main__":
    #Crear una cuenta bancaria
    cuenta = CuentaBancaria(numeroCuenta="123456789", saldoInicial=1000.0)

    #Mostrar informacion de la cuenta
    print("Número de cuenta:", cuenta.getNumeroCuenta())
    print("Saldo inicial: S/.", cuenta.getSaldo())

    #Realizar algunas operaciones en la cuenta
    cuenta.setSaldo(cuenta.getSaldo() + 500)  # Depositar $500
    print("Saldo después del depósito: S/.", cuenta.getSaldo())
    cuenta.setSaldo(cuenta.getSaldo() - 200)  # Retirar $200
    print("Saldo después del retiro: S/.", cuenta.getSaldo())
