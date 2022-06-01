#include <iostream>
#include "Huffman_Algorithm.h"
using namespace std;


int main(int argc, char* argv[]) {
    cout << "inputs dados" << endl;
    char* Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/Proyecto #3 - CloudDrive (1).pdf";
    char* Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/Proyecto #3 - CloudDrive (1).pdf";
    char* Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/Proyecto #3 - CloudDrive (1).pdf";

    if(argc==4){
        Path1 = argv[1];
        Path2 = argv[2];
        Path3 = argv[3];
    }
    cout << "comprimiendo" << endl;
    map<unsigned char, string> codes;
    compressFile(Path1, Path2, codes);
    decompressFile(Path2, Path3);

    cout << "terminado" << endl;

    return 0;
}

