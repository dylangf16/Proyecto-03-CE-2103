#include "Huffman/Huffman_Algorithm.h"
#include "LZW/LZWCompress/LZW.cpp"
#include "LZW/LZWDecompress//LZW.cpp"
#include "LZ78/LZ78_Algorithm.h"
#include "LZ77/LZ77_Algorithm.h"
#include "Binario/FileToBinary.h"

#include <fstream>


int main(int argc, char *argv[]) {

    //                                             Ejecución de Huffman
/*
    cout << "inputs dados" << endl;
    std::string Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/texto";
    std::string Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/texto";
    std::string Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/texto";
    std::string Binario = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Archivo Binario/texto.bin";

    //ImageToBinary(Path1, Binario);

    char* PorComprimir = const_cast<char *>(Path1.c_str());
    char* Comprimido = const_cast<char *>(Path2.c_str());
    char* Descomprimido = const_cast<char *>(Path3.c_str());

    if(argc==4){
        PorComprimir = argv[1];
        Comprimido = argv[2];
        Descomprimido = argv[3];
    }
    cout << "comprimiendo" << endl;
    map<unsigned char, string> codes;
    //Huffman Compresión
    compressFile(PorComprimir, Comprimido, codes);
    //HUffman Descompresión-
    decompressFile(Comprimido, Descomprimido);

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

    /*
    cout << "Comprimiendo" << endl;
    std::string Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/The_Clone_Wars_Logo_Bleu.txt";
    std::string Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path4 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Archivo Binario/The_Clone_Wars_Logo_Bleu.bin";

    ImageToBinary(Path1, Path4);

    char* fname_in = const_cast<char *>(Path4.c_str());
    char* fname_out = const_cast<char *>(Path2.c_str());

    compress(fname_in,fname_out);
    cout << "Fin de compresión" << endl;
    cout << "Inicio de Descompresión" << endl;

    fname_in = const_cast<char *>(Path2.c_str());
    fname_out = const_cast<char *>(Path3.c_str());
    decompress(fname_in,fname_out);


    cout << "Final de compresión" << endl;
*/


    //------------------------------------------------------------------------------------------------------------------------------------
    //                                             Ejecución de LZ77


    std::string Path1 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/PorComprimir/The_Clone_Wars_Logo_Bleu.jpg";
    std::string Path2 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Comprimido/The_Clone_Wars_Logo_Bleu.txt";
    std::string Path3 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.txt";
    std::string Path4 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Archivo Binario/The_Clone_Wars_Logo_Bleu.txt";
    std::string Path5 = "/home/dylan16/Documents/Datos2/Proyecto03/Proyecto-03-CE-2103/Descomprimido/The_Clone_Wars_Logo_Bleu.jpg";


    ImageToBinary(Path1, Path4);


    LZ77 *lz77 = new LZ77();

    cout << "Inicio de compresión LZ77" << endl;
    lz77->compress_file(Path4, Path2);
    cout << "Finalización de compresión LZ77" << endl;

    cout << "Inicio de descompresión LZ77" << endl;
    lz77->decompress_file(Path2, Path3);
    cout << "Finalización de descompresión LZ77" << endl;

    ImageToBinary(Path3,Path5);


    return 0;
}





