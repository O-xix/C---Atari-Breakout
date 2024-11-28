#if __has_include(<SFML/Graphics.hpp>)
#include <SFML/Graphics.hpp>
#define SFML_INSTALLED 1
#else
#define SFML_INSTALLED 0
#endif

#if SFML_INSTALLED
#include <iostream>
int main() {
    std::cout << "SFML is installed!" << std::endl;
    return 0;
}
#else
#include <iostream>
int main() {
    std::cout << "SFML is not installed!" << std::endl;
    return 0;
}
#endif