#include "../pitagoricos/pitagoricos.h"
#include <iostream>
#include <cmath>

void encontrarTriplesPitagoricos() {
    for (int a = 1; a <= 20; ++a) {
        for (int b = a; b <= 20; ++b) {
            double c = sqrt(a * a + b * b);

            if (c == (int)c && a + b > c) {
                std::cout << a << ", " << b << ", " << (int)c << std::endl;
            }
        }
    }
}

