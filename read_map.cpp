#include <iostream>
#include <fstream>
#include "read_map.h"
#include "node.h"


Node* readMap(string fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        throw runtime_error("Couldn't read " +  fileName + '\n');
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

}
