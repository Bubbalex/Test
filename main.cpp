//Assignment: CS FINAL C++
//Name:Alexis Pena
// Encrypt using ASCII


#include <iostream>
using namespace std;;
char decode(char SAMPLE);
int main()
{

    char SAMPLE = 0;
    while((SAMPLE = getchar()) != EOF)
    {
        cout << decode(SAMPLE);
    }
}
char decode(char SAMPLE) //grabs input and adds 4 using ASCII table.
{
    return SAMPLE == '\n' ? SAMPLE : SAMPLE+4;
}

