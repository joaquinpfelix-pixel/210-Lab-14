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

void Color::setRed(int r) 
{
    if (red >= MIN_RGB && red <= MAX_RGB)
    {
        red = r;
    } else{
        cout << "Error: Red value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

void Color::setGreen(int r) 
{
    if (green >= MIN_RGB && green <= MAX_RGB)
    {
        green = g;
    } else{
        cout << "Error: Green value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

void Color::setBlue(int b) 
{
    if (blue >= MIN_RGB && blue <= MAX_RGB)
    {
        blue = b;
    } else{
        cout << "Error: Blue value must be between " 
             << MIN_RGB << " and " << MAX_RGB << "." << endl;
    }
}

//getRed() returns red value
//arguments: none
//returns: integer
int Color::getRed() const
{
    return red;
}

//getGreen() returns green value
//arguments: none
//returns: integer
int Color::getGreen() const
{
    return green;
}

//getBlue() returns blue value
//arguments: none
//returns: integer
int Color::getBlue() const
{
    return blue;
}

//print() outputs RGB values
//arguments: none
//returns: nothing
void Color::print() const
{
    cout << "RGB(" << red << ", " 
         << green)"
}