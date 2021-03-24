#include "duktape/duktape.h"
#include "duktape/duk_console.h"
#include "controlled_time.h"
#include <string>

const char* initial_js = 
#include "react.h"
;

duk_context* ctx = nullptr;
__attribute__((visibility("default"))) extern "C" void pre_initialize() {
    if (ctx) {
        return;
    }
    ctx = duk_create_heap_default();
    duk_console_init(ctx, 0);
    duk_eval_string(ctx, initial_js);
    internal_date_initialized = 1;
}

int main(void) {
    pre_initialize();
    printf("Context: %p\n", ctx);

    std::string input;
    FILE* fp = fopen("pkg:/source/test.js", "r");
    if (fp) {
        fseek(fp, 0, SEEK_END);
        long size = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        input.resize(size);
        fread((char*)input.data(), 1, size, fp);
    } else {
        printf("Unale to open file\n");
    }

    duk_eval_string(ctx, input.c_str());
    return 0;
}