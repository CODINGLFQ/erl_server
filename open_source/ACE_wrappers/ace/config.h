#ifndef ACE_CONFIG_H
#define ACE_CONFIG_H

#ifdef WIN32
#include "ace/config-win32.h"
#else
#include "ace/config-linux.h"
#endif

// ��ʾACE_OutputCDR��write��ʱ��ύ���ֽ���
#define ACE_ENABLE_SWAP_ON_WRITE

// CDR���ڴ��ֽڲ�����
#define ACE_LACKS_CDR_ALIGNMENT

#endif

