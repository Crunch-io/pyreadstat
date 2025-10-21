
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
	0, 0, 1, 5, 9, 12, 16, 21, 
	29, 36, 43, 50, 57, 62, 68, 73, 
	77, 80, 84, 89, 97, 104, 111, 118, 
	125, 130, 136, 143, 150, 155, 157, 159, 
	162, 166, 169, 173, 178, 186, 193, 200, 
	207, 214, 219, 225, 232, 239, 244, 246, 
	251, 256, 263, 270, 276, 283, 288, 293, 
	300, 307, 313, 320, 327, 332, 337, 344, 
	351, 357, 364
};

static const char _mr_extractor_trans_keys[] = {
	61, 61, 67, 68, 69, 32, 61, 48, 
	57, 61, 48, 57, 32, 61, 48, 57, 
	0, 32, 61, 9, 13, 0, 32, 61, 
	67, 68, 69, 9, 13, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	48, 57, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 0, 32, 
	49, 61, 9, 13, 0, 32, 61, 9, 
	13, 32, 61, 48, 57, 61, 48, 57, 
	32, 61, 48, 57, 0, 32, 61, 9, 
	13, 0, 32, 61, 67, 68, 69, 9, 
	13, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 48, 57, 0, 32, 61, 
	9, 13, 0, 32, 49, 61, 9, 13, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 32, 61, 49, 61, 32, 
	49, 61, 32, 61, 48, 57, 61, 48, 
	57, 32, 61, 48, 57, 0, 32, 61, 
	9, 13, 0, 32, 61, 67, 68, 69, 
	9, 13, 0, 32, 61, 9, 13, 48, 
	57, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	61, 9, 13, 0, 32, 49, 61, 9, 
	13, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 32, 61, 0, 32, 
	61, 9, 13, 0, 32, 61, 9, 13, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 48, 57, 0, 32, 
	49, 61, 9, 13, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 61, 9, 13, 
	0, 32, 61, 9, 13, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0, 32, 49, 61, 9, 
	13, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 61, 9, 13, 0, 32, 61, 9, 
	13, 0, 32, 61, 9, 13, 48, 57, 
	0, 32, 61, 9, 13, 48, 57, 0, 
	32, 49, 61, 9, 13, 0, 32, 61, 
	9, 13, 48, 57, 0, 32, 61, 9, 
	13, 48, 57, 0
};

static const char _mr_extractor_single_lengths[] = {
	0, 1, 4, 2, 1, 2, 3, 6, 
	3, 3, 3, 3, 3, 4, 3, 2, 
	1, 2, 3, 6, 3, 3, 3, 3, 
	3, 4, 3, 3, 3, 2, 2, 3, 
	2, 1, 2, 3, 6, 3, 3, 3, 
	3, 3, 4, 3, 3, 3, 2, 3, 
	3, 3, 3, 4, 3, 3, 3, 3, 
	3, 4, 3, 3, 3, 3, 3, 3, 
	4, 3, 3
};

static const char _mr_extractor_range_lengths[] = {
	0, 0, 0, 1, 1, 1, 1, 1, 
	2, 2, 2, 2, 1, 1, 1, 1, 
	1, 1, 1, 1, 2, 2, 2, 2, 
	1, 1, 2, 2, 1, 0, 0, 0, 
	1, 1, 1, 1, 1, 2, 2, 2, 
	2, 1, 1, 2, 2, 1, 0, 1, 
	1, 2, 2, 1, 2, 1, 1, 2, 
	2, 1, 2, 2, 1, 1, 2, 2, 
	1, 2, 2
};

static const short _mr_extractor_index_offsets[] = {
	0, 1, 3, 8, 12, 15, 19, 24, 
	32, 38, 44, 50, 56, 61, 67, 72, 
	76, 79, 83, 88, 96, 102, 108, 114, 
	120, 125, 131, 137, 143, 148, 151, 154, 
	158, 162, 165, 169, 174, 182, 188, 194, 
	200, 206, 211, 217, 223, 229, 234, 237, 
	242, 247, 253, 259, 265, 271, 276, 281, 
	287, 293, 299, 305, 311, 316, 321, 327, 
	333, 339, 345
};

static const char _mr_extractor_indicies[] = {
	0, 1, 0, 1, 2, 3, 4, 0, 
	5, 1, 6, 0, 1, 7, 0, 8, 
	1, 7, 0, 10, 10, 11, 10, 9, 
	10, 10, 11, 12, 13, 14, 10, 9, 
	10, 15, 11, 10, 16, 9, 10, 17, 
	11, 10, 18, 9, 10, 19, 11, 10, 
	20, 9, 10, 21, 11, 10, 22, 9, 
	10, 23, 11, 10, 9, 10, 24, 25, 
	11, 10, 9, 10, 24, 11, 10, 9, 
	26, 1, 27, 0, 1, 28, 0, 29, 
	1, 28, 0, 31, 31, 32, 31, 30, 
	31, 31, 32, 33, 34, 35, 31, 30, 
	31, 36, 32, 31, 37, 30, 31, 17, 
	32, 31, 38, 30, 31, 39, 32, 31, 
	40, 30, 31, 41, 32, 31, 42, 30, 
	31, 43, 32, 31, 30, 31, 44, 45, 
	32, 31, 30, 31, 46, 32, 31, 47, 
	30, 31, 48, 32, 31, 49, 30, 31, 
	44, 32, 31, 30, 50, 1, 0, 51, 
	1, 0, 52, 53, 1, 0, 54, 1, 
	52, 0, 1, 55, 0, 56, 1, 55, 
	0, 58, 58, 59, 58, 57, 58, 58, 
	59, 60, 61, 62, 58, 57, 58, 63, 
	59, 58, 64, 57, 58, 17, 59, 58, 
	65, 57, 58, 66, 59, 58, 67, 57, 
	58, 41, 59, 58, 68, 57, 58, 69, 
	59, 58, 57, 58, 70, 71, 59, 58, 
	57, 58, 72, 59, 58, 73, 57, 58, 
	74, 59, 58, 75, 57, 58, 70, 59, 
	58, 57, 52, 1, 0, 76, 76, 11, 
	76, 9, 10, 10, 11, 10, 9, 10, 
	10, 11, 10, 18, 9, 10, 10, 11, 
	10, 22, 9, 10, 10, 77, 11, 10, 
	9, 10, 19, 11, 10, 20, 9, 78, 
	78, 32, 78, 30, 31, 31, 32, 31, 
	30, 31, 31, 32, 31, 38, 30, 31, 
	31, 32, 31, 42, 30, 31, 31, 79, 
	32, 31, 30, 31, 48, 32, 31, 49, 
	30, 31, 31, 32, 31, 47, 30, 80, 
	80, 59, 80, 57, 58, 58, 59, 58, 
	57, 58, 58, 59, 58, 65, 57, 58, 
	58, 59, 58, 68, 57, 58, 58, 81, 
	59, 58, 57, 58, 74, 59, 58, 75, 
	57, 58, 58, 59, 58, 73, 57, 0
};

static const char _mr_extractor_trans_targs[] = {
	1, 2, 3, 15, 29, 4, 3, 5, 
	47, 6, 48, 7, 8, 10, 12, 49, 
	8, 48, 9, 50, 10, 48, 11, 51, 
	52, 14, 16, 15, 17, 53, 18, 54, 
	19, 20, 22, 24, 55, 20, 21, 56, 
	22, 54, 23, 57, 58, 28, 54, 26, 
	59, 27, 30, 31, 32, 46, 33, 34, 
	60, 35, 61, 36, 37, 39, 41, 62, 
	37, 38, 63, 39, 40, 64, 65, 45, 
	61, 43, 66, 44, 48, 13, 54, 25, 
	61, 42
};

static const char _mr_extractor_trans_actions[] = {
	0, 1, 3, 3, 3, 5, 0, 0, 
	7, 0, 9, 1, 3, 3, 3, 11, 
	0, 14, 0, 17, 0, 20, 0, 9, 
	9, 0, 5, 0, 0, 7, 0, 9, 
	1, 3, 3, 3, 11, 0, 0, 11, 
	0, 14, 0, 9, 9, 0, 20, 0, 
	17, 0, 0, 0, 0, 0, 5, 0, 
	7, 0, 9, 1, 3, 3, 3, 11, 
	0, 0, 11, 0, 0, 9, 9, 0, 
	14, 0, 11, 0, 0, 0, 0, 0, 
	0, 0
};

static const int mr_extractor_start = 0;

static const int mr_extractor_en_main = 0;


#line 125 "src/spss/readstat_sav_parse_mr_name.rl"


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
    
#line 218 "src/spss/readstat_sav_parse_mr_name.c"
	{
	cs = mr_extractor_start;
	}

#line 146 "src/spss/readstat_sav_parse_mr_name.rl"
    
#line 225 "src/spss/readstat_sav_parse_mr_name.c"
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
#line 392 "src/spss/readstat_sav_parse_mr_name.c"
		}
	}

_again:
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	}

#line 147 "src/spss/readstat_sav_parse_mr_name.rl"

    // Check if FSM finished successfully
    if (cs < 47 || p != pe) {
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


#line 444 "src/spss/readstat_sav_parse_mr_name.c"
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


#line 220 "src/spss/readstat_sav_parse_mr_name.rl"


readstat_error_t parse_mr_string(const char *line, mr_set_t **mr_sets, size_t *n_mr_lines) {
    readstat_error_t retval = READSTAT_OK;
    int cs = 0;
    char *p = (char *)line;
    char *start = p;
    char *pe = p + strlen(p) + 1;
    *mr_sets = NULL;
    *n_mr_lines = 0;

    
#line 500 "src/spss/readstat_sav_parse_mr_name.c"
	{
	cs = mr_parser_start;
	}

#line 232 "src/spss/readstat_sav_parse_mr_name.rl"
    
#line 507 "src/spss/readstat_sav_parse_mr_name.c"
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
#line 190 "src/spss/readstat_sav_parse_mr_name.rl"
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
#line 607 "src/spss/readstat_sav_parse_mr_name.c"
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

#line 233 "src/spss/readstat_sav_parse_mr_name.rl"

    if (cs < 4 || p != pe) {
        retval = READSTAT_ERROR_BAD_MR_STRING;
        goto cleanup;
    }

    (void)mr_parser_en_main;

cleanup:
    return retval;
}
