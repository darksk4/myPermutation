#include<iostream>
#include<string>
#include<cstdlib>

void printSet(std::string x, std::string word, int c, int level)
{
    x = x + word[c];
    if(x.length() == level)
    {
        std::cout << x << std::endl;
        return;
    }
    for(int counter = 0 ; counter < word.length() ; counter++)
        printSet(x, word, counter, level);
}

void print(std::string w, int level)
{
    std::string words = "";
    for(int counter = 0 ; counter < w.length() ; counter++)
        printSet(words, w, counter, level);
}

int main(int argc, char** argv)
{
    if(argc != 3)
        exit(1);
    std::string words = argv[1];
    int level = atoi(argv[2]);


    std::cout << words <<  " " << level << std::endl;



    print(words, level);
    return 0;
}
