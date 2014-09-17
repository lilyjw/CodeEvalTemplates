#include <stdio.h>

void doChallenge(char* line){
  printf("%s", line);
}

int main(int argc, char *argv[]) {
  FILE *f;
  char line[1024];

  f = fopen(argv[1], "r");

  while (fgets(line, 1024, f)) {

    // Skip empty lines                                                                                                                                                 
    if (line[0] == '\n') {
      continue;
    }

    doChallenge(line);
  }

  return 0;
}
