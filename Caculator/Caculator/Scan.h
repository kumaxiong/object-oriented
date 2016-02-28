#include<string>
#include<queue>
#include<iostream>
using namespace std;
class Scan
{
public:
    void ToStringQueue(string input);
    queue<char>getQ();
    int getLength();
    string m_strStr;
    queue<char>q;
    int m_iLength;
    int m_iFlag;
};


void Scan::ToStringQueue(string input)
{
    m_strStr = input;
    m_iLength = input.size();
    int i;
    for (i = 0, m_iFlag = 0; i < m_iLength ; i++)
    {

//push queue
        q.push(input[i]);
        if (input[i] >= '0' && input[i] <= '9')
        {
            m_iFlag++; 
        }       
 //number>10 ->error
        if (m_iFlag > 10)
        {
            cout << "you input number >10" << endl;
            break;
        }
    }
 
}

queue<char>Scan::getQ()
{
    return q;
}

int Scan::getLength()
{
    return m_iLength;
}
