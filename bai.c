#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/statvfs.h>

#define void1 "     ____    "
#define void2 "   'pfPfp.%  "
#define void3 " //  _._  \\\\ "
#define void4 " UU |===| UU "
#define void5 " \\\\  ^~^  // "
#define void6 "  `0PpppP'   "
#define void7 "    `````    "

#define cubuk "│"
#define ustcubuk "╭─────────╮"
#define altcubuk "╰─────────╯"
#define bosluk "  "
#define bosluk2 "             "

int main() {

   

   char hostname[22];
   gethostname(hostname, sizeof(hostname));

   char* uname = getenv("USER");
   char* uptme = getenv("UPTIME");
   char* disk = getenv("DISK");
   char* memo = getenv("MEM");

   printf("%s%s \n", void1,ustcubuk);
   printf("%s%s  user%s%s %s \n", void2,cubuk,bosluk,cubuk,uname);
   printf("%s%s 󰟀 host%s%s %s \n", void3, cubuk, bosluk, cubuk, hostname);
   printf("%s%s  upti%s%s %s \n", void4,cubuk,bosluk,cubuk,uptme);
   printf("%s%s  disk%s%s %s \n", void5,cubuk,bosluk,cubuk,disk);
   printf("%s%s  memo%s%s %s \n", void6,cubuk,bosluk,cubuk,memo);
   printf("%s%s \n", bosluk2,altcubuk);
   return 0;
}
