#include <cstdint>

template <typename T>
T absolute(T aValue);

template <>
double absolute(double aValue) {
    return ( aValue <= -1 ) ? -aValue : aValue;
}

template <>
std::int32_t absolute(std::int32_t aValue) {
    return ( aValue <= -1 ) ? -aValue : aValue;
}

template <>
std::uint32_t absolute(std::uint32_t aValue) {
    return aValue;
}

int main() {
    return absolute(5lu);
}
