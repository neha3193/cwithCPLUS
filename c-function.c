#include "Fred.h"
#include "stdio.h"
void c_function(Fred* fred)
{
      printf("start:%s\n",__func__);
      cplusplus_callback_function(fred);
      printf("end:%s\n",__func__);
}
