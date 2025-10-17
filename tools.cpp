#include <vector>
#include <iostream>

// print vector for any element datatype
template <typename T>
void print_vector(const std::vector<T>& vec)
{
    for (const auto& elem : vec)
        std::cout << elem << " ";
    std::cout << std::endl;
}

// print boolean
void print_bool(bool value)
{
    std::cout << (value ? "true" : "false") << std::endl;
}
