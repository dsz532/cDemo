#include <stdio.h>

char* encode(char* longUrl) {
    char* shortUrl=longUrl;
    int i=0;
    char a=0;
    while(1){
        if('0'<=shortUrl[i]&&shortUrl[i]<='z'){
            shortUrl[i]=shortUrl[i]^a;
            i++;
        } else{
            break;
        }
    }
    return shortUrl;
}

/** Decodes a shortened URL to its original URL. */
char* decode(char* shortUrl) {
    char* longUrl=shortUrl;
    int i=0;
    char a=0;
    while(1){
        if('0'<=longUrl[i]&&longUrl[i]<='z'){
            longUrl[i]=longUrl[i]^a;
            i++;
        } else{
            break;
        }
    }
    return longUrl;
}
int main (){
    char url[]="https://leetcode.com/problems/design-tinyurl";
    char* p;
    p = decode(encode(url));
    puts(p);
    return 0;
}