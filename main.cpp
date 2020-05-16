#include <iostream>
#include <fstream>
#include <iomanip>

#include <time.h>
#include <string>

#include "functions.hpp"


std::ofstream save;
std::string thing;
int amount;
double price;
using std::endl;
int main()
{

    srand(time(NULL));
    save.open("../mathguy.txt", std::ios::binary);
    amount = (rand()%700)+250;
    thing = my::ThingGen((rand()%20)+1);
    price = my::Price(thing);
    save << my::NameGen((rand()%10)+1) << " buys " 
                << amount << " " << thing << " for $" 
                << price << " per one." 
                << endl << "What's the total cost? " << endl;
    save << endl << "Answer: $" << my::Answer(price, amount) << endl;
    
    save.close();
    return 0;
}