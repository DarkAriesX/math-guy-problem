#include <iostream>
#include <string>
#include <cmath>

namespace my
{
    std::string ThingGen(const int amount)
    {
        switch(amount)
        {
            case 1:
                return "apples";
                break;
            case 2:
                return "watermelons";
                break;
            case 3:
                return "gaming RGB mouses";
                break;
            case 4:
                return "slaves";
                break;
            case 5:
                return "grapes";
                break;
            case 6:
                return "shoes";
                break;
            case 7:
                return "helmets";
                break;
            case 8:
                return "cats";
                break;
            case 9:
                return "dogs";
                break;
            case 10:
                return "hamsters";
                break;
            case 11:
                return "candies";
                break;
            case 12:
                return "pineapples";
                break;
            case 13:
                return "bottles of beer";
                break;
            case 14:
                return "bottles of vodka";
                break;
            case 15:
                return "pierogies";
                break;
            case 16:
                return "winRAR licenses";
                break;
            case 17:
                return "bottles of Coca-Cola";
                break;
            case 18:
                return "T-shirts";
                break;
            case 19:
                return "bananas";
                break;
            case 20:
                return "Nvidia 1080s";
                break;
            default:
                return "ArrayIndexOutOfBoundsException";
                break;
        }
    }
    std::string NameGen(int amount)
    {
        switch(amount)
        {
            case 1:
                return "Adam";
                break;
            case 2:
                return "John";
                break;
            case 3:
                return "Matt";
                break;
            case 4:
                return "Sam";
                break;
            case 5:
                return "Kate";
                break;
            case 6:
                return "Alice";
                break;
            case 7:
                return "Bruce";
                break;
            case 8:
                return "Mike";
                break;
            case 9:
                return "Michael";
                break;
            case 10:
                return "Freddy";
                break;
            default:
                return "Papież";
                break;
        }
    }
    double Price(std::string thing)
    {
        double inflation = (rand()%20)+1;
        if (inflation <=10)
            inflation = (inflation/100) + 1;
        else
            inflation = inflation - 10;
            inflation = 1 - (inflation/100);
        if (thing == "apples")
            return 2.50 * inflation;
        else if (thing == "watermelons")
            return 4.99 * inflation;
        else if (thing == "gaming RGB mouses")
            return 39.99 * inflation;
        else if (thing == "slaves")
            return 449.50 * inflation;
        else if (thing == "grapes")
            return 3.50 * inflation;
        else if (thing == "shoes")
            return 50 * inflation;
        else if (thing == "helmets")
            return 25.55 * inflation;
        else if (thing == "cats")
            return 1250 * inflation;
        else if (thing == "dogs")
            return 125 * inflation;
        else if (thing == "hamsters")
            return 8 * inflation;
        else if (thing == "candies")
            return 0.39 * inflation;
        else if (thing == "pineapples")
            return 3.45 * inflation;
        else if (thing == "bottles of beer")
            return 5.50 * inflation;
        else if (thing == "bottles of vodka")
            return 21.50 * inflation;
        else if (thing == "pierogies")
            return 1.39 * inflation;
        else if (thing == "winRAR licenses")
            return 35 * inflation;
        else if (thing == "bottles of Coca-Cola")
            return 4 * inflation;
        else if (thing == "T-shirts")
            return 23 * inflation;
        else if (thing == "bananas")
            return 3 * inflation;
        else if (thing == "Nvidia 1080s")
            return 799 * inflation;
        else
            return 21.37;
        
    }
    float Answer(float price, int amount)
    {
        return price * amount;
    }
}