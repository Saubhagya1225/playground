#include <iostream>
#include <cmath>

int count_squares(long x) {
    int count = 0, i, j;

    for (i = 0; i <= sqrt(x); i++) {
        for (j = 0; j <= i; j++) {
            if (i * i + j * j == x) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    long x;
    int n, i;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> x;
        std::cout << "Case #" << i << ": ";
        std::cout << count_squares(x) << std::endl;
    }

    return 0;
}
