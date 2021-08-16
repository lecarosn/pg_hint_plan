/*-------------------------------------------------------------------------
 *
 * normalize_query.h
 *		Normalize query string.
 *
 * This header file is created from pg_stat_statements.c to implement
 * normalization of query string.
 *
 * Portions Copyright (c) 2008-2020, PostgreSQL Global Development Group
 */
#ifndef NORMALIZE_QUERY_H
#define NORMALIZE_QUERY_H

#include "utils/queryjumble.h"

/*
 * Struct for tracking locations/lengths of constants during normalization
 */
typedef LocationLen pgssLocationLen;

/*
 * Working state for computing a query jumble and producing a normalized
 * query string
 */
typedef JumbleState pgssJumbleState;

static char *
generate_normalized_query(pgssJumbleState *jstate, const char *query,
						  int query_loc, int *query_len_p, int encoding);
static void JumbleQueryInternal(pgssJumbleState *jstate, Query *query);

#define JUMBLE_SIZE		1024

#endif	/* NORMALIZE_QUERY_H */
