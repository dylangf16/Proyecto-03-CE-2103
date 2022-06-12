#ifndef PROYECTO_03_CE_2103_LZ78_ALGORITHM_H
#define PROYECTO_03_CE_2103_LZ78_ALGORITHM_H
#include "bitfile.h"
#include "dictionary.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void decompress(char* fname_in, char* fname_out);

void compress(char* fname_in, char* fname_out);

string LZ78(string input, int option);

#endif //PROYECTO_03_CE_2103_LZ78_ALGORITHM_H
