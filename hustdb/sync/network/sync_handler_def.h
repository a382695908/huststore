////////////////////////////////////////////////////////////////////////////////
// NOTE : Generated by libevhtp.py. It is NOT supposed to modify this file.
////////////////////////////////////////////////////////////////////////////////
#ifndef __sync_handler_def_20160531152914_h__
#define __sync_handler_def_20160531152914_h__

#include "sync_network_utils.h"

struct sync_status_ctx_t
{
    uint32_t backend_count;

    bool has_backend_count;

    sync_status_ctx_t(evhtp_query_t * htp_query);
};

#endif // __sync_handler_def_20160531152914_h__