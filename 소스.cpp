#include <iostream>

int main() {
    for (int i = 1; i <= 8; i++) {
        for (int j = 2; j <= 8; j++)
            std::cout << j << " x " << i << " = " << j * i << "\t";
       std::cout << "\n";
    }

    return 0;
}