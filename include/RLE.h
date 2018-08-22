#ifndef RLE_H
#define RLE_H

class RLE {
    public:
        void compress(char data[], int size, char** out);
        void decompress(char data[], int size, char** out);
};

#endif
