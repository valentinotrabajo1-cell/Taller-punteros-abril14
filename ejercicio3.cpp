#include <iostream>

double transformar(double x) {
    return x * 2;
}

double combinar(double a, double b) {
    return a + b;
}

int main() {
    int n;
    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    double* arr = new double[n];

    std::cout << "Ingrese los numeros:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    double resultado = 0;

    for (int i = 0; i < n; i++) {
        double valor = transformar(arr[i]);
        resultado = combinar(resultado, valor);
    }

    std::cout << "Resultado: " << resultado << std::endl;

    delete[] arr;
    return 0;
}
