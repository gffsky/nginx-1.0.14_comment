
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGX_SHA1_H_INCLUDED_
#define _NGX_SHA1_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>


#if (NGX_HAVE_OPENSSL_SHA1_H)
#include <openssl/sha.h>
#else
#include <sha.h>
#endif


typedef SHA_CTX  ngx_sha1_t;


#define ngx_sha1_init    SHA1_Init	//初始化
#define ngx_sha1_update  SHA1_Update//输入数据
#define ngx_sha1_final   SHA1_Final //输出SHA1值


#endif /* _NGX_SHA1_H_INCLUDED_ */
