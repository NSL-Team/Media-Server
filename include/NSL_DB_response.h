#include "utils.h"
#include <stdint.h>

#pragma once

typedef struct
{
    NSLStatus status;       // status code
    uint16_t payloadSize;   // payload size
    char * payload;         // payload
} NSLDBResponse;

// Initialize struct fields with zeros
void NSL_DB_init_response             (NSLDBResponse *);

// Assemble response and payload data
void NSL_DB_assemble_response         (const NSLDBResponse *, char *);
// char * must be freed after calling this function
void NSL_DB_assemble_response_payload (const NSLDBResponse *, char **);


// Parse response and payload data
void NSL_DB_parse_response            (const char *, NSLDBResponse *);
void NSL_DB_parse_response_payload    (const char *, NSLDBResponse *);