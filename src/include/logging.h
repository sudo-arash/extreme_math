#ifndef LOGGING_H
#define LOGGING_H

#include <string>

extern bool debugMode;

void logInformation(int level, const std::string& information);

#endif
