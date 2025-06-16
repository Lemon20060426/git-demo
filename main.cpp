#include <iostream>

/**
 * @brief a class for IO functions
 * 
 */
class CreateIO
{
    public:
        void print(std::string s)
        {
            std::cout<< s;
        }
        void println(std::string s)
        {
            std::cout<< s <<"\n";
        }
};

int main()
{
    CreateIO IO;
    IO.print("Hello World!");
    IO.print("Hello World!");
    IO.println("Hello World!");
    IO.print("Hello World!");
    return 0;
}