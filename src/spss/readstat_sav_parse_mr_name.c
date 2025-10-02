
#line 1 "src/spss/readstat_sav_parse_mr_name.rl"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../readstat.h"
#include "../readstat_malloc.h"


#line 11 "src/spss/readstat_sav_parse_mr_name.c"
static const char _mr_extractor_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	3, 1, 4, 2, 2, 4, 2, 3, 
	4, 2, 4, 2, 2, 4, 3
};

static const short _mr_extractor_key_offsets[] = {
	0, 0, 1, 5, 9, 12, 16, 18, 
	23, 31, 38, 45, 52, 59, 66, 73, 
	78, 84, 90, 95, 99, 102, 106, 108, 
	113, 121, 128, 135, 142, 149, 156, 163, 
	168, 174, 180, 187, 194, 201, 206, 208, 
	210, 213, 217, 220, 224, 226, 231, 239, 
	246, 253, 260, 267, 274, 281, 286, 292, 
	298, 305, 312, 319, 324, 326, 331, 336
};

static const char _mr_extractor_trans_keys[] = {
	61, 61, 67, 68, 69, 32, 61, 48, 
	57, 61, 48, 57, 32, 61, 48, 57, 
	0, 61, 0, 32, 61, 9, 13, 0, 
	32, 61, 67, 68, 69, 9, 13, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 48, 57, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	48, 57, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 0, 32, 
	49, 61, 9, 13, 0, 32, 49, 61, 
	9, 13, 0, 32, 61, 9, 13, 32, 
	61, 48, 57, 61, 48, 57, 32, 61, 
	48, 57, 0, 61, 0, 32, 61, 9, 
	13, 0, 32, 61, 67, 68, 69, 9, 
	13, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 48, 57, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	0, 32, 49, 61, 9, 13, 0, 32, 
	49, 61, 9, 13, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	48, 57, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 32, 61, 
	49, 61, 32, 49, 61, 32, 61, 48, 
	57, 61, 48, 57, 32, 61, 48, 57, 
	0, 61, 0, 32, 61, 9, 13, 0, 
	32, 61, 67, 68, 69, 9, 13, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 48, 57, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	48, 57, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 0, 32, 
	49, 61, 9, 13, 0, 32, 49, 61, 
	9, 13, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 32, 61, 0, 32, 
	61, 9, 13, 0, 32, 61, 9, 13, 
	0, 32, 61, 9, 13, 0
};

static const char _mr_extractor_single_lengths[] = {
	0, 1, 4, 2, 1, 2, 2, 3, 
	6, 3, 3, 3, 3, 3, 3, 3, 
	4, 4, 3, 2, 1, 2, 2, 3, 
	6, 3, 3, 3, 3, 3, 3, 3, 
	4, 4, 3, 3, 3, 3, 2, 2, 
	3, 2, 1, 2, 2, 3, 6, 3, 
	3, 3, 3, 3, 3, 3, 4, 4, 
	3, 3, 3, 3, 2, 3, 3, 3
};

static const char _mr_extractor_range_lengths[] = {
	0, 0, 0, 1, 1, 1, 0, 1, 
	1, 2, 2, 2, 2, 2, 2, 1, 
	1, 1, 1, 1, 1, 1, 0, 1, 
	1, 2, 2, 2, 2, 2, 2, 1, 
	1, 1, 2, 2, 2, 1, 0, 0, 
	0, 1, 1, 1, 0, 1, 1, 2, 
	2, 2, 2, 2, 2, 1, 1, 1, 
	2, 2, 2, 1, 0, 1, 1, 1
};

static const short _mr_extractor_index_offsets[] = {
	0, 1, 3, 8, 12, 15, 19, 22, 
	27, 35, 41, 47, 53, 59, 65, 71, 
	76, 82, 88, 93, 97, 100, 104, 107, 
	112, 120, 126, 132, 138, 144, 150, 156, 
	161, 167, 173, 179, 185, 191, 196, 199, 
	202, 206, 210, 213, 217, 220, 225, 233, 
	239, 245, 251, 257, 263, 269, 274, 280, 
	286, 292, 298, 304, 309, 312, 317, 322
};

static const char _mr_extractor_indicies[] = {
	0, 1, 0, 1, 2, 3, 4, 0, 
	5, 1, 6, 0, 1, 7, 0, 8, 
	1, 7, 0, 10, 11, 9, 12, 13, 
	11, 13, 9, 12, 13, 11, 14, 15, 
	16, 13, 9, 12, 17, 11, 13, 18, 
	9, 12, 13, 11, 13, 19, 9, 12, 
	20, 11, 13, 19, 9, 12, 21, 11, 
	13, 22, 9, 12, 13, 11, 13, 23, 
	9, 12, 24, 11, 13, 23, 9, 12, 
	25, 11, 13, 9, 12, 13, 26, 11, 
	13, 9, 12, 27, 28, 11, 13, 9, 
	12, 27, 11, 13, 9, 29, 1, 30, 
	0, 1, 31, 0, 32, 1, 31, 0, 
	34, 35, 33, 36, 37, 35, 37, 33, 
	36, 37, 35, 38, 39, 40, 37, 33, 
	36, 41, 35, 37, 42, 33, 36, 37, 
	35, 37, 43, 33, 36, 20, 35, 37, 
	43, 33, 36, 44, 35, 37, 45, 33, 
	36, 37, 35, 37, 46, 33, 36, 47, 
	35, 37, 46, 33, 36, 48, 35, 37, 
	33, 36, 37, 49, 35, 37, 33, 36, 
	50, 51, 35, 37, 33, 36, 52, 35, 
	37, 53, 33, 36, 37, 35, 37, 54, 
	33, 36, 55, 35, 37, 54, 33, 36, 
	50, 35, 37, 33, 56, 1, 0, 57, 
	1, 0, 58, 59, 1, 0, 60, 1, 
	58, 0, 1, 61, 0, 62, 1, 61, 
	0, 64, 65, 63, 66, 67, 65, 67, 
	63, 66, 67, 65, 68, 69, 70, 67, 
	63, 66, 71, 65, 67, 72, 63, 66, 
	67, 65, 67, 73, 63, 66, 20, 65, 
	67, 73, 63, 66, 74, 65, 67, 75, 
	63, 66, 67, 65, 67, 76, 63, 66, 
	47, 65, 67, 76, 63, 66, 77, 65, 
	67, 63, 66, 67, 78, 65, 67, 63, 
	66, 79, 80, 65, 67, 63, 66, 81, 
	65, 67, 82, 63, 66, 67, 65, 67, 
	83, 63, 66, 84, 65, 67, 83, 63, 
	66, 79, 65, 67, 63, 58, 1, 0, 
	12, 13, 11, 13, 9, 36, 37, 35, 
	37, 33, 66, 67, 65, 67, 63, 0
};

static const char _mr_extractor_trans_targs[] = {
	1, 2, 3, 19, 38, 4, 3, 5, 
	6, 7, 61, 8, 61, 7, 9, 12, 
	15, 10, 9, 11, 7, 13, 12, 14, 
	7, 16, 17, 12, 18, 20, 19, 21, 
	22, 23, 62, 24, 62, 23, 25, 28, 
	31, 26, 25, 27, 29, 28, 30, 23, 
	32, 33, 34, 37, 35, 34, 36, 23, 
	39, 40, 41, 60, 42, 43, 44, 45, 
	63, 46, 63, 45, 47, 50, 53, 48, 
	47, 49, 51, 50, 52, 54, 55, 56, 
	59, 57, 56, 58, 45
};

static const char _mr_extractor_trans_actions[] = {
	0, 1, 3, 3, 3, 5, 0, 0, 
	7, 0, 0, 1, 9, 9, 3, 3, 
	3, 11, 0, 0, 14, 17, 0, 0, 
	20, 9, 0, 9, 0, 5, 0, 0, 
	7, 0, 0, 1, 9, 9, 3, 3, 
	3, 11, 0, 0, 11, 0, 0, 14, 
	9, 0, 9, 0, 17, 0, 0, 20, 
	0, 0, 0, 0, 5, 0, 7, 0, 
	0, 1, 9, 9, 3, 3, 3, 11, 
	0, 0, 11, 0, 0, 9, 0, 9, 
	0, 11, 0, 0, 14
};

static const int mr_extractor_start = 0;

static const int mr_extractor_en_main = 0;


#line 122 "src/spss/readstat_sav_parse_mr_name.rl"


readstat_error_t extract_mr_data(const char *line, mr_set_t *result) {
    readstat_error_t retval = READSTAT_OK;

    // Variables needed for Ragel operation
    int cs = 0;
    char *p = (char *)line;
    char *start = p;
    char *pe = p + strlen(p) + 1;

    // Variables needed for passing Ragel intermediate results
    char mr_type = '\0';
    int mr_counted_value = -1;
    int mr_subvar_count = 0;
    char **mr_subvariables = NULL;
    char *mr_name = NULL;
    char *mr_label = NULL;

    // Execute Ragel finite state machine (FSM)
    
#line 207 "src/spss/readstat_sav_parse_mr_name.c"
	{
	cs = mr_extractor_start;
	}

#line 143 "src/spss/readstat_sav_parse_mr_name.rl"
    
#line 214 "src/spss/readstat_sav_parse_mr_name.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
_resume:
	_keys = _mr_extractor_trans_keys + _mr_extractor_key_offsets[cs];
	_trans = _mr_extractor_index_offsets[cs];

	_klen = _mr_extractor_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _mr_extractor_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _mr_extractor_indicies[_trans];
	cs = _mr_extractor_trans_targs[_trans];

	if ( _mr_extractor_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _mr_extractor_actions + _mr_extractor_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 10 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        mr_name = (char *)readstat_malloc(p - start + 1);
        if (mr_name == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(mr_name, start, p - start);
        mr_name[p - start] = '\0';
    }
	break;
	case 1:
#line 20 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        mr_type = *p;
        start = p + 1;
    }
	break;
	case 2:
#line 25 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        int n_cv_digs = p - start;
        char *n_dig_str = (char *)readstat_malloc(n_cv_digs + 1);
        if (n_dig_str == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(n_dig_str, start, n_cv_digs);
        n_dig_str[n_cv_digs] = '\0';
        int n_digs = strtol(n_dig_str, NULL, 10);
        free(n_dig_str);
        if (n_digs != 0) {
            char *cv = (char *)readstat_malloc(n_digs + 1);
            if (cv == NULL) {
                retval = READSTAT_ERROR_MALLOC;
                goto cleanup;
            }
            memcpy(cv, p + 1, n_digs);
            cv[n_digs] = '\0';
            mr_counted_value = strtol(cv, NULL, 10);
            free(cv);
            p = p + 1 + n_digs;
            start = p + 1;
        }
        else {
            mr_counted_value = -1;
        }
    }
	break;
	case 3:
#line 54 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        char *lbl_len_str = (char *)readstat_malloc(p - start + 1);
        if (lbl_len_str == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(lbl_len_str, start, p - start);
        lbl_len_str[p - start] = '\0';
        int len = strtol(lbl_len_str, NULL, 10);
        free(lbl_len_str);
        mr_label = (char *)readstat_malloc(len + 1);
        if (mr_label == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(mr_label, p + 1, len);
        mr_label[len] = '\0';
        p = p + 1 + len;
        start = p + 1;
    }
	break;
	case 4:
#line 75 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        int len = p - start;
        char *subvar = (char *)readstat_malloc(len + 1);
        if (subvar == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(subvar, start, len);
        subvar[len] = '\0';
        start = p + 1;    
        char **new_subvariables = readstat_realloc(mr_subvariables, sizeof(char *) * (mr_subvar_count + 1));
        if (new_subvariables == NULL) {
            free(subvar);
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        mr_subvariables = new_subvariables;
        mr_subvariables[mr_subvar_count++] = subvar;
    }
	break;
#line 381 "src/spss/readstat_sav_parse_mr_name.c"
		}
	}

_again:
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	}

#line 144 "src/spss/readstat_sav_parse_mr_name.rl"

    // Check if FSM finished successfully
    if (cs < 61 || p != pe) {
        retval = READSTAT_ERROR_BAD_MR_STRING;
        goto cleanup;
    }

    (void)mr_extractor_en_main;

    // Assign parsed values to output parameter
    result->name = mr_name;
    result->label = mr_label;
    result->type = mr_type;
    result->counted_value = mr_counted_value;
    result->subvariables = mr_subvariables;
    result->num_subvars = mr_subvar_count;
    if (result->type == 'D' || result->type == 'E') {
        result->is_dichotomy = 1;
    }

cleanup:
    if (retval != READSTAT_OK) {
        if (mr_subvariables != NULL) {
            for (int i = 0; i < mr_subvar_count; i++) {
                if (mr_subvariables[i] != NULL) free(mr_subvariables[i]);
            }
            free(mr_subvariables);
        }
        if (mr_name != NULL) free(mr_name);
        if (mr_label != NULL) free(mr_label);
    }
    return retval;
}


readstat_error_t parse_mr_line(const char *line, mr_set_t *result) {
    *result = (mr_set_t){0};
    return extract_mr_data(line, result);
}


#line 433 "src/spss/readstat_sav_parse_mr_name.c"
static const char _mr_parser_actions[] = {
	0, 1, 0
};

static const char _mr_parser_key_offsets[] = {
	0, 0, 1, 2, 4
};

static const char _mr_parser_trans_keys[] = {
	36, 10, 0, 10, 10, 0
};

static const char _mr_parser_single_lengths[] = {
	0, 1, 1, 2, 1
};

static const char _mr_parser_range_lengths[] = {
	0, 0, 0, 0, 0
};

static const char _mr_parser_index_offsets[] = {
	0, 0, 2, 4, 7
};

static const char _mr_parser_indicies[] = {
	0, 1, 2, 0, 3, 2, 0, 2, 
	0, 0
};

static const char _mr_parser_trans_targs[] = {
	2, 0, 3, 4
};

static const char _mr_parser_trans_actions[] = {
	0, 0, 1, 0
};

static const int mr_parser_start = 1;

static const int mr_parser_en_main = 1;


#line 217 "src/spss/readstat_sav_parse_mr_name.rl"


readstat_error_t parse_mr_string(const char *line, mr_set_t **mr_sets, size_t *n_mr_lines) {
    readstat_error_t retval = READSTAT_OK;
    int cs = 0;
    char *p = (char *)line;
    char *start = p;
    char *pe = p + strlen(p) + 1;
    *mr_sets = NULL;
    *n_mr_lines = 0;

    
#line 489 "src/spss/readstat_sav_parse_mr_name.c"
	{
	cs = mr_parser_start;
	}

#line 229 "src/spss/readstat_sav_parse_mr_name.rl"
    
#line 496 "src/spss/readstat_sav_parse_mr_name.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_keys = _mr_parser_trans_keys + _mr_parser_key_offsets[cs];
	_trans = _mr_parser_index_offsets[cs];

	_klen = _mr_parser_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _mr_parser_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _mr_parser_indicies[_trans];
	cs = _mr_parser_trans_targs[_trans];

	if ( _mr_parser_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _mr_parser_actions + _mr_parser_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 187 "src/spss/readstat_sav_parse_mr_name.rl"
	{
        char *mln = (char *)readstat_malloc(p - start);
        if (mln == NULL) {
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        memcpy(mln, start + 1, p - start);
        mln[p - start - 1] = '\0';
        mr_set_t *new_mr_sets = readstat_realloc(*mr_sets, ((*n_mr_lines) + 1) * sizeof(mr_set_t));
        if (new_mr_sets == NULL) {
            free(mln);
            retval = READSTAT_ERROR_MALLOC;
            goto cleanup;
        }
        *mr_sets = new_mr_sets;
        retval = parse_mr_line(mln, &(*mr_sets)[*n_mr_lines]);
        free(mln);
        if (retval != READSTAT_OK) {
            goto cleanup;
        }
        (*n_mr_lines)++;
        start = p + 1;
    }
	break;
#line 596 "src/spss/readstat_sav_parse_mr_name.c"
		}
	}

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	_out: {}
	}

#line 230 "src/spss/readstat_sav_parse_mr_name.rl"

    if (cs < 4 || p != pe) {
        retval = READSTAT_ERROR_BAD_MR_STRING;
        goto cleanup;
    }

    (void)mr_parser_en_main;

cleanup:
    return retval;
}
