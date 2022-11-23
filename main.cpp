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


struct Kitchen
{
    int numPans = 4;
    int numPots = 3;
    float floorArea = 8.5f;
    std::string wallColor = "white";
    int numPlates = 10;

    void prepareFood(std::string dishName, int cookingTime);
    void washDishes(int dishwasherTimeSetting);
    void storeFood(std::string whereToStore);
};


struct Computer
{
    std::string brand = "Huawei";
    int ssdGigabytes = 2000;
    int ramGigabytes = 16;
    float screenSize = 14.0f;
    std::string os = "Windows";

    void browseWeb(std::string url);
    void playGame(std::string gameToPlay);
    void writeTextDoc(std::string textEditor);
};


struct Bicycle
{
    int numGears = 7;
    std::string valveType = "Presta";
    int numBrakes = 2;
    std::string color = "black";
    std::string saddleType = "leisure";

    int shiftGear(int gear);
    void turn(bool rightTurn);
    void accelerate(int kmPerHour);
};


struct DigitalMixingDesk
{
    int numChannels = 64;
    std::string networkProtocol = "Dante";
    int numFaders = 24;
    int numDisplays = 2;
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
    void mixAudio(Channel currentChannel, float level, float fxAmount);
    void recordAudio(std::string recordingSource, bool recordPreFader = false);
    void saveScene(int sceneNumber, bool ignoreSceneSafes = false);
};


struct Cockpit
{
    int numSeats = 2;
    int numWindows = 3;
    int numDisplays = 10;
    float sizeInSquareMeters = 3.0f;
    int numControlWheels = 2;

    void changeAircraftSpeed(float newSpeed);
    float displayAltitude(float currentAltitude);
    void useAutopilot(bool autoPilotEnabled = false);
};


struct PassengerArea
{
    int numEconomySeats = 60;
    int numBusinessSeats = 16;
    std::string lifeVestLocation = "beneathSeat";
    float engineNoiseDb = 78.5f;
    int numAdjustableSeats = 16;

    void storeHandLuggage(float areaOccupiedByLuggage, float freeArea);
    void seatPassenger(int passengerSeatNumber);
    void changeLighting(float lightIntensity);
};


struct Lavatory
{
    float floorArea = 1.0f;
    int numLegacyAshtrays = 1;
    float mirrorSizeInches = 18.3f;
    float sinkVolumeLiters = 4.5;
    std::string soapScent = "lavender";

    void flushToilet(bool flushSucceeded = true);
    void lockDoor(bool doorLockIsFunctional = true);
    void washHands(int secondsWashed, int numTowelsUsed);
};


struct FoodCart
{
    int numDrawers = 6;
    int numSandwiches = 50;
    int numSoftDrinks = 50;
    std::string freeHotDrink = "coffee";
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
    void sellDrink(std::string drinkType, float volume, bool isHotDrink, float alcoholPercentage);
    void sellFood(Food requestedFood, int quantity);
    void sellOther(std::string otherItemName, float priceInUSDollars);
};


struct PersonalEntertainmentSystem
{
    float screenSizeInches = 11.2f;
    int numAvailableMovies = 8;
    int numAvailableSongs = 30;
    int numAvailableGames = 4;
    std::string displayType = "oledTouch";

    void playMovie(std::string movieName, float durationInMinutes);
    void playSong(std::string songName, int durationInSeconds);
    void playGame(std::string gameName, int numPlayers = 1);
};


struct CommercialAircraft
{
    Cockpit cockpit;
    PassengerArea passengerArea;
    Lavatory lavatory;
    FoodCart foodCart;
    PersonalEntertainmentSystem personalEntertainmentSystem;

    void takeOff(std::string airportDepartedFrom);
    void land(std::string airportArrivedAt);
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
