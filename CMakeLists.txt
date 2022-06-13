cmake_minimum_required(VERSION 3.22)
project(Proyecto_03_CE_2103)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_03_CE_2103 main.cpp
        Huffman/Huffman_Algorithm.cpp Huffman/Huffman_Algorithm.h
        LZ77/LZ77_Algorithm.cpp LZ77/LZ77_Algorithm.h
        LZ78/LZ78_Algorithm.cpp LZ78/LZ78_Algorithm.h LZ78/bitfile.cpp LZ78/bitfile.h LZ78/dictionary.cpp LZ78/dictionary.h
        Binario/FileToBinary.cpp Binario/FileToBinary.h
        )
