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

    if (data.empty())
    {
        std::cout << "()\n";
        return;
    }
    for (size_t i = 0; i < data.size(); ++i)
    {
        const auto &inner_vec = data[i];
        std::cout << "(";
        for (size_t j = 0; j < inner_vec.size(); ++j)
        {
            std::cout << inner_vec[j];
            if (j < inner_vec.size() - 1)
                std::cout << ", ";
        }
        std::cout << ")";
        if (i < data.size() - 1)
            std::cout << ", ";
    }
    std::cout << "\n";
}

template <typename Node>
void printLinkedList(Node *head)
{
    Node *current = head;
    std::cout << "HEAD -> ";
    while (current != nullptr)
    {
        std::cout << current->val;
        if (current->next != nullptr)
            std::cout << " -> ";
        current = current->next;
    }
    std::cout << " -> NULL" << std::endl;
}

template <typename T1, typename T2>
void print_vector_of_pairs(const std::vector<std::pair<T1, T2>> &data)
{
    if (data.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (size_t i = 0; i < data.size(); ++i)
    {
        const auto &current_pair = data[i];

        std::cout << "(" << current_pair.first << ", " << current_pair.second << ")";

        if (i < data.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
}

template <typename T>
void print_vector_of_vectors(const std::vector<std::vector<T>> &data)
{
    if (data.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[\n";
    for (size_t i = 0; i < data.size(); ++i)
    {
        const auto &inner_vec = data[i];

        // Print the inner vector
        std::cout << "  [";
        for (size_t j = 0; j < inner_vec.size(); ++j)
        {
            std::cout << inner_vec[j];
            if (j < inner_vec.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]";

        // Formatting for the outer vector
        if (i < data.size() - 1)
        {
            std::cout << ",\n";
        }
        else
        {
            std::cout << "\n";
        }
    }
    std::cout << "]\n";
}

template <typename T>
void print3DVector(const std::vector<std::vector<std::vector<T>>> &vec, std::string name = "DP Table")
{
    std::cout << "Printing " << name << ":\n";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << "Layer [" << i << "]\n";
        for (size_t j = 0; j < vec[i].size(); ++j)
        {
            std::cout << "  Row " << j << ": ";
            for (size_t k = 0; k < vec[i][j].size(); ++k)
            {
                std::cout << vec[i][j][k] << "\t"; // Tab for alignment
            }
            std::cout << "\n";
        }
        std::cout << std::string(20, '-') << "\n";
    }
}

template <typename T>
void printn(T input)
{
    cout << input << endl;
}

template <typename T>
void print(T input)
{
    cout << input;
}