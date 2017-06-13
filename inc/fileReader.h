
#pragma once

#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<fstream>
#include<exception>
using namespace std;

//This class reads a text file
class FileReader
{
    public:
    explicit FileReader(string in);
    void readAll();
    const vector<string>& getLines() { return m_lines ; }
    virtual void show();

    protected:
    string m_fname;
    vector<string> m_lines;
};

