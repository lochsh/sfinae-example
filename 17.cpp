#include <type_traits>

template< typename >
inline constexpr bool dependent_false_v{ false };

template<typename T>
T absolute(T val) {
    if constexpr(std::is_signed<T>::value) {
        return (val <= -1) ? -val : val;
    } else if constexpr(std::is_unsigned<T>::value) {
        return val;
    } else {
        static_assert(dependent_false_v<T>, "Unsupported type");
    }
}

int main() {
    return absolute(5lu);
}
