char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == (char)ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}
int main() {
      char str1[100] = "hello my name is vidhi";
     char str2[100] = "how are you";
     char *chr = my_strchr(str1, 'o');
    printf("First occurrence of 'o' in str1: %s\n", chr);
      
      return 0 ;
      }
                   
