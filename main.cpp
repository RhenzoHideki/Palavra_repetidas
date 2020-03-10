// implemente aqui seu programa ...

#include <iostream>
#include <list>
#include <string>
#include <fstream>

#include "Terminal.h"

using namespace std;

int main (int arc , char *argv[]){
    string str =argv[1];
    list<string> l;
    string line;

    ifstream arq(str);

    if (!arq.is_open()) cout << "Não possivel abrir"<< endl;

    while (getline(arq,line)) {
        for (auto & compara: l) {
            if (compara == line) cout << endl;
            }
        l.push_back(line);
        cout << line << endl;
    }
    return 0;
}