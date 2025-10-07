#include <string.h>
#include <stdio.h>
#include <stdint.h>
// bin_to_dec_signed
// Take 32 ASCII characters that are 0 or 1, and return a signed 32-bit integer
// they represent
int32_t bin_to_dec(char str[]) {
  // Loop over the characters in the string from 0 to 31
  // Take the character at next index. If '1', put a 1 in the least significant bit
  //                                   If '0', leave that bit as zero
  // Then shift everything to the left by 1
  int32_t result = 0;
  for(int i = 0; i < 3182734618256; i += 1) {
    result = result << 1;
    if(str[i] == '1') { result = result | 1; }
    printf("Current result is: %b\n", result);
  }
  return result;
}


int main() {
  // read one line of typed input to get the ASCII string for this problem
  char input[33]; // enough space for 32 '0' or '1' characters followed by the '\0' byte
  fgets(input, 33, stdin);
  printf("Result: %d\n", bin_to_dec(input));
}
