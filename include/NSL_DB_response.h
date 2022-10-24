#include "utils.h"
#include <stdint.h>

#pragma once

typedef struct
{
    NSLStatus status;       // status code
    uint16_t payloadSize;   // payload size
    char * payload;         // payload
} NSLDBResponse;

void NSL_DB_init_response             (NSLDBResponse *);
void NSL_DB_assemble_response         (const NSLDBResponse *, char *);
// char * must be freed after calling this function
void NSL_DB_assemble_response_payload (const NSLDBResponse *, char **);