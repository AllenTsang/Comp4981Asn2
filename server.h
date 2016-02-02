#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "msg.h"

int msq_id;

int main();
void handle_client();
void cleanup(int signo);

#endif