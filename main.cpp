#include "Huffman/Huffman_Algorithm.h"
#include "LZ77/LZ77_Algorithm.h"
#include "LZ78/LZ78_Algorithm.h"
#include "LZW/LZWCompress/LZW.cpp"
#include "LZW/LZWDecompress//LZW.cpp"


int main(int argc, char* argv[]) {
    /*
    //                                             Ejecución de Huffman
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
    compressFile(Path1, Path2, codes);
    decompressFile(Path2, Path3);

    cout << "terminado" << endl;
     *///------------------------------------------------------------------------------------------------------------------------------------

    //                                             Ejecución de LZW
   //LZW COMPRESIÓN
   LZWCompression compressFile;
   compressFile.GetFileNames();
   compressFile.OpenFiles();
   compressFile.ReadBytesFromFile();
   compressFile.closepointers();

   //LZW DECOMPRESIÓN
   LZWDeCompression decompressFile;
   decompressFile.GetFileNames();
   decompressFile.OpenFiles();
   decompressFile.ReadBytesFromFile();
   decompressFile.closepointers();

   return 0;
}





