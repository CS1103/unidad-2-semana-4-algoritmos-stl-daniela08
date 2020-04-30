//
// Created by Daniela Cauti on 4/29/20.
//

#include "p146.h"

string permutacion(string s) {
    vector <string> v = {};
    string m = s;
    string n = "No successor";
    next_permutation(s.begin(), s.end());
    do {
        v.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    if(m == *(v.end() - 1))
        return n;
    return s;
}
