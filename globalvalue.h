#ifndef GLOBALVALUE_H
#define GLOBALVALUE_H
#include <vector>
#include "stonelabel.h"
extern std::vector<std::vector<StoneLabel*>> stones;
extern int difficulty;
class globalValue
{
public:
    globalValue();
};

#endif // GLOBALVALUE_H
