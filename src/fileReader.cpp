#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <exception>
#include "fileReader.h"

FileReader::FileReader(std::string in):m_fname(in)
{
        ifstream file(m_fname);
        try {
            readAll();
        }
        catch (std::exception e)
        {
            std::cerr<<e.what()<<endl;
        }
}

void FileReader::readAll()
{
        ifstream file(m_fname);
        if(!file)
        {
            throw std::runtime_error("Error Opening File exiting");
        }
        std::string buff;
        while(getline(file,buff))
        {
            m_lines.push_back(buff);
        }
}

void FileReader::show()
{
        for(auto &&i: m_lines)
        {
            std::cout<<i<<endl;
        } 
}


