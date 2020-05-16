#include <iostream>
#include <string>


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
    float Price(std::string thing)
    {
        if (thing == "apples")
            return 2.50;
        else if (thing == "watermelons")
            return 4.99;
        else if (thing == "gaming RGB mouses")
            return 39.99;
        else if (thing == "slaves")
            return 449.50;
        else if (thing == "grapes")
            return 3.50;
        else if (thing == "shoes")
            return 50;
        else if (thing == "helmets")
            return 25.55;
        else if (thing == "cats")
            return 1250;
        else if (thing == "dogs")
            return 125;
        else if (thing == "hamsters")
            return 8;
        else if (thing == "candies")
            return 0.39;
        else if (thing == "pineapples")
            return 3.45;
        else if (thing == "bottles of beer")
            return 5.50;
        else if (thing == "bottles of vodka")
            return 21.50;
        else if (thing == "pierogies")
            return 1.39;
        else if (thing == "winRAR licenses")
            return 35;
        else if (thing == "bottles of Coca-Cola")
            return 4;
        else if (thing == "T-shirts")
            return 23;
        else if (thing == "bananas")
            return 3;
        else if (thing == "Nvidia 1080s")
            return 799;
        else
            return 21.37;
        
    }
    float Answer(float price, int amount)
    {
        return price * amount;
    }
}