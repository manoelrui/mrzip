#include <iostream>
#include "../include/RLE.h"

int main(int argc, char** argv) {
    RLE rle;
    string data = "wwwwbbwbbwwbwbbbbbwwwwwwwwwwb";
    
    cout << rle.compress(data);
    return 0;
}
