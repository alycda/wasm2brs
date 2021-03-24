#include "controlled_time.h"
#include <sys/time.h>

int internal_date_initialized = 0;

duk_double_t internal_date_get_now(void*) {
    if (!internal_date_initialized) {
        return 0.0;
    }
    struct timeval tv;
    duk_double_t d;
    if (gettimeofday(&tv, NULL) != 0) {
        return 0.0;
    }
    /* As of Duktape 2.2.0 allow fractions. */
    d = ((duk_double_t) tv.tv_sec) * 1000.0 +
    ((duk_double_t) tv.tv_usec) / 1000.0;
    return d;
}