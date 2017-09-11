/*-------Mauricio Hiraaki Ishida-----------
---------G++ nome_do_arquivo.cpp-----------
-----./a.out -R nome_do_aquivo_entrada-----
-----./a.out -W nome_do_arquivo_saida------
+++++++++++++++++++++++++++++++++++++++++++
 -------------INSTALL BEEP-----------------
 -----------FOR FULL CONTENT---------------

 */
#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;


int main(int argc, char *argv[]){
    string op=argv[1];
    string entrada=argv[2];
    if(op=="-R"){
        MakeHammingfile(entrada,"out.hamming");

    }else if(op=="-W"){
        MakeBfile("out.hamming",entrada);

    }else if(op=="Order"){
        if(entrada=="66"){
            order66();
        }

    }

    return 0;
}
