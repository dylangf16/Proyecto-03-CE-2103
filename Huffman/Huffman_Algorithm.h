#ifndef PROYECTO_03_CE_2103_HUFFMAN_ALGORITHM_H
#define PROYECTO_03_CE_2103_HUFFMAN_ALGORITHM_H

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<bits/stdc++.h>
#include<unistd.h>

using namespace std;

void compressFile(char *path, char *output_path, map<unsigned char, string> &codes);

void decompressFile(char *inputPath, char *outputPath);


#endif //PROYECTO_03_CE_2103_HUFFMAN_ALGORITHM_H
