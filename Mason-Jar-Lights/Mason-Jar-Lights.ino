/*
 Name:		Mason_Jar_Lights.ino
 Created:	2/28/2021 7:18:01 PM
 Author:	willy
*/

#define redPin    9
#define greenPin  10
#define bluePin   11

// Global variables
int color_length = 1000;  // in milliseconds

void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue)
{
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

// The following functions are color functions
void Blue() //(0,0,255)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(0, 0, i);
        delay(10);
    }
    setColor(0, 0, 255);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(0, 0, i);
        delay(10);
    }
}

void Cyan() //(0,255,150)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(0, i, (0.588 * i));
        delay(10);
    }
    setColor(0, 255, 150);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(0, i, (0.588 * i));
        delay(10);
    }
}

void Green() //(0,255,0)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(0, i, 0);
        delay(10);
    }
    setColor(0, 255, 0);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(0, i, 0);
        delay(10);
    }
}

void Orange() //(255,20,0)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(i, (0.078 * i), 0);
        delay(10);
    }
    setColor(255, 20, 0);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(i, 0.078 * i, 0);
        delay(10);
    }
}

void Purple() //(255,0,50)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(i, 0, (0.196 * i));
        delay(10);
    }
    setColor(255, 0, 50);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(i, 0, (0.196 * i));
        delay(10);
    }
}

void Red() //(255,0,0)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(i, 0, 0);
        delay(10);
    }
    setColor(255, 0, 0);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(i, 0, 0);
        delay(10);
    }
}

void Yellow() //(255,50,0)
{
    for (int i = 1; i <= 255; i++)
    {
        setColor(i, (0.196 * i), 0);
        delay(10);
    }
    setColor(255, 50, 0);
    delay(color_length);
    for (int i = 255; i >= 1; i--)
    {
        setColor(i, (0.196 * i), 0);
        delay(10);
    }
}

// setting white
void SetWhite()
{
    setColor(255, 75, 50);
}

// setting LED off
void LEDOff()
{
    setColor(0, 0, 0);
}

// Main loop...call color order from here
void loop()
{
    setColor(255, 0, 0); // red
    delay(1000);
    setColor(255, 20, 0); // orange
    delay(1000);
    setColor(255, 50, 0); // yellow
    delay(1000);
    setColor(0, 255, 0); // green
    delay(1000);
    setColor(0, 0, 255); // blue
    delay(1000);
    setColor(255, 0, 50); // purple
    delay(1000);
    setColor(255, 75, 50); // white
    delay(1000);
    setColor(0, 255, 150); // cyan
    delay(1000);

    LEDOff();
    delay(2000);
    Red();
    Orange();
    Yellow();
    Green();
    Blue();
    Purple();
    Cyan();
    LEDOff();
    delay(2000);
}
