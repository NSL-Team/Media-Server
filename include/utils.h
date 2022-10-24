#pragma once

// ⚠️ 
// 🚧 
// ✅

#include <stdint.h>
#include <stddef.h>

#define NSL_DB_MAX_BASE_NAME_LEN 20
#define NSL_DB_MAX_METHOD_LEN 10

// 🚧 StatusCodes
typedef enum
{
    SUCCESS              = 0,
    ERROR_ON_FETCH       = 1,
    ERROR_ON_REMOVE      = 2,
    ERROR_BASE_NOT_FOUND = 3,
    ERROR_BAD_REQUEST    = 4,
    ERROR_BAD_RESPONSE   = 5,
} NSLStatus;

