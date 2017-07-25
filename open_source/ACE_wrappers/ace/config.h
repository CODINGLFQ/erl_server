#ifndef ACE_CONFIG_H
#define ACE_CONFIG_H

#ifdef WIN32
#include "ace/config-win32.h"
#else
#include "ace/config-linux.h"
#endif

// 表示ACE_OutputCDR在write的时候会交换字节序
#define ACE_ENABLE_SWAP_ON_WRITE

// CDR的内存字节不对齐
#define ACE_LACKS_CDR_ALIGNMENT

#endif

