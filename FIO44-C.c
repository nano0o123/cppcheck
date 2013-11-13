#include <stdio.h>
#include <string.h>
 
enum { NO_FILE_POS_VALUES = 3 };
 
int opener(FILE *file) {
  int rc;
  fpos_t offset;
 
  memset(&offset, 0, sizeof(offset));
 
  if (file == NULL) { return -1; }
 
  /* Read in data from file */
 
  rc = fsetpos(file, &offset);
  if (rc != 0 ) { return rc; }
 
  return 0;
}
