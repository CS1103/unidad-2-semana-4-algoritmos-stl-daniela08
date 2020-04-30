#include "p146.cpp"

int main() {

    string a;
    vector <string> v = {};
    while (a != "#") {
        cout << "string: ";
        cin >> a;
        v.push_back(a);
    }

    for(int i = 0; i < v.size(); ++i)
    {string string1;
        string1 = permutacion(v[i]);
        cout << string1 << endl;}

    return 0;
}