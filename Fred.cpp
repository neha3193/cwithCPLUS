#include "Fred.h"
#include <stdio.h>
Fred::Fred() : a_(0) { }
void Fred::wilma(int a) { }
Fred* cplusplus_callback_function(Fred* fred)
{
      //std::cout << "start:fred"<< std::endl;
      printf("start:%s\n",__func__);
      fred->wilma(123);
      //std::cout << "end:fred"<< std::endl;
      
        return fred;
}
