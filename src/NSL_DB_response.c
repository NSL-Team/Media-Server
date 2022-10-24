#include "../include/NSL_DB_response.h"
#include <stdint.h>
#include <string.h>

void NSL_DB_init_response (NSLDBResponse * res)
{
    memset((void*)res, 0, sizeof(NSLDBResponse));
}

void NSL_DB_assemble_response (const NSLDBResponse * res, char * data)
{
        
}
// char * must be freed after calling this function
void NSL_DB_assemble_response_payload (const NSLDBResponse * res, char ** data)
{

}