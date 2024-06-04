#include "VektorFunc.h"

vector<int> generateRandomVector()
{
    unsigned int limit = 0;
    unsigned int sum_counter = 0;
    vector<int> rVector;

    cout << "Bitte geben Sie eine Zahl als Limit ein: " << endl;
    cin >> limit;

    do{
        int x = rand() % 100 + 1; // 1-100
        rVector.push_back(x);
        sum_counter += x;
    }while( sum_counter < limit);

    return rVector;
}

void print(const vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_iter_1(std::vector<int> v)
{
    vector<int>::iterator it = v.begin();
    while (it != v.end()){
        cout << *it << " ";
        it++; 
    }
    cout << endl;
}

void print_iter_2(const std::vector<int> &v)
{
    vector<int>::const_iterator it = v.begin();
    while (it != v.end()){
        cout << *it << " ";
        it++; 
    }
    cout << endl;
}

void print_copy(const std::vector<int> &v) {
    copy(v.begin(), v.end(), std::ostream_iterator<int>(cout, " "));
    cout << endl;
}