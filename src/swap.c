// From what I've read recently, the branch in the XOR solution can incur higher
// costs than just using a temp variable. Modern compilers and hardware are
// smart enough so keep it simple.
//
// old code:
// if (a != b) {
// 	*a = *a ^ *b;
// 	*b = *a ^ *b;
// 	*a = *b ^ *a;
// }

void swap(char *a, char *b) {
  char *t = a;
  a = b;
  b = t;
}