#include <sys/resource.h>
#include <time.h>

#include "test.h"


typedef struct {
    uint8_t s[4];
    uint8_t bit2:2;
    uint8_t bit4:2;
    uint8_t bit8:4;
} bit_t;

void bit_copy_test()
{
    uint8_t t = 86;
    bit_t A;
    memcpy(((uint8_t*)&A + sizeof(bit_t) -1),&t,1);
    printf("A.bit2: %d; A.bit4: %d A.bit8: %d\n",A.bit2,A.bit4,A.bit8);
}
int main(int argc, char *argv[])
{
    printf("===========start=============\n");

    bit_copy_test();
    
    printf("===========stop=============\n");
    return 0;
}

