#include<iostream>
#include<queue>
#include<string>
using namespace std;

class Print
{
public:
    void printQueue(queue<char>q,int length);
};
void Print::printQueue(queue<char>q, int length)
{
    queue<char>p;
    p=q;
    for (int i = 0; i<length; i++)
    {
        cout << p.front() << endl;
        p.pop();
    }
}