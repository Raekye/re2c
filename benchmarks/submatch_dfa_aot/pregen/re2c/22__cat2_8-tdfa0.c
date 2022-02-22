/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/22__cat2_8.re"
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
    
#line 30 "gen/re2c/22__cat2_8-tdfa0.c"
char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt24;
char *yyt25;
char *yyt26;
char *yyt27;
char *yyt28;
char *yyt29;
char *yyt3;
char *yyt30;
char *yyt31;
char *yyt32;
char *yyt33;
char *yyt34;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 68 "gen/re2c/22__cat2_8-tdfa0.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 79 "gen/re2c/22__cat2_8-tdfa0.c"
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

#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
#line 4 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


#line 123 "gen/re2c/22__cat2_8-tdfa0.c"
#define YYMAXFILL 16
#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


static inline int fill(input_t *in, size_t need)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 142 "gen/re2c/22__cat2_8-tdfa0.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt24) in->yyt24 -= free;
if (in->yyt25) in->yyt25 -= free;
if (in->yyt26) in->yyt26 -= free;
if (in->yyt27) in->yyt27 -= free;
if (in->yyt28) in->yyt28 -= free;
if (in->yyt29) in->yyt29 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt30) in->yyt30 -= free;
if (in->yyt31) in->yyt31 -= free;
if (in->yyt32) in->yyt32 -= free;
if (in->yyt33) in->yyt33 -= free;
if (in->yyt34) in->yyt34 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 199 "gen/re2c/22__cat2_8-tdfa0.c"
in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt31 = 0;
in->yyt32 = 0;
in->yyt33 = 0;
in->yyt34 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    
#line 237 "gen/re2c/22__cat2_8-tdfa0.c"
#line 42 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/22__cat2_8.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1,
        *b0, *b1;
loop:
    in->tok = in->cur;

#line 288 "gen/re2c/22__cat2_8-tdfa0.c"
{
	char yych;
	in->yyt1 = in->yyt2 = in->cur;
	if ((in->lim - in->cur) < 16) if (fill(in, 16) != 0) return 1;
	yych = *in->cur++;
	switch (yych) {
		case 0x00: goto yy1;
		case 'a':
			in->yyt5 = in->cur;
			goto yy4;
		default: goto yy2;
	}
yy1:
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
	{ return 0; }
#line 304 "gen/re2c/22__cat2_8-tdfa0.c"
yy2:
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/22__cat2_8.re"
	{ return 1; }
#line 309 "gen/re2c/22__cat2_8-tdfa0.c"
yy4:
	yych = *(in->mar = in->cur);
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->cur;
			goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt7 = in->cur;
			goto yy7;
		default: goto yy6;
	}
yy6:
	in->cur = in->mar;
	goto yy3;
yy7:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt8 = in->cur;
			goto yy8;
		default: goto yy6;
	}
yy8:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt9 = in->cur;
			goto yy9;
		default: goto yy6;
	}
yy9:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt10 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy10:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt11 = in->cur;
			goto yy11;
		default: goto yy6;
	}
yy11:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->yyt4 = in->yyt12 = in->cur;
			goto yy12;
		default: goto yy6;
	}
yy12:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt13 = in->yyt14 = in->yyt15 = in->cur;
			goto yy13;
		default: goto yy15;
	}
yy13:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt16 = in->yyt17 = in->yyt18 = in->cur;
			goto yy16;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy14:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy15:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy17;
		case 'b':
			++in->cur;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy16:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt19 = in->yyt20 = in->yyt21 = in->cur;
			goto yy18;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt6;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy17:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy19;
		default: goto yy6;
	}
yy18:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt22 = in->yyt23 = in->yyt24 = in->cur;
			goto yy20;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt7;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy19:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt5 = in->cur;
			goto yy21;
		default: goto yy6;
	}
yy20:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt25 = in->yyt26 = in->yyt27 = in->cur;
			goto yy22;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt8;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy21:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->cur;
			goto yy23;
		default: goto yy6;
	}
yy22:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt28 = in->yyt29 = in->yyt30 = in->cur;
			goto yy24;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt9;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy23:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt7 = in->cur;
			goto yy25;
		default: goto yy6;
	}
yy24:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt31 = in->yyt32 = in->cur;
			goto yy26;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt10;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy25:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt8 = in->cur;
			goto yy27;
		default: goto yy6;
	}
yy26:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt33 = in->yyt34 = in->cur;
			goto yy28;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt11;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy14;
		default: goto yy6;
	}
yy27:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt9 = in->cur;
			goto yy29;
		default: goto yy6;
	}
yy28:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy30;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt14;
			in->yyt4 = in->yyt15;
			in->yyt5 = in->yyt6;
			in->yyt6 = in->yyt7;
			in->yyt7 = in->yyt8;
			in->yyt8 = in->yyt9;
			in->yyt9 = in->yyt10;
			in->yyt10 = in->yyt11;
			in->yyt11 = in->yyt12;
			in->yyt14 = in->yyt17;
			in->yyt15 = in->yyt18;
			in->yyt17 = in->yyt20;
			in->yyt18 = in->yyt21;
			in->yyt20 = in->yyt23;
			in->yyt21 = in->yyt24;
			in->yyt23 = in->yyt26;
			in->yyt24 = in->yyt27;
			in->yyt26 = in->yyt29;
			in->yyt27 = in->yyt30;
			in->yyt29 = in->yyt32;
			in->yyt30 = in->yyt32;
			in->yyt32 = in->yyt34;
			in->yyt34 = in->cur;
			in->yyt12 = in->yyt13;
			in->yyt13 = in->yyt16;
			in->yyt16 = in->yyt19;
			in->yyt19 = in->yyt22;
			in->yyt22 = in->yyt25;
			in->yyt25 = in->yyt28;
			in->yyt28 = in->yyt31;
			in->yyt31 = in->yyt33;
			in->yyt33 = in->cur;
			goto yy28;
		case 'b':
			++in->cur;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy31;
		default: goto yy6;
	}
yy29:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt10 = in->cur;
			goto yy32;
		default: goto yy6;
	}
yy30:
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt3;
	b1 = in->yyt4;
#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/22__cat2_8.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, in->cur);
        goto loop;
    }
#line 621 "gen/re2c/22__cat2_8-tdfa0.c"
yy31:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy30;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt12;
			in->yyt3 = in->cur;
			goto yy17;
		case 'b':
			++in->cur;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy31;
		default: goto yy6;
	}
yy32:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt14;
			in->yyt4 = in->yyt15;
			goto yy30;
		case 'a':
			++in->cur;
			in->yyt15 = in->yyt3;
			in->yyt3 = in->yyt4;
			in->yyt4 = in->yyt5;
			in->yyt5 = in->yyt6;
			in->yyt6 = in->yyt7;
			in->yyt7 = in->yyt8;
			in->yyt8 = in->yyt9;
			in->yyt9 = in->yyt10;
			in->yyt10 = in->cur;
			goto yy32;
		case 'b':
			++in->cur;
			goto yy33;
		default: goto yy6;
	}
yy33:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt14;
			in->yyt4 = in->yyt15;
			goto yy30;
		case 'b':
			++in->cur;
			goto yy33;
		default: goto yy6;
	}
}
#line 20 "../../../benchmarks/submatch_dfa_aot/src/re2c/22__cat2_8.re"

}
