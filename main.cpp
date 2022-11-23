 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */



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
struct CommercialAircraft
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
    void accellerate(float targetKilometersPerHour);
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
