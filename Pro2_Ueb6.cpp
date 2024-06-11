#include "VektorFunc.cpp"
#include "MapFunc.h"

#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <iterator>

using namespace std;

void call_Aufg6_1(){
    // Zufallszahlengenerator initialisieren 
    srand((unsigned)time(NULL));

    vector<int> randVector;
    randVector = generateRandomVector();

    // Print Funktionen

    cout << "print for-schleife" << endl;
    print(randVector);
    cout << "print iterator" << endl;
    print_iter_1(randVector);
    cout << "print const iterator" << endl;
    print_iter_2(randVector);
    cout << "print copy" << endl;
    print_copy(randVector);


    //sortieren
    cout << "Sortieren: aufsteigend" << endl;

    sort(randVector.begin(), randVector.end());
    print(randVector);
    cout << "Sortieren: absteigend" << endl;
    
    sort(randVector.begin(), randVector.end(),greater<int>());
    print(randVector);
    cout << "Sortieren: absteigend" << endl;
}   

void call_Auf2_2(){
        map<string, string> telefonbuch;
        telefonbuch.insert(pair<string, string>("Muster", "03841 / 155500"));
        telefonbuch.insert(pair<string, string>("Krumm", "0441 / 12345"));
        telefonbuch.insert(pair<string, string>("Schulz", "0385 / 744123"));
        telefonbuch.insert(pair<string, string>("Meyer", "0448 / 56687"));
        telefonbuch.insert(pair<string, string>("Meier", "03841 / 154100"));

        printmapT(telefonbuch);

        string person = "";
        cout << "Bitte geben Sie den Namen ein: " << endl;
        cin >> person;
        
        searchPhoneNumberT(telefonbuch, person);

        person.clear();

        multimap<string, string> telefonbuch1;
        telefonbuch1.insert(pair<string, string>("Muster", "03841 / 155500"));
        telefonbuch1.insert(pair<string, string>("Krumm", "0441 / 12345"));
        telefonbuch1.insert(pair<string, string>("Schulz", "0385 / 744123"));
        telefonbuch1.insert(pair<string, string>("Schulz", "0171/ 123456"));
        telefonbuch1.insert(pair<string, string>("Schulz", "0391 / 32356"));
        telefonbuch1.insert(pair<string, string>("Meyer", "0448 / 56687"));
        telefonbuch1.insert(pair<string, string>("Meier", "03841 / 154100"));

        printmapT(telefonbuch1);

        cout << "Bitte geben Sie den Namen ein: " << endl;
        cin >> person;

        searchPhoneNumberT(telefonbuch1, person);

        person.clear();
}

int main(int argc, char const *argv[])
{
    char res = ' ';
    
    while (res != 'e'){
        cout << "Ihr Wahl: " << endl;
        cout << "1. Aufgabe 1" << endl;
        cout << "2. Aufgabe 2" << endl;
        cout << "e. Beenden" << endl;
        cin >> res;
        switch (res)
        {
        case '1':
            cout << "Aufgabe 1" << endl;
            call_Aufg6_1();
            break;
        case '2':
            cout << "Aufgabe 2" << endl;
            call_Auf2_2();
            break;
        case 'e':
            cout << "Beenden" << endl;
            break;
            exit(0);
        }
    }
    return 0;
}
