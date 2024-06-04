#include <vector>
#include <iostream>

using namespace std;

vector<int> generateRandomVector();

void print(const vector<int> &v);

void print_iter(std::vector<int> v);
void print_iter(const std::vector<int> &v);

void print_copy(const std::vector<int> &v);
