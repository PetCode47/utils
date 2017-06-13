#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<fstream>
#include<exception>
#include "matrixReader.h"

int main(int argc, char**argv)
{
    if(argc != 2)
    {   
        cerr<<"Usage: filename.txt"<<endl;
        return 0;
    }

    string fname = argv[1];

    FileReader myFile(fname);

    MatrixReader<int> mat(fname);
    mat.show();
    return 0;    
}


