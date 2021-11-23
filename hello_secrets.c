#include <stdio.h>

/*
hello_secrets.h contains information that must not be committed to a public
repo. It should contain a definition of "hello_msg" such as
const char *hello_msg = "this is a secret\n";
*/
#include "hello_secrets.h"

// gcc -Wall -o hello_secrets hello_secrets.c

int main(int argc, char **argv)
{
    printf(hello_msg);
}