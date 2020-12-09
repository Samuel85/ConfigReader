# ConfigReader

This is a simple config reader created for my "Abbey" repository.

All tokens and values in the file "config.txt", are parsed and stored in memory using a single linked list for easy access.

# Example

    ConfigReader *configreader = new ConfigReader("config.txt");
    configreader->parse();

    int language = stoi(configreader->getValue("LANGUAGE"));    
    ...
