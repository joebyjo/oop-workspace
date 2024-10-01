#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        if (addition.add(-1, 5) != 4) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.add(9, 2) != 11) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};