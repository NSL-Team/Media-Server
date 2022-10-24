#include "../include/NSL_DB_request.h"
#include <stdint.h>
#include <string.h>

void NSL_DB_init_request (NSLDBRequest * req)
{
    memset((void *)req, 0, sizeof(NSLDBRequest));
}

void NSL_DB_parse_request (const char * data, NSLDBRequest * req)
{
    NSL_DB_init_request(req);

    strncpy(req->baseName, data, 20);
    strncpy(req->method, data + 20, 10);
    req->payloadSize = *(uint16_t *)(data+30);
}
// req->payload must be freed
void NSL_DB_parse_request_payload (const char * data, NSLDBRequest * req)
{
    strncpy(req->payload, data, req->payloadSize);
}