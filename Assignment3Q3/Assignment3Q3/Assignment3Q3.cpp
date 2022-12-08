/*
* Created by: Miguel R. Kunkle
* Date: 12/7/2022
* 
* Description: A map is created by inserting key value pairs of states and their capitals.
* There is one function to print the map, and another to ask the user which state they wish to see the capital of.
*/
#include <iostream>
#include <string>
#include <map>

void printMap(std::map<std::string, std::string> stateDataMap)
{
    std::map<std::string, std::string>::iterator it;

    for (it = stateDataMap.begin(); it != stateDataMap.end(); it++)
    {
        std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
    }

}

std::string printValue(std::map<std::string, std::string> stateDataMap)
{
    std::string input;

    std::cout << "Please enter the state you wish to know the capital of: ";
    std::cin >> input;

    return stateDataMap[input];

}

int main()
{
    //create map
    std::map<std::string, std::string> stateDataMap;

    //fill map with key-value pairs
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Masshachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    //print information in map
    printMap(stateDataMap);

    //chaing capital of California to Los Angeles
    stateDataMap["California"] = "Los Angeles";

    //user gets to ask for a capital
    std::cout << printValue(stateDataMap) << std::endl;
}

