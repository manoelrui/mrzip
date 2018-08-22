#include "../../include/RLE.h"
#include <map>
#include <string>

void RLE::compress(char data[], int size, char** out) {   
    std::map<char, int> counter;

    for(int i = 0; i < size; i++) {
        char key = data[i];
        std::map<char, int>::iterator it = counter.lower_bound(key);
        if (it != counter.end()) {
            counter[key]++;
        } else {
            counter[key] = 0;    
        }
    }
    
    std::string compressString = "";
    for(const auto &keyValue: counter) {
        compressString += keyValue.second;
        compressString += keyValue.first;
    }

    *out = new char[compressString.length()];   
    compressString.copy(*out, compressString.length());
}

void RLE::decompress(char data[], int size, char** out) {

}
