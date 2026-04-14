#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int** matriz = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < m; j++) {
            suma = suma + matriz[i][j];
        }
        std::cout << suma << std::endl;
    }

    int mayor = matriz[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
    }

    std::cout << mayor << std::endl;

    int** t = new int*[m];
    for (int i = 0; i < m; i++) {
        t[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            t[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << t[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
