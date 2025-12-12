#include "solution.cpp"

int main()
{
    Solution test_sol;

    int n1 = 2;
    vector<vector<string>> vec1 = {{"MESSAGE", "10", "id1 id0"}, {"OFFLINE", "11", "0"}, {"MESSAGE", "71", "HERE"}};
    int n2 = 2;
    vector<vector<string>> vec2 = {{"MESSAGE", "10", "id1 id0"}, {"OFFLINE", "11", "0"}, {"MESSAGE", "12", "ALL"}};
    int n3 = 2;
    vector<vector<string>> vec3 = {{"OFFLINE", "10", "0"}, {"MESSAGE", "12", "HERE"}};

    print_vector(test_sol.countMentions(n1, vec1));
    print_vector(test_sol.countMentions(n2, vec2));
    print_vector(test_sol.countMentions(n3, vec3));
    return 0;
}