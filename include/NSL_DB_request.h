#include "utils.h"

#pragma once

// 20 bytes of string (base name), 10 bytes of string (method len), 2 bytes uint64_t (payload size)

typedef struct 
{
    char baseName[NSL_DB_MAX_BASE_NAME_LEN];
    char method[NSL_DB_MAX_METHOD_LEN];
    uint16_t payloadSize;   
    char * payload;    
} NSLDBRequest;

void NSL_DB_init_request(NSLDBRequest *);
void NSL_DB_parse_request(const char *, NSLDBRequest *);
void NSL_DB_parse_request_payload(const char *, NSLDBRequest *);