#include <iostream>


double cuadrado(double x) {
    return x * x; 
}

double doble(double x) {
    return x * 2;
}

double inverso(double x) {
    if (x != 0)
        return 1 / x; 
    return 0; 
}


void aplicar(double* arr, int n, double (*func)(double)) {
    for (int i = 0; i < n; i++) {
        arr[i] = func(arr[i]); 
    }
}

int main() {
    int n;
    std::cout << "Tamano: ";
    std::cin >> n;

    double* arr = new double[n]; 

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int op;
    std::cout << "1 cuadrado, 2 doble, 3 inverso: ";
    std::cin >> op;

    
    if (op == 1)
        aplicar(arr, n, cuadrado);
    else if (op == 2)
        aplicar(arr, n, doble);
    else if (op == 3)
        aplicar(arr, n, inverso);

    
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete[] arr; 
    return 0;
}
