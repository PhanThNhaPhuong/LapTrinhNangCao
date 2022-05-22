void rFilter(char *s) {
     int len = strlen(s) - 1;
     while(s[len] < 65 || s[len] > 122 || s[len] > 90 && s[len] <97) {
         s[len] = '_';
         len--;
     }
}
