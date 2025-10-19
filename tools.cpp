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

// print sliced vector for any element datatype
template <typename T>
void print_vector_slice(const std::vector<T>& vec, int start, int end)
{
    if (start < 0 || end > vec.size() || start >= end)
    {
        std::cout << "Invalid slice indices." << std::endl;
        return;
    }
    for (int i = start; i <= end; ++i)
        std::cout << vec[i] << ", ";
    std::cout << std::endl;
}
