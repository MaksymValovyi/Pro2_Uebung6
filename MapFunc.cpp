#include "MapFunc.h"

template<class T>
void printmapT(const T &m)
{
    T::const_iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        // iterator->first = nachmane
        // iterator->second = nummer
        cout << "Name: " << it->first << " - Nummer: " << it->second << endl;
    } 
};