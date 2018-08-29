#include "../../include/RLE.h"
#include <string>

using namespace std;

string RLE::compress(string data) {   
    int counter;
    string enconding = "";

    for (int i = 0; i < data[i]; i++) {
        counter = 1;
        while(data[i] == data[i + 1]) {
            counter++;
            i++;
        }
        enconding += to_string(counter) + data[i];
    }
    
    return enconding;
}
