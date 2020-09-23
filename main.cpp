#include <iostream>

class Rectangle
{
    int width, height;    
};

int main(int argc, char ** argv)
{    
    /*
        char 8 bits (1 byte)
        short 
        int 32 bits (4 bytes)
        float
        long
        long long
        bool
        void

        |-------------------------------|
        | (type) (name) = (val) [addr]  |
        | int x = 4; (32 bits)          |
        | int y = 1;                    |        
        |-------------------------------|
    */

    int x, y;
    x = 10;
    y = 20;
    
    std::cout << "An int variable takes " << sizeof(x) << " bytes of memory" << std::endl;
    std::cout << "Rectangle area = " << x * y << std::endl;

    Rectangle rect;
    std::cout << "A Rectangle variable takes " << sizeof(rect) << " bytes of memory" << std::endl;
    return 0;
}