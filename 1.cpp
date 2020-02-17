#include <type_traits>

template<typename T>
using IsSigned = typename std::enable_if<std::is_signed<T>::value>::type;

template<typename T>
using IsUnsigned = typename std::enable_if<std::is_unsigned<T>::value>::type;

template<typename T, typename = IsSigned<T>>
T absolute(T aValue) {
    return ( aValue < 0 ) ? -aValue : aValue;
}

template<typename T, typename = IsUnsigned<T>>
T absolute(T aValue) {
    return aValue;
}

int main() {
    return absolute(5lu);
}
