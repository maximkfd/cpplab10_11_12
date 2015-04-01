#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <list>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

//    cout << "¬ведите им€ выходного файла: ";
    string s;
//    cin >> s;
//
    ifstream in;
//    in.open("in.txt");
    ofstream out;
//    out.open(s);
//
    int count = 0;
//    vector<double> v;
//    while (!in.eof()){
//        double t;
//        in >> t;
//        v.insert(v.end(), t);
//        count++;
//    }
    double a,b;
//    cout << "¬ведите\na: ";
//    cin >> a;
//    cout << "b: ";
//    cin >> b;
//
//    for(int i = 0; i < v.size(); i++){
//        if (v[i] == a){
//            v[i] = b;
//        }
//        out << v[i] << " ";
//    }
//    cout << "¬ведите им€ выходного файла: ";
//    cin >> s;
//
//    in.close();
//    out.close();
//
//    in.open("in.txt");
//    out.open(s);
//
//    count = 0;
//    list<double> l;
//    while (!in.eof()){
//        double t;
//        in >> t;
////        v.insert(v.end(), t);
//        l.push_back(t);
//        count++;
//    }
//    cout << "¬ведите\na: ";
//    cin >> a;
//    cout << "b: ";
//    cin >> b;
//
//    for(int i = 0; i < l.size(); i++){
//        double t = l.front();
//        if ((t >= a)&&(t <= b)){
//            out << l.front() << " ";
//        }
//        l.pop_front();
//    }
//    system("pause");
//
//    in.close();
//    out.close();

    in.open("in2.txt");
    out.open("out.txt");

    count = 0;
    map<string, int> m;
    while (!in.eof()){
        string t;
        string departmentName;
        in >> departmentName;
        in >> t;
        in >> t;
        int amount = atoi(t.c_str());
        try {
            m[departmentName] += amount;
        } catch (exception e){
            m.insert(pair<string, int>(departmentName, amount));
        }
        count++;
    }
    map<string, int>::iterator it = m.begin();
    for(int i = 0; i < m.size(); i++){
        cout << it->first << " " << it->second << "\n";
        it.operator++();
    }
    system("pause");

    in.close();
    out.close();
    return 0;
}