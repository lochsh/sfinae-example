#include <type_traits>

template<typename T>
concept bool Arithmetic() {
    return std::is_arithmetic<T>::value;
}

Arithmetic absolute(Arithmetic val) {
    if constexpr(std::is_signed<decltype(val)>::value) {
        return (val <= -1) ? -val : val;
    } else {
        return val;
    }
}

int main() {
    return absolute(5lu);
}
