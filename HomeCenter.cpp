#include "Arduino.h"

#include "config.h"

char *storePrintf (const char *fmt, ...)
{
    va_list arg;
    va_start(arg, fmt);
    size_t sz = snprintf(NULL, 0, fmt, arg);
    char *buf = (char *)malloc(sz + 1);
    vsprintf(buf, fmt, arg);
    va_end (arg);
    return buf;
}

/**
 * Debuga a aplicação
 */
void debug(char *msg)
{
	// Verifica se está debugando
	#if defined(HC_SERIAL_DEBUG)
		Serial.println(msg);
	#endif
}
