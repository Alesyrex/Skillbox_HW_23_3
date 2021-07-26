#include <iostream>

#define WINTER 1
#define SPRING 2
#define SUMMER 3
#define AUTUMN 4
#define SEASON AUTUMN

#if SEASON
int main() {
    if (SEASON == WINTER) std::cout << "WINTER" << std::endl;
    if (SEASON == SPRING) std::cout << "SPRING" << std::endl;
    if (SEASON == SUMMER) std::cout << "SUMMER" << std::endl;
    if (SEASON == AUTUMN) std::cout << "AUTUMN" << std::endl;

    return 0;
}
#endif
