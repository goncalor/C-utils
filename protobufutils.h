#ifndef _PROTOBUFUTILS_H
#define _PROTOBUFUTILS_H

int PROTOsend(int fd, char *message, unsigned len);
int PROTOrecv(int fd, char **message);

#endif
