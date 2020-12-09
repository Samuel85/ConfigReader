// Uncomment this flag to get more info
//#define _DEBUGMODE_

#include "configreader.h"

int main()
{
    ConfigReader *configreader = new ConfigReader("config.txt");
    configreader->parse();
    
    int language = stoi(configreader->getValue("LANGUAGE"));    
    string save0 = configreader->getValue("SAVE0");
    
    delete configreader;
        
    std::cout << "language=" << language << endl;
    std::cout << "SAVE0=" << save0 << endl;
    
    return 0;
}
