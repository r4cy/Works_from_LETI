#ifndef LOG_OF_FILE_H_
#define LOG_OF_FILE_H_

#include "logger.h"

#include <iostream>
#include <fstream>

class Log_of_file: public Logger{
private:
    std::ofstream file;

public:
    Logger();
    void log(Massage* massage) override;
    ~Logger();

};


#endif
