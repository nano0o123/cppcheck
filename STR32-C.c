nclude <string.h>
 
enum { NTBS_SIZE = 32 };
 
void func(const char *source) {
  char ntbs[NTBS_SIZE];
 
  ntbs[sizeof(ntbs) - 1] = '\0';
  strncpy(ntbs, source, sizeof(ntbs));
}
