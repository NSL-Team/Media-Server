#include "../utils.h"
#include "status.h"

#pragma once

struct response
{
    status s; // status code
    char* payload; 
};

