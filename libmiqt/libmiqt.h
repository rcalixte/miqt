#ifndef MIQT_BINDING_H
#define MIQT_BINDING_H

#include <string.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string {
    size_t len;
    char* data;
};

struct miqt_array {
    size_t len;
    void* data;
};

struct miqt_string* miqt_strdup(const char* src, size_t len);

typedef const char const_char;

#ifdef __cplusplus
}
#endif

#endif