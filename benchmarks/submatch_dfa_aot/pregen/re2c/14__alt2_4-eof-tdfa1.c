/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/14__alt2_4.re"
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
#line 30 "gen/re2c/14__alt2_4-eof-tdfa1.c"
char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 50 "gen/re2c/14__alt2_4-eof-tdfa1.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 61 "gen/re2c/14__alt2_4-eof-tdfa1.c"
#line 43 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


static inline int fill(input_t *in)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 119 "gen/re2c/14__alt2_4-eof-tdfa1.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 157 "gen/re2c/14__alt2_4-eof-tdfa1.c"
in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 40 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    
#line 177 "gen/re2c/14__alt2_4-eof-tdfa1.c"
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
}
#line 81 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/14__alt2_4.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a1, *b1, *c1, *d1,
        *a2, *b2, *c2, *d2,
        *a3, *b3, *c3, *d3,
        *a4, *b4, *c4, *d4;
loop:
    in->tok = in->cur;

#line 231 "gen/re2c/14__alt2_4-eof-tdfa1.c"
{
	char yych;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
			in->yyt4 = in->yyt8 = in->yyt9 = in->yyt13 = in->cur;
			goto yy3;
		case 'a':
			in->yyt8 = in->cur;
			goto yy4;
		case 'b':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt4 = in->yyt8 = in->yyt9 = in->yyt14 = in->cur;
			goto yy5;
		case 'c':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt5 = in->yyt8 = in->yyt9 = in->yyt15 = in->cur;
			goto yy6;
		case 'd':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt6 = in->yyt8 = in->yyt9 = in->yyt16 = in->cur;
			goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy21;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 13 "../../../benchmarks/submatch_dfa_aot/src/re2c/14__alt2_4.re"
	{ return 1; }
#line 268 "gen/re2c/14__alt2_4-eof-tdfa1.c"
yy3:
	++in->cur;
	a1 = in->yyt8;
	a2 = in->yyt9;
	b1 = in->yyt1;
	b2 = in->yyt10;
	c1 = in->yyt2;
	c2 = in->yyt11;
	d1 = in->yyt3;
	d2 = in->yyt12;
	a3 = in->yyt13;
	a4 = in->yyt4;
	b3 = in->yyt14;
	b4 = in->yyt5;
	c3 = in->yyt15;
	c4 = in->yyt6;
	d3 = in->yyt16;
	d4 = in->yyt7;
#line 25 "../../../benchmarks/submatch_dfa_aot/src/re2c/14__alt2_4.re"
	{
        if (a1)      { outc(out, 'A'); outs(out, a1, a2); }
        else if (b1) { outc(out, 'B'); outs(out, b1, b2); }
        else if (c1) { outc(out, 'C'); outs(out, c1, c2); }
        else if (d1) { outc(out, 'D'); outs(out, d1, d2); }
        if (a3)      { outc(out, 'A'); outs(out, a3, a4); }
        else if (b3) { outc(out, 'B'); outs(out, b3, b4); }
        else if (c3) { outc(out, 'C'); outs(out, c3, c4); }
        else if (d3) { outc(out, 'D'); outs(out, d3, d4); }
        outc(out, '\n');
        goto loop;
    }
#line 300 "gen/re2c/14__alt2_4-eof-tdfa1.c"
yy4:
	in->mar = ++in->cur;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy9;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy5:
	in->mar = ++in->cur;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy2;
	}
yy6:
	in->mar = ++in->cur;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy2;
	}
yy7:
	in->mar = ++in->cur;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy20;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy2;
	}
yy8:
	++in->cur;
yyFillLabel5:
	yych = *in->cur;
yy9:
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
			in->yyt4 = in->yyt9 = in->yyt13 = in->cur;
			goto yy3;
		case 'a': goto yy8;
		case 'b':
			in->yyt4 = in->yyt5 = in->yyt6 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt9 = in->yyt14 = in->cur;
			goto yy11;
		case 'c':
			in->yyt4 = in->yyt5 = in->yyt6 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt9 = in->yyt15 = in->cur;
			goto yy12;
		case 'd':
			in->yyt4 = in->yyt5 = in->yyt6 = in->yyt10 = in->yyt11 = in->yyt12 = NULL;
			in->yyt9 = in->yyt16 = in->cur;
			goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy10;
	}
yy10:
	in->cur = in->mar;
	goto yy2;
yy11:
	++in->cur;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = in->yyt6 = in->yyt7 = in->yyt13 = in->yyt15 = in->yyt16 = NULL;
			in->yyt5 = in->cur;
			goto yy3;
		case 'b': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy10;
	}
yy12:
	++in->cur;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = in->yyt5 = in->yyt7 = in->yyt13 = in->yyt14 = in->yyt16 = NULL;
			in->yyt6 = in->cur;
			goto yy3;
		case 'c': goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy10;
	}
yy13:
	++in->cur;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = in->yyt5 = in->yyt6 = in->yyt13 = in->yyt14 = in->yyt15 = NULL;
			in->yyt7 = in->cur;
			goto yy3;
		case 'd': goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
			}
			goto yy10;
	}
yy14:
	++in->cur;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt5 = in->yyt6 = in->yyt7 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
			in->yyt4 = in->cur;
			goto yy3;
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
			}
			goto yy10;
	}
yy15:
	++in->cur;
yyFillLabel10:
	yych = *in->cur;
yy16:
	switch (yych) {
		case '\n':
			in->yyt4 = in->yyt6 = in->yyt7 = in->yyt13 = in->yyt15 = in->yyt16 = NULL;
			in->yyt5 = in->cur;
			goto yy3;
		case 'a':
			in->yyt5 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt11 = in->yyt12 = NULL;
			in->yyt10 = in->yyt13 = in->cur;
			goto yy14;
		case 'b': goto yy15;
		case 'c':
			in->yyt5 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt11 = in->yyt12 = NULL;
			in->yyt10 = in->yyt15 = in->cur;
			goto yy12;
		case 'd':
			in->yyt5 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt11 = in->yyt12 = NULL;
			in->yyt10 = in->yyt16 = in->cur;
			goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy10;
	}
yy17:
	++in->cur;
yyFillLabel11:
	yych = *in->cur;
yy18:
	switch (yych) {
		case '\n':
			in->yyt4 = in->yyt5 = in->yyt7 = in->yyt13 = in->yyt14 = in->yyt16 = NULL;
			in->yyt6 = in->cur;
			goto yy3;
		case 'a':
			in->yyt4 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt12 = NULL;
			in->yyt11 = in->yyt13 = in->cur;
			goto yy14;
		case 'b':
			in->yyt4 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt12 = NULL;
			in->yyt11 = in->yyt14 = in->cur;
			goto yy11;
		case 'c': goto yy17;
		case 'd':
			in->yyt4 = in->yyt6 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt12 = NULL;
			in->yyt11 = in->yyt16 = in->cur;
			goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy10;
	}
yy19:
	++in->cur;
yyFillLabel12:
	yych = *in->cur;
yy20:
	switch (yych) {
		case '\n':
			in->yyt4 = in->yyt5 = in->yyt6 = in->yyt13 = in->yyt14 = in->yyt15 = NULL;
			in->yyt7 = in->cur;
			goto yy3;
		case 'a':
			in->yyt4 = in->yyt5 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = NULL;
			in->yyt12 = in->yyt13 = in->cur;
			goto yy14;
		case 'b':
			in->yyt4 = in->yyt5 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = NULL;
			in->yyt12 = in->yyt14 = in->cur;
			goto yy11;
		case 'c':
			in->yyt4 = in->yyt5 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = NULL;
			in->yyt12 = in->yyt15 = in->cur;
			goto yy12;
		case 'd': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
			}
			goto yy10;
	}
yy21:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 563 "gen/re2c/14__alt2_4-eof-tdfa1.c"
}
#line 37 "../../../benchmarks/submatch_dfa_aot/src/re2c/14__alt2_4.re"

}
