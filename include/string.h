#ifndef STRING_H
#define STRING_H

#include "types.h"
unint16 strlength(string ch)
{
   unint16 i=1;
   while(ch[i++]);
   return --i;


}
