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
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
integer
floating point
boolean
double floating point
character 
unsigned integer
 

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    // int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int value = 5;
    int amount = 20;
    int total = 100;
    float daughterAge = 2.5f;
    float sonAge = 1.5f;
    float gasPrice = 195.7f;
    bool shouldPlaySound = true;
    bool turnTapOn = false;
    bool turnSongUp = true;
    double var1 = 5.999999;
    double var2 = 5.0;
    double var3 = 5;
    char grade = 'A';
    char key = 'E';
    char mark = 'B';
    unsigned int price = 150;
    unsigned int cost = 75;
    unsigned int score = 70;
    
    
    
    
    ignoreUnused(value, amount, total, daughterAge, sonAge, gasPrice, shouldPlaySound, turnTapOn, turnSongUp, var1, var2, var3, grade, key, mark, price, cost, score); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) 
 */
bool rentHotelRoom(int rentalLength, int suiteType = 2)
{
    ignoreUnused(rentalLength, suiteType);
    return { };
}
/*
 2)
 */
bool cookDinner(int ingredientsList, int setTable, bool candleLit = true)
{
    ignoreUnused(ingredientsList, setTable, candleLit);
    return { };
}
/*
 3)
 */
bool isInTune(char tuning = 'A')
{
    ignoreUnused(tuning);
    return { };
}
/*
 4)
 */
int getBattingAverage(float leadOff = 0.290f, float cleanUp = 0.305f)
{
    ignoreUnused(leadOff, cleanUp);
    return { };
}
/*
 5)
 */
int getSavePercentage(float backupGoalie = 0.920f, float callupGoalie = 0.850f, float franchiseGoalie = 0.975f)
{
    ignoreUnused(backupGoalie, callupGoalie,     
    franchiseGoalie);
    return { };
}
/*
 6)
 */
int getEarnedRunAverage(float starter = 3.45f, float reliever = 4.69f, float closer = 1.67f)
{
    ignoreUnused(starter, reliever, closer);
    return { };
}
/*
 7)
 */
void showTeamsGeographically(int usa = 25, int canada = 7)
{
    ignoreUnused(usa, canada);
}
/*
 8)
 */
bool showScore(unsigned int homeTeam = 3, unsigned int awayTeam = 0)
{
    ignoreUnused(homeTeam, awayTeam);
    return { };
}
/*
 9)
 */
bool cancelGame(bool covidRules = true, char attendance = 'n' )
{
    ignoreUnused(covidRules, attendance);
    return { };
}
/*
 10)
 */
bool getRefund(bool fullRefund = false, char credit = 'y')
{
    ignoreUnused(fullRefund, credit);
    return { };
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
    // auto carRented = rentACar(6, 2); 
    
    //1)
    auto roomRented = rentHotelRoom(3, 0); 
    //2)
    auto dinnerReady = cookDinner(10, 2, true);
    //3)
    auto tune = isInTune('A');
    //4)
    auto statAverage = getBattingAverage(0.290f, 0.305f);
    //5)
    auto statSavePercentage = getSavePercentage(0.920f, 0.850f, 0.975f);
    //6)
    auto statERA = getEarnedRunAverage(3.45f, 4.69f, 1.67f);
    //7)
    showTeamsGeographically(25, 7);
    //8)
    auto playGame = showScore(3, 0);
    //9)
    auto gameStatus = cancelGame(true, 'n' );
    //10)
    auto refundStatus = getRefund(false, 'y');
    
    // ignoreUnused(carRented);
    ignoreUnused(roomRented, dinnerReady, tune, statAverage, statSavePercentage, statERA, playGame, gameStatus, refundStatus);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
