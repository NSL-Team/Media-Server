#include "../utils.h"

#pragma once

struct request
{
    char bName[MAX_BASE_NAME_LEN];
    char method[MAX_METHOD_LEN];
    char * payload;
};