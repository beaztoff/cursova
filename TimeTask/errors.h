#ifndef ERRORS_H
#define ERRORS_H
#include "qstring.h"

class errors
{
public:
    errors();
    message(int printX);
    messageArguments(int printX, QString printY);
};

#endif // ERRORS_H
