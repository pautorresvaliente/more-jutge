#include <iostream>


void print_space(int size) {
    for (int j = 0; j < size; j++) {
        std::cout << " ";
    }
}

void write_triangle(int size) {
    for (int i = 1; i <= size; i++) {
        print_space((size - i) * 2);
        bool first = true;
        for (int k = 0; k < i; k++) {
            if (first && k < size) {
            } else {
                std::cout << " ";
            }
            first = false;
            std::cout << " /\\";
        }
        std::cout << std::endl;
        print_space((size - i) * 2);
        for (int l = 0; l < i; l++) {
            std::cout << "/__\\";
        }
        if (!i == size) std::cout << std::endl;
    }
    std::cout << std::endl;

}

int main() {
    int size;

    while (std::cin >> size) {
        write_triangle(size);
    }

    return 0;
}