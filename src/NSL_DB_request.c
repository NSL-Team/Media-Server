#include "../include/NSL_DB_request.h"
#include "../include/utils.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void NSL_DB_init_request (NSLDBRequest * req)
{
    memset((void *)req, 0, sizeof(NSLDBRequest));
}

void NSL_DB_alloc_payload (NSLDBRequest * req)
{
    req->payload = (char *)malloc (req->payloadSize);
}

void NSL_DB_free_payload (NSLDBRequest * req)
{
    free(req->payload);
}

void NSL_DB_parse_request (const char * data, NSLDBRequest * req)
{
    NSL_DB_init_request(req);

    strncpy(req->baseName, data, NSL_DB_MAX_BASE_NAME_LEN);
    strncpy(req->method, data + 20, NSL_DB_MAX_METHOD_LEN);
    req->payloadSize = *(uint16_t *)(data + 30);
}
// req->payload must be freed using NSL_DB_free_payload() function
void NSL_DB_parse_request_payload (const char * data, NSLDBRequest * req)
{
    NSL_DB_alloc_payload(req);
    strncpy(req->payload, data, req->payloadSize);
}
// data pointer should be 32 bytes long
void NSL_DB_assemble_request (const NSLDBRequest * req, char * data)
{
    strncpy(data, req->baseName, NSL_DB_MAX_BASE_NAME_LEN);
    strncpy(data + 20, req->method, NSL_DB_MAX_METHOD_LEN);
    *(uint16_t *)(data + 30) = req->payloadSize;
}
// 
void NSL_DB_assemble_request_payload (const NSLDBRequest * req, char * data)
{

} 