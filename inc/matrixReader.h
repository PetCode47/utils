#pragma once
#include "fileReader.h"

//This is a template class hence the implemetation.
template <typename T>
class MatrixReader: public FileReader
{
    public:
    explicit MatrixReader(std::string in);
    void makeMatrix();
    void show();
    const std::vector<std::vector<T> >& getLines() { return m_matrix ; }

    private:
    std::vector<std::vector<T> > m_matrix;
};


template <typename T>
MatrixReader<T>::MatrixReader(string in):FileReader(in)
{
        try {
            makeMatrix();
        }
        catch (std::exception e)
        {
            cerr<<e.what()<<endl;
        }
}

template <typename T>
void MatrixReader<T>::makeMatrix()
{
        T tmp;
        for(auto &x : m_lines)
        {
            stringstream buff(x);
            vector<T> vbuff;
            while(buff>>tmp)
            {
                vbuff.push_back(tmp);
            }
            m_matrix.push_back(vbuff);
        }
}

template <typename T>
void MatrixReader<T>::show()
{
        for(auto &&i: m_matrix)
        {
            for(auto &&j: i)
            {
                cout << j << " ";
            }
            cout<<endl;
        }
}

