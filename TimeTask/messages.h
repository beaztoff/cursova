#ifndef MESSAGES_H
#define MESSAGES_H
#include "qstring.h"

class messages
{
public:
    messages();
    message(int printX);
    messageArguments(int printX, QString printY);
};

#endif // MESSAGES_H
