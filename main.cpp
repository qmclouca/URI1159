#include <iostream>
using namespace std;

int main() {
    int x = 0, sum=0;
    std::cin >> x;
    do {
        if (x%2 == 0) {
            for (int aux = x, count=1; count<=5; aux = aux+2, count++) {
                sum = sum+aux;
            }
        } else {
            for (int aux = x+1, count=1; count<=5; aux = aux+2, count++) {
                sum = sum+aux;
            }
        }
        std::cout << sum << std::endl;
        sum = 0;
        std::cin >> x;
    }while (x!=0);
    return 0;
}
