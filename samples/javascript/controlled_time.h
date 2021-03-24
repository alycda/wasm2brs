#include "duktape/duktape.h"

// The primary purpose is to allow us to create a JavaScript context
// and parse ahead of time by evaluating code in a WASM VM on your PC.
extern
#ifdef __cplusplus
"C"
#endif
duk_double_t internal_date_get_now(void*);

extern int internal_date_initialized;