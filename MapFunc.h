#include <map>
#include <iterator>
#include <iostream>

using namespace std;

template<class T>
void printmapT(const T &m)
{
    typename T::const_iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        // iterator->first = nachmane
        // iterator->second = nummer
        cout << "Name: " << it->first << " - Nummer: " << it->second << endl;
    }
    cout << endl; 
};

template <class T>
void searchPhoneNumberT(T myTelefonBook, string person) {
    typename T::iterator von = myTelefonBook.lower_bound(person); 
    typename T::iterator bis = myTelefonBook.upper_bound(person);

    if (von != myTelefonBook.end()) { 
            if( person == von->first ) {
                for (multimap<string, string>::iterator iter = von; iter != bis; ++iter) {
                cout << "Nummer von " << person << ": " << iter->second << " (via search())" << endl;
                } 
            }else {
            cout << "Nummer von " << person << " nicht enthalten! " << endl;
            } 
    }else {
        cout << "Nummer von " << person << " nicht enthalten! " << endl;
    }
    cout << "Anzahl Telefonnummern von Person " << person << ": " << myTelefonBook.count(person) << endl << endl; 
};