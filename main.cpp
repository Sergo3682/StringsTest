#include <cstring>
#include <iostream>
#include <string>

void TrimRight(char *s);

int main()
{
    std::string str;

    std::cout << "Type your string:\n";
    std::getline(std::cin, str);

    const char* initialCstr = str.c_str();
    char *charPtr = const_cast<char*>(initialCstr);

    std::cout << "Your initial string is \"" << charPtr << "\"\n";

    TrimRight(charPtr);
    std::cout << "Your result string is \"" << charPtr << "\"\n";

    return 0;
}

void TrimRight(char *s)
{
    int size = strlen(s);
    if (size == 0) return;

    char* endPtr = s + size - 1;

    while ((endPtr >= s) && (*endPtr == ' '))
    {
        *endPtr = '\0';
        endPtr--;
    }
}