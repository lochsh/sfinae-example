* 0.cpp: verbose, and we would need to add yet another overload for it to 
    compile
* 1.cpp: a step in the right direction, but it does not compile because we
    have given a template two different default arguments in the same scope.
* 2.cpp: compiles by exploiting SFINAE
* 17.cpp: using `if constexpr` in C++17
* 20.cpp: using concepts in C++20: https://godbolt.org/z/Y_S9BZ
