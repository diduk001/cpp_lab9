#include <iostream>
#include "AbstractFilter.h"
#include "Filters.h"


template<typename T>
size_t countFilteredElements(T *array, size_t arraySize, const AbstractFilter<T> &filter) {
    size_t result = 0;
    for (size_t i = 0; i < arraySize; i++)
        if (filter(array[i])) result++;

    return result;
}

int main() {
    int intArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool boolArray[5] = {true, false, true, true, true};
    std::string stringArray[5] = {"", "123", "456", "789", ""};
    double doubleArray[10] = {-10.1, 0.0, 1.8, 3.14, 15.92, -41.0, -0.001, 0.001, 9, -2.7};

    std::cout << "Amount of even elements in intArray: "
              << countFilteredElements(intArray, 10, EvenIntFilter())
              << std::endl;

    std::cout << "Amount of true in boolArray: "
              << countFilteredElements(boolArray, 5, TrueFilter())
              << std::endl;

    std::cout << "Amount of non empty elements in stringArray: "
              << countFilteredElements(stringArray, 5, NonEmptyStringFilter())
              << std::endl;

    std::cout << "Amount of positive elements in doubleArray: "
              << countFilteredElements(doubleArray, 10, PositiveDoubleFilter())
              << std::endl;
    return 0;
}
