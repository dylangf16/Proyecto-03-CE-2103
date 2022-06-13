//
// Created by dylan16 on 12/06/22.
//
#include "FileToBinary.h"

int ImageToBinary(std::string input, std::string output) {
    ifstream image(input, ios::in | ios::binary);
    ofstream binary(output, ios::out | ios::app);

    char ch;
    while(!image.eof()){
        ch = image.get();
        binary.put(ch);
    }
    image.close();
    binary.close();
}


int BinaryToImage(std::string input, std::string output) {
    ifstream binary(input, ios::in | ios::app | ios::binary);
    ofstream image(output, ios::out | ios::app);

    char ch;
    while(!binary.eof()){
        ch = binary.get();
        image.put(ch);
    }
    image.clear();
    binary.close();
}
