#include <iostream>
#include <cmath>

int main() {
    double c = 13.795;

    std::cout << "Lab 1 Part 1 v27" << std::endl;
    std::cout << "Enter C:";

    std::cin >> c;


    double r = c / (2 * M_PI);
    double s = M_PI * r * r;

    std::cout << "S=" << s << std::endl;


    std::cout << "Lab 1 Part 2 v27" << std::endl;

    double m1;
    double m2;
    double v1;
    double v2;

    std::cout << "Enter m1: ";
    std::cin >> m1;
    std::cout << "Enter v1: ";
    std::cin >> v1;
    std::cout << "Enter m2: ";
    std::cin >> m2;
    std::cout << "Enter v2: ";
    std::cin >> v2;

    if (v1 == 0 || v2 == 0) {
        std::cout << "v1 = 0 or v2 = 0" << std::endl;
    } else if (m1 < 0 || m2 < 0 || v1 < 0 || v2 < 0) {
        std::cout << "m1 < 0 || m2 < 0 || v1 < 0 || v2 < 0" << std::endl;
    } else {

        double p1 = m1 / v1;
        double p2 = m2 / v2;

        // p1 > p2
        // p1 < p2
        // p1 = p2

        if (p1 > p2) {
            std::cout << "p1 > p2" << std::endl;
        } else if (p1 < p2) {
            std::cout << "p1 < p2" << std::endl;
        } else {
            std::cout << "p1 = p2" << std::endl;
        }

//        Сравнение double
//        10/3 = 3.33333333333333333 * 3 = 9.999999999999999999999
//        10 != 9.999999999999999999
//
//        if (std::fabs(p1-p2) <= std::numeric_limits<double>::epsilon()) {
//            std::cout << "p1 = p2" << std::endl;
//        }

    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
