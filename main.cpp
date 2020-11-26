#include <iostream>
#include <cmath>
template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int 
 float
 bool
 double
 char
 unsigned int
 
  
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
 int fingers = 10;
 int cups = 3;
 int kilometers = -150;

 float weight = 83.6f;
 float gpa = 4.6f;
 float percentage = 1.5f;

 bool lights = true;
 bool awake = false;
 bool male = true;

 double pi = 3.1415926535897932384626433832795;
 double piHalf = 1.570796326794897;
 double goldenRatio = 1.61803398875;
 
 char initial = 'A';
 char lastLetter = 'Z';
 char ratedMPAA = 'G';

 unsigned int planets = 8;
 unsigned int cars = 1;
 unsigned int daughters = 2;

    
    ignoreUnused(number, fingers, cups, kilometers, weight, gpa, percentage, lights, awake, male, pi, piHalf, goldenRatio, initial, lastLetter, ratedMPAA, planets, cars, daughters); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void serveEggs (int howMany, bool scrambled)
{
    ignoreUnused(howMany, scrambled);
}

/*
 2)
 */
float rectangleArea (float length, float height)
{
    ignoreUnused(length, height);
    return {};
}
/*
 3)
 */
float triangleArea (float base, float altitude)
{
    ignoreUnused(base, altitude);
    return {};
}
/*
 4)
 */
double circleArea (double radius, double pi = 3.1416)
{
    ignoreUnused(radius, pi);
    return {};
}
/*
 5)
 */
void chessPlay (char letter, int number, char figure = 'p')
{
    ignoreUnused(figure, letter, number);
}
/*
 6)
 */
void moveTo (float pointX, float pointY)
{
    ignoreUnused(pointX, pointY);
}
/*
 7)
 */
void rotate (float degrees = 90)
{
    ignoreUnused(degrees);
}
/*
 8)
 */
void feedDog (int timeOfDay, bool water, bool specialTreat = true)
{
    ignoreUnused(timeOfDay, water, specialTreat);
}
/*
 9)
 */
float buyStuff (float moneyInWallet, float priceOfItem)
{
    ignoreUnused(moneyInWallet, priceOfItem);

    return {};
}
/*
 10)
 */
void wakeUp (int weekDay, int timeOfDay, int alarm = 700)
{
    ignoreUnused(weekDay, timeOfDay, alarm);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    serveEggs(2, true);
    //2)
    auto rectArea = rectangleArea(2, 4);
    //3)
    auto triArea = triangleArea(2, 4);
    //4)
    auto circArea = circleArea(3);
    //5)
    chessPlay('g', 5, 'k');
    //6)
    moveTo(4.6f, 7.2f);
    //7)
    rotate(45);
    //8)
    feedDog(830, false);
    //9)
    auto moneyLeft = buyStuff(1000.0f, 32.50);
    //10)
    wakeUp(3, 630);
    
    ignoreUnused(carRented, rectArea, circArea, triArea, moneyLeft);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
