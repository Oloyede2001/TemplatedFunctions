#include <iostream>

// Function template to return half of the value
template <typename T>
T half(T value) {
    return value / 2;
}

// Specialization for integer types to handle rounding
template <>
int half<int>(int value) {
    return (value % 2 == 0) ? (value / 2) : (value / 2 + 1);
}

int main() {
    // Test the half function with different data types
    std::cout << "Half of 5.0 (float): " << half(5.0f) << std::endl;
    std::cout << "Half of 5.0 (double): " << half(5.0) << std::endl;
    std::cout << "Half of 5 (int): " << half(5) << std::endl;
    std::cout << "Half of 6 (int): " << half(6) << std::endl;

    return 0;
}

