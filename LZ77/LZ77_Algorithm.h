#ifndef PROYECTO_03_CE_2103_LZ77_ALGORITHM_H
#define PROYECTO_03_CE_2103_LZ77_ALGORITHM_H

#include <vector>
#include <ios>
#include <algorithm>

typedef unsigned char byte;
using std::vector;
using std::string;
using std::min;

class LZ77
{
public:
    vector<byte> Encode(vector<byte> input, int VOCAB_BUFFER_SIZE, int PREVIEW_BUFFER_SIZE);

    vector<byte> Decode(vector<byte> input);

    static const int KB_1 = 1 * 1024;
    static const int KB_2 = 2 * 1024;
    static const int KB_4 = 4 * 1024;
    static const int KB_8 = 8 * 1024;
    static const int KB_16 = 16 * 1024;

private:
    struct Node
    {
        unsigned short position, length;
        byte symbol;

        Node(unsigned short position, unsigned short length, byte symbol)
        {
            this->position = position;
            this->length = length;
            this->symbol = symbol;
        }
    };

    /**
     * A method for finding a match between substrings of the preview buffer and a dictionary
     */
    Node* findMatching(const string& vocab_buffer, int vocab_buffer_end, string preview_buffer,
                       int preview_buffer_end);

    static const int SYMBOL_DATA_SIZE = 5;
};

union LongShortByteUnion
{
    unsigned short uShort;
    byte uBytes[8];
};

#endif //PROYECTO_03_CE_2103_LZ77_ALGORITHM_H
