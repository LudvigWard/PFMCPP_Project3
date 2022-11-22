/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function.  it has multiple arguments, some with default values.
        //the parameter names are related to the work the function will perform.
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};


/*
Thing 1)
Kitchen
5 properties:
    1) number of pans (int)
    2) number of pots (int)
    3) size in square meters (float)
    4) wall color (std::string)
    5) number of plates (int)
3 things it can do:
    1) prepare food
    2) wash dishes
    3) store food
*/

struct Kitchen
{
// number of pans (int)
    int numPans = 4;
// number of pots (int)
    int numPots = 3;
// size in square meters (float)
    float floorArea = 8.5f;
// wall color (std::string)
    std::string wallColor = "white";
// number of plates (int)
    int numPlates = 10;

// prepare food
    void prepareFood(std::string dishName, int cookingTime);
// wash dishes
    void washDishes(int dishwasherTimeSetting);
// store food
    void storeFood(std::string whereToStore);
};

/*
Thing 2)
Computer
5 properties:
    1) brand (std::string)
    2) ssd storage in gigabytes (int)
    3) ram in gigabytes (int)
    4) screen size in inches (float)
    5) operating system (std::string)
3 things it can do:
    1) browse the internet
    2) play video game
    3) write text document
 */
struct Computer
{
// brand (std::string)
    std::string brand = "Huawei";
// ssd storage in gigabytes (int)
    int ssdGigabytes = 2000;
// ram in gigabytes (int)
    int ramGigabytes = 16;
// screen size in inches (float)
    float screenSize = 14.0f;
// operating system (std::string)
    std::string os = "Windows";

// browse the internet
    void browseWeb(std::string url);
// play video game
    void playGame(std::string gameToPlay);
// write text document
    void writeTextDoc(std::string textEditor);
};

/*
Thing 3)
Bicycle
5 properties:
    1) amount of gears (int)
    2) type of valve on tire (std::string)
    3) number of brakes (int)
    4) frame color (std::string)
    5) type of saddle (std::string)
3 things it can do:
    1) shift gears
    2) turn
    3) accelerate
 */
struct Bicycle
{
// amount of gears (int)
    int numGears = 7;
// type of valve on tire (std::string)
    std::string valveType = "Presta";
// number of brakes (int)
    int numBrakes = 2;
// frame color (std::string)
    std::string color = "black";
// type of saddle (std::string)
    std::string saddleType = "leisure";

// shift gears
    int shiftGear(int gear); //returns the chosen gear
// turn
    void turn(bool rightTurn);
// accelerate
    void accelerate(int kmPerHour);
};

/*
Thing 4)
Digital Mixing Desk
5 properties:
    1) number of channels (int)
    2) audio network protocol (std::string)
    3) number of faders (int)
    4) number of displays (int)
    5) weight in kilograms (float)
3 things it can do:
    1) mix audio
    2) record audio
    3) save current scene
 */
struct DigitalMixingDesk
{
// number of channels (int)
    int numChannels = 64;
// audio network protocol (std::string)
    std::string networkProtocol = "Dante";
// number of faders (int)
    int numFaders = 24;
// number of displays (int)
    int numDisplays = 2;
// weight in kilograms (float)
    float weightKilograms = 15.5f;

    struct Channel
    {
        int channelNumber = 1;
        std::string channelName = "ch1";
        std::string channelType = "input";
        float gainDb = 0.0f;
        int dcaAssign = 0;

        void setChannelStyle(std::string chColor = "green", std::string chIcon = "none");
        void configurePreamp(bool phaseInvert = false, bool phantomPower = false);
        void getPeakValue(int peakValue);
    };
// mix audio
    void mixAudio(Channel currentChannel, float level, float fxAmount);
// record audio
    void recordAudio(std::string recordingSource, bool recordPreFader = false);
// save current scene
    void saveScene(int sceneNumber, bool ignoreSceneSafes = false);
};

/*
Thing 5)
Cockpit
5 properties:
    1) number of seats (int)
    2) number of windows (int)
    3) number of displays (int)
    4) size in square meters (float)
    5) number of control wheels (int)
3 things it can do:
    1) change aircraft speed
    2) display current altitude
    3) use autopilot
 */
struct Cockpit
{
// number of seats (int)
    int numSeats = 2;
// number of windows (int)
    int numWindows = 3;
// number of displays (int)
    int numDisplays = 10;
// size in square meters (float)
    float sizeInSquareMeters = 3.0f;
// number of control wheels (int)
    int numControlWheels = 2;

// change aircraft speed
    void changeAircraftSpeed(float newSpeed);
// display current altitude
    float displayAltitude(float currentAltitude); //returns the current altitude
// use autopilot
    void useAutopilot(bool autoPilotEnabled = false);
};

/*
Thing 6)
Passenger Area
5 properties:
    1) number of economy class seats (int)
    2) number of business class seats (int)
    3) location of life vests (std::string)
    4) engine noise level in db (float)
    5) number of adjustable seats (int)
3 things it can do:
    1) store hand luggage
    2) seat passengers
    3) change lighting
 */
struct PassengerArea
{
// number of economy class seats (int)
    int numEconomySeats = 60;
// number of business class seats (int)
    int numBusinessSeats = 16;
// location of life vests (std::string)
    std::string lifeVestLocation = "beneathSeat";
// engine noise level in db (float)
    float engineNoiseDb = 78.5f;
// number of adjustable seats (int)
    int numAdjustableSeats = 16;

// store hand luggage
    void storeHandLuggage(float areaOccupiedByLuggage, float freeArea);
// seat passengers
    void seatPassenger(int passengerSeatNumber);
// change lighting
    void changeLighting(float lightIntensity);
};

/*
Thing 7)
Lavatory
5 properties:
    1) size in square meters (float)
    2) number of legacy ashtrays (int)
    3) mirror size in squared inches (float)
    4) sink volume in liters (float)
    5) soap scent (std::string)
3 things it can do:
    1) flush toilet
    2) lock door
    3) wash hands
 */
struct Lavatory
{
// size in square meters (float)
    float floorArea = 1.0f;
// number of legacy ashtrays (int)
    int numLegacyAshtrays = 1;
// mirror size in squared inches (float)
    float mirrorSizeInches = 18.3f;
// sink volume in liters (float)
    float sinkVolumeLiters = 4.5;
// soap scent (std::string)
    std::string soapScent = "lavender";

// flush toilet
    void flushToilet(bool flushSucceeded = true);
// lock door
    void lockDoor(bool doorLockIsFunctional = true);
// wash hands
    void washHands(int secondsWashed, int numTowelsUsed);
};

/*
Thing 8)
Food Cart
5 properties:
    1) amount of drawers (int)
    2) amount of sandwiches (int)
    3) amount of soft drinks (int)
    4) included hot drink (std::string)
    5) amount of non-food items (int)
3 things it can do:
    1) sell drink
    2) sell food
    3) sell non-food item
 */
struct FoodCart
{
// amount of drawers (int)
    int numDrawers = 6;
// amount of sandwiches (int)
    int numSandwiches = 50;
// amount of soft drinks (int)
    int numSoftDrinks = 50;
// included hot drink (std::string)
    std::string freeHotDrink = "coffee";
// amount of non-food items (int)
    int numNonFoodItems = 10;

    struct Food
    {
        std::string foodName = "cracker";
        int numCalories = 16;
        float priceInUSDollars = 0.5f;
        int numServingsInCart = 100;
        float weightInGrams = 3.2f;

        void satisfyConsumer(int consumerHungerFromOneToTen);
        void checkFreshness(std::string expirationDate, std::string currentDate);
        void raiseBloodSugar(float newBloodSugarLevel);
    };
// sell drink
    void sellDrink(std::string drinkType, float volume, bool isHotDrink, float alcoholPercentage);
// sell food
    void sellFood(Food requestedFood, int quantity);
// sell non-food item
    void sellOther(std::string otherItemName, float priceInUSDollars);
};

/*
Thing 9)
Personal Entertainment System
5 properties:
    1) screen size in diagonal inches (float)
    2) amount of movies (int)
    3) amount of songs (int)
    4) amount of games (int)
    5) type of display (std::string)
3 things it can do:
    1) play movie
    2) play song
    3) play game
 */
struct PersonalEntertainmentSystem
{
// screen size in diagonal inches (float)
    float screenSizeInches = 11.2f;
// amount of movies (int)
    int numAvailableMovies = 8;
// amount of songs (int)
    int numAvailableSongs = 30;
// amount of games (int)
    int numAvailableGames = 4;
// type of display (std::string)
    std::string displayType = "oledTouch";

// play movie
    void playMovie(std::string movieName, float durationInMinutes);
// play song
    void playSong(std::string songName, int durationInSeconds);
// play game
    void playGame(std::string gameName, int numPlayers = 1);
};

/*
Thing 10)
Commercial Aircraft
5 properties:
    1) Cockpit
    2) Passenger Area
    3) Lavatory
    4) Food Cart
    5) Personal Entertainment System
3 things it can do:
    1) take off
    2) land
    3) accelerate
 */
struct commercialAircraft
{
// Cockpit
    Cockpit cockpit;
// Passenger Area
    PassengerArea passengerArea;
// Lavatory
    Lavatory lavatory;
// Food Cart
    FoodCart foodCart;
// Personal Entertainment System
    PersonalEntertainmentSystem personalEntertainmentSystem;

// take off
    void takeOff(std::string airportDepartedFrom);
// land
    void land(std::string airportArrivedAt);
// accelerate
    void Accellerate(float targetKilometersPerHour);
};

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
