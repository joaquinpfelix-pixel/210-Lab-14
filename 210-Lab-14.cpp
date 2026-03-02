#include <iostream>
using namespace std;

// Constant declarations
const int MIN_RGB = 0;
const int MAX_RGB = 255;

//Color class with the three variables
class Color
{
    private:
    int red;
    int green;
    int blue;

    public:
    void setRed(int r);
    void setGreen(int g);
    void setBlue(int b);

    int getRed() const;
    int getGreen() const;
    int getBlue() const;

    void print() const;
};


int main() 
{




}


void populateColor(Color &c, int r, int g, int b)
{
    c.setRed();
    c.setGreen();
    c.setBlue();
}