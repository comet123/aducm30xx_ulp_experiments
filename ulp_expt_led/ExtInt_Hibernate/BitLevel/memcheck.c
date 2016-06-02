
#include "util.h"

void _MemCheckMask(uint32_t pc_addr, uint32_t *reg_addr, uint32_t expect_value, uint32_t mask)
{
    uint32_t read_value;        // variable to hold value read

    read_value = *reg_addr;     // read only once
    if ((read_value & mask) != (expect_value & mask)) {
        // Both the expected value and the actual value are bit masked.

        // increment testbench error count
        //   and let it know where the error occurred
        _message(pc_addr, MEM_ERROR, "Memory check failed\n");

        // give additional information to testbench 
        //    to describe more about the error

        TB->DATA = (int)reg_addr;
        TB->DATA = (read_value   & mask);
        TB->DATA = (expect_value & mask);
    }
}

void _MemCheck(uint32_t pc_addr, uint32_t *reg_addr, uint32_t expect_value)
{
    uint32_t read_value;        // variable to hold value read

    read_value = *reg_addr;     // read only once
    if(read_value != expect_value) {

        // increment testbench error count
        //   and let it know where the error occurred
        _message(pc_addr, MEM_ERROR, "Memory check failed\n");

        // give additional information to testbench 
        //    to describe more about the error

        TB->DATA = (int)reg_addr;
        TB->DATA = read_value;
        TB->DATA = expect_value;
    }
}

void _MemCheck16(uint32_t pc_addr, uint16_t *reg_addr, uint16_t expect_value)
{
    uint16_t read_value;        // variable to hold value read

    read_value = *reg_addr;     // read only once
    if(read_value != expect_value) {

        // increment testbench error count
        //   and let it know where the error occurred
        _message(pc_addr, MEM_ERROR, "Memory check failed\n");

        // give additional information to testbench 
        //    to describe more about the error

        TB->DATA = (int)reg_addr;
        TB->DATA = read_value;
        TB->DATA = expect_value;
    }
}

void _MemCheck8(uint32_t pc_addr, uint8_t *reg_addr, uint8_t expect_value)
{
    uint8_t read_value; // variable to hold value read

    read_value = *reg_addr;     // read only once
    if(read_value != expect_value) {

        // increment testbench error count
        //   and let it know where the error occurred
        _message(pc_addr, MEM_ERROR, "Memory check failed\n");

        // give additional information to testbench 
        //    to describe more about the error

        TB->DATA = (int)reg_addr;
        TB->DATA = read_value;
        TB->DATA = expect_value;
    }
}

