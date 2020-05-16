#include <iostream>
#include <fstream>

#include <time.h>
#include <string>

#include "functions.hpp"


std::ofstream save;
std::string thing;
int amount;
using std::endl;
int main()
{
    srand(time(NULL));
    save.open("../mathguy.txt", std::ios::binary);
    amount = (rand()%700)+250;
    thing = my::ThingGen((rand()%20)+1);
    save << my::NameGen((rand()%10)+1) << " buys " 
                << amount << " " << thing << " for $" 
                << my::Price(thing) << " per one." 
                << endl << "What's the total cost? " << endl;

    save << endl << "Answer: " << my::Answer(my::Price(thing), amount) << endl;
    
    save.close();
    return 0;
}