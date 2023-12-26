#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main(int argc, char *argv[]) {
  struct winsize ws;
  ioctl( STDOUT_FILENO, TIOCGWINSZ, &ws);
  printf("Width  = %d\n", ws.ws_col);
  printf("Height = %d\n", ws.ws_row);

  return 0;
}