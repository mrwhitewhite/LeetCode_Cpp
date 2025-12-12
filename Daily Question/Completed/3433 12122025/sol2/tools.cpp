#include <vector>
#include <iostream>
#include <unordered_set>
#include <map>
#include <queue>
using namespace std;

// print vector for any element datatype
template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto &elem : vec)
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
void print_vector_slice(const std::vector<T> &vec, int start, int end)
{
    if (start < 0 || end > vec.size() || start >= end)
    {
        std::cout << "Invalid slice indices." << std::endl;
        return;
    }
    for (int i = start; i <= end; ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

// print unordered set for any element datatype
template <typename T>
void print_unordered_set(const std::unordered_set<T> &uset)
{
    for (const auto &elem : uset)
        std::cout << elem << " ";
    std::cout << std::endl;
}

// print matrix of vector<vector<T>>
template <typename T>
void print_matrix(const std::vector<std::vector<T>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
            std::cout << elem << " ";
        std::cout << std::endl;
    }
}

// print map
template <typename K, typename V>
void print_map(const std::map<K, V> &m)
{
    for (const auto &pair : m)
        std::cout << pair.first << ": " << pair.second << std::endl;
}

// print map<vector<int>, int>
void print_map_vector_int_int(const std::map<std::vector<int>, int> &m)
{
    for (const auto &pair : m)
    {
        std::cout << "[";
        for (size_t i = 0; i < pair.first.size(); ++i)
        {
            std::cout << pair.first[i];
            if (i < pair.first.size() - 1)
                std::cout << ", ";
        }
        std::cout << "]: " << pair.second << std::endl;
    }
}

template <typename T>
void print_queue(queue<T> q)
{
    if (q.empty())
    {
        cout << "(empty)\n";
        return;
    }

    while (!q.empty())
    {
        cout << q.front();
        q.pop();
        if (!q.empty())
        {
            cout << " ";
        }
    }
    cout << endl;
}

void print_vector_of_vector_of_string(const std::vector<std::vector<std::string>> &data)
{

    // Check if the outer vector is empty
    if (data.empty())
    {
        std::cout << "()\n"; // Print an empty tuple if there's no data
        return;
    }

    // Outer loop to iterate through each inner vector (which becomes a tuple)
    for (size_t i = 0; i < data.size(); ++i)
    {
        const auto &inner_vec = data[i];

        // 1. Print the opening parenthesis for the tuple
        std::cout << "(";

        // Inner loop to iterate through the strings in the current inner vector
        for (size_t j = 0; j < inner_vec.size(); ++j)
        {

            // 2. Print the string
            std::cout << inner_vec[j];

            // 3. Print the comma and space, UNLESS it's the last element of the inner vector
            if (j < inner_vec.size() - 1)
            {
                std::cout << ", ";
            }
        }

        // 4. Print the closing parenthesis
        std::cout << ")";

        // 5. Print the comma and space, UNLESS it's the last tuple in the sequence
        if (i < data.size() - 1)
        {
            std::cout << ", ";
        }
    }

    // Print a newline at the end for clean output
    std::cout << "\n";
}
