#include "Huffman/Huffman_Algorithm.h"
#include "LZW/LZWCompress/LZW.cpp"
#include "LZW/LZWDecompress//LZW.cpp"
#include "LZ77/LZ77_Algorithm.cpp"
#include "LZ78/LZ78_Algorithm.h"

#include <string.h>
#include <fstream>




int main(int argc, char *argv[]) {

    //                                             Ejecución de Huffman
    /*
    cout << "inputs dados" << endl;
    char* Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/The_Clone_Wars_Logo_Bleu.jpg";
    char* Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/The_Clone_Wars_Logo_Bleu.jpg";
    char* Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.jpg";

    if(argc==4){
        Path1 = argv[1];
        Path2 = argv[2];
        Path3 = argv[3];
    }
    cout << "comprimiendo" << endl;
    map<unsigned char, string> codes;
    //Huffman Compresión
    //compressFile(Path1, Path2, codes);
    //HUffman Descompresión-
    //decompressFile(Path2, Path3);

    cout << "terminado" << endl;
     */
     //------------------------------------------------------------------------------------------------------------------------------------

    //                                             Ejecución de LZW
    //LZW COMPRESIÓN
    /*
    LZWCompression compressFile;
    std::string Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/The_Clone_Wars_Logo_Bleu.jpg";
    compressFile.GetFileNames(Path1.c_str(), Path2.c_str());
    compressFile.OpenFiles();
    compressFile.ReadBytesFromFile();
    compressFile.closepointers();

    //LZW DECOMPRESIÓN
    std::string Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.jpg";
    LZWDeCompression decompressFile;
    decompressFile.GetFileNames(Path2.c_str(), Path3.c_str());
    decompressFile.OpenFiles();
    decompressFile.ReadBytesFromFile();
    decompressFile.closepointers();

     */
    //------------------------------------------------------------------------------------------------------------------------------------
    //                                             Ejecución de LZ78


    cout << "Comprimiendo" << endl;
    std::string Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.jpg";
    char* fname_in = const_cast<char *>(Path1.c_str());
    char* fname_out = const_cast<char *>(Path2.c_str());
    compress(fname_in,fname_out);
    cout << "Fin de compresión" << endl;
    cout << "Inicio de Descompresión" << endl;
    fname_in = const_cast<char *>(Path2.c_str());
    fname_out = const_cast<char *>(Path3.c_str());
    decompress(fname_in,fname_out);
    cout << "Final de compresión" << endl;



    return 0;
}





