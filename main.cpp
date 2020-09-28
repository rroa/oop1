#include <iostream>
#include <string>
#include <iomanip>

// Class: blueprint for creating objects.
// A class defines a rule of state management and behavior of an object.
class Rectangle
{    
    public:
        // Rectangle constructor and member initialization
        // Read more about it here: https://en.cppreference.com/w/cpp/language/constructor

        /*
         * CONST
         */
        Rectangle(int width, int height) :
            m_width(width),  // Initialize member m_width
            m_height(height) // Initialize member m_height
        {
            std::cout << "Constructor is being executed. Params: " << m_width << " and " << m_height << std::endl;
        }

        /*
         * Functions
         */
        
        // Calculates the rectangle area
        int area()
        {
            return m_width * m_height;
        }
    private:
        int m_width, m_height;
};

class Car
{
    public:
        /*
         * CONST
         */
        Car(std::string car_make, int max_speed):
            m_speed(max_speed),
            m_make(car_make)            
        {        
            // Max speed must be positive, otherwise time defaults to -1                     
            if(max_speed > 0)
            {
                m_time = 5 + (( 1 / (float)max_speed ) * 100);
            }        
            else 
            {
                m_time = -1;
            }
        }

        /*
         * FUNCTIONS
         */

        // Returns how fast you can drive a car from 0 to 60
        void drive()
        {                                 
            std::cout << std::fixed;
            std::cout << std::setprecision(2);   // Read more about this here: https://en.cppreference.com/w/cpp/io/manip/setprecision
            std::cout << "The car make " << m_make << " goes from 0 to 60 in: " << m_time << " seconds. With a max speed of " << m_speed << "km/h" << std::endl;
        }
    private:
        float m_time;
        int m_speed;
        std::string m_make;
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

    // Object: Instance of a class
    // rect is an instance of Rectangle
    Rectangle rect(x, y);
    Rectangle rect1(200, 100);
    Rectangle rect2(200, 100);
    Rectangle rect3(70, 1);

    // dot operator to access public members from our Rectangle class
    std::cout << "Rectangle area = " << rect.area() << std::endl;
    std::cout << "Rectangle area = " << rect1.area() << std::endl;
    std::cout << "Rectangle area = " << rect2.area() << std::endl;
    std::cout << "Rectangle area = " << rect3.area() << std::endl;

    std::cout << "A Rectangle variable takes " << sizeof(rect) << " bytes of memory" << std::endl;

    // Client code that uses the Car class
    // Object: Instance of a class
    // bmw is an instance of Car
    Car bmw("BMW", 180);
    Car honda("Honda", 220);
    Car renault("Renault", 175);
    Car toyota("Toyota", 0);

    bmw.drive();
    honda.drive();
    renault.drive();
    toyota.drive();

    return 0;
}