#include "cache.h"

int setup_word;
void cache_setup_operation(bool i_cache_en, bool i_cache_lock, bool d_cache_en, bool d_cache_lock)
{
 
 if(!i_cache_en && i_cache_lock)
  printf("Error");
   //Error();
   
 if(!d_cache_en && d_cache_lock)
  printf("Error");
   //Error();
 if(i_cache_en)
  setup_word += ICACHE_EN;
 if(i_cache_lock)
  setup_word += ICACHE_LOCK;
 if(d_cache_en)
  setup_word += DCACHE_EN;
 if(d_cache_lock)
  setup_word += DCACHE_LOCK;
  
// Enter Cache Key
  CacheKey();
  pADI_FLASH_CACHE ->CACHESETUP = setup_word;
  
}


