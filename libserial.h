#ifndef _LIBSERIAL_H
#define _LIBSERIAL_H

#include <string.h> // string function definitions
#include <unistd.h> // UNIX standard function definitions
#include <fcntl.h> // File control definitions
#include <termios.h> // POSIX terminal control definitionss
#include <time.h>   // time calls
#include <errno.h>
#include <stdio.h>
#include "libprotocol.h"
#ifndef char_for_array
  #define char_for_array 10
#endif
//--------------------------------------------------------
int open_serial(const char *port, speed_t speed);
//-----------------------------------------
void close_serial(int port);
//-----------------------------------------
void write_serial(int port,char data[]);
//------------------------------------------
void send_data_serial(int port, char (*data_vstup)[char_for_array],int pocet_dat);
//------------------------------------------
void receive_data_serial(int port, char (*prijem)[char_for_array]);
//------------------------------------------

#endif