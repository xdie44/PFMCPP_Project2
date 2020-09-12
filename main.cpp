#include <iostream>

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
 char 
 float
 double
 bool
 void
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
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

    int nOscil = 4;
    int nFilter = 2;
    int nParam = 10;

    char oscil = 'o';
    char filter = 'f';
    char param = 'p';

    float oscilFreq = 500.0f;
    float filterFreq = 2000.0f;
    float paramVal = 4.5f;

    double param1 = 4.5;
    double param2 = 5.5;
    double param3 = 2.5;

    bool oscilStart = true;
    bool filterStart = false;
    bool paramVisible = true;
    
    
    
    ignoreUnused(number, nOscil, nFilter, nParam, oscil, filter, param, oscilFreq, filterFreq, paramVal, param1, param2, param3, oscilStart, filterStart, paramVisible); //passing each variable declared to the ignoreUnused() function
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
int changeFreq(int nOsc, int oscType = 2)
{
    ignoreUnused(nOsc, oscType);

    return {};
}
/*
 2)
 */
bool canPlay(int osc, float freq = 440.0f, bool active = true)
{
    ignoreUnused(osc, freq, active);

    return {};

}
/*
 3)
 */
char notePlayed(int nOsc = 1, char oscType = 'a', float freq = 880.0f)
{
    ignoreUnused(nOsc, oscType, freq);

    return {};

}
/*
 4)
 */
void cloneOsc(int nOsc, double param1, double param2)
{

    ignoreUnused(nOsc, param1, param2);

}
/*
 5)
 */
float note2Freq(int note, bool active = true)
{

    ignoreUnused(note, active);

    return {};

}
/*
 6)
 */
char typeOsc(int nOsc, bool isActive = true, char type = 'a')
{

    ignoreUnused(nOsc, isActive, type);

    return {};

}
/*
 7)
 */
void switchOsc(int osc1, int osc2, bool isTheSame = false)
{

    ignoreUnused(osc1, osc2, isTheSame);

}
/*
 8)
 */
bool isPlaying(char oscWave = 'a', int numChannel = 2, bool noteOn = false)
{

    ignoreUnused(oscWave, numChannel, noteOn);

    return {};

}
/*
 9)
 */
int key2Note(int keyPressed, float freq, int note, bool isPressed)
{

    ignoreUnused(keyPressed, freq, note, isPressed);

    return {};

}
/*
 10)
 */
void switchOffSynth(bool isPlaying, int nOsc, float releaseTime = 0.5f)
{
    ignoreUnused(isPlaying, nOsc, releaseTime);

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
    int dialVal = changeFreq (1,2);
    //2)
    bool osc1CanPlay = canPlay(1);
    //3)
    char currentNote = notePlayed(2, 'b', 220.0f);
    //4)
    cloneOsc(4, 4.4, 2.4);
    //5)
    auto freq = note2Freq(35);
    //6)
    char osc1Type = typeOsc(2, true, 'c');
    //7)
    switchOsc(2, 3, false);
    //8)
    bool isOsc3Playing = isPlaying('d', 1, true);
    //9)
    auto note = key2Note(22, 300.0f, 2, true);
    //10)
    switchOffSynth(true, 2, 0.2f);

    ignoreUnused(dialVal, osc1CanPlay, currentNote, freq, osc1Type, isOsc3Playing, note) ;
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
