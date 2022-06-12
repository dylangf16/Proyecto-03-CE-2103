//
// Created by dylan16 on 12/06/22.
//

#include "FileToBinary.h"
using namespace std;

int ImageToBinary(std::string input, std::string output){
    std::ifstream image(input, ios::in | ios::binary);
    std::ofstream binary(output, std::ios::binary);

    char ch;
    while(!image.eof()){
        ch = image.get();
        binary.put(ch);
    }
    image.close();
    binary.close();
    return 0;
}

int BinaryToImage(std::string input, std::string output){
    std::ifstream binary(input, ios::in | ios::app | ios::binary);
    std::ofstream image(output, ios::out | ios::app);

    char ch;
    while(!binary.eof()){
        ch = binary.get();
        image.put(ch);
    }
    image.clear();
    binary.close();
    return 0;
}