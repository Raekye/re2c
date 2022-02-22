/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
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
    
#line 30 "gen/re2c/24__cat4_2-tdfa1.c"
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
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 64 "gen/re2c/24__cat4_2-tdfa1.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 75 "gen/re2c/24__cat4_2-tdfa1.c"
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


#line 119 "gen/re2c/24__cat4_2-tdfa1.c"
#define YYMAXFILL 8
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
    
#line 138 "gen/re2c/24__cat4_2-tdfa1.c"
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
    
#line 191 "gen/re2c/24__cat4_2-tdfa1.c"
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
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    
#line 225 "gen/re2c/24__cat4_2-tdfa1.c"
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1, *a2, *a3,
        *b0, *b1, *b2, *b3;
loop:
    in->tok = in->cur;

#line 276 "gen/re2c/24__cat4_2-tdfa1.c"
{
	char yych;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case 0x00: goto yy1;
		case 'a':
			in->yyt1 = in->yyt2 = in->cur;
			goto yy4;
		default: goto yy2;
	}
yy1:
	++in->cur;
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
	{ return 0; }
#line 292 "gen/re2c/24__cat4_2-tdfa1.c"
yy2:
	++in->cur;
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
	{ return 1; }
#line 298 "gen/re2c/24__cat4_2-tdfa1.c"
yy4:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
		case 'a':
			in->yyt8 = in->cur;
			goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
			goto yy7;
		default: goto yy9;
	}
yy6:
	in->cur = in->mar;
	goto yy3;
yy7:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt9 = in->yyt16 = in->yyt17 = in->cur;
			goto yy10;
		case 'b':
			in->yyt2 = in->yyt8;
			goto yy8;
		default: goto yy6;
	}
yy8:
	++in->cur;
	if ((in->lim - in->cur) < 6) if (fill(in, 6) != 0) return 1;
	yych = *in->cur;
yy9:
	switch (yych) {
		case 'a':
			in->yyt4 = in->yyt5 = in->cur;
			goto yy11;
		case 'b': goto yy8;
		default: goto yy6;
	}
yy10:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt6 = in->yyt7 = in->yyt18 = in->yyt19 = in->yyt28 = in->cur;
			goto yy12;
		default: goto yy14;
	}
yy11:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt16 = in->cur;
			goto yy15;
		default: goto yy6;
	}
yy12:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt20 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt29 = in->cur;
			goto yy16;
		case 'b':
			in->yyt2 = in->yyt8;
			in->yyt3 = in->yyt9;
			in->yyt4 = in->yyt16;
			in->yyt5 = in->yyt17;
			goto yy13;
		default: goto yy6;
	}
yy13:
	++in->cur;
	if ((in->lim - in->cur) < 6) if (fill(in, 6) != 0) return 1;
	yych = *in->cur;
yy14:
	switch (yych) {
		case 'a':
			in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->cur;
			goto yy17;
		case 'b': goto yy13;
		default: goto yy6;
	}
yy15:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt6 = in->yyt7 = in->yyt25 = in->cur;
			goto yy18;
		default: goto yy20;
	}
yy16:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt30 = in->cur;
			goto yy21;
		default: goto yy23;
	}
yy17:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt16 = in->yyt17 = in->cur;
			goto yy24;
		default: goto yy6;
	}
yy18:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
			goto yy25;
		case 'b':
			in->yyt5 = in->yyt16;
			goto yy19;
		default: goto yy6;
	}
yy19:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy20:
	switch (yych) {
		case 'a':
			in->yyt6 = in->yyt7 = in->cur;
			goto yy26;
		case 'b': goto yy19;
		default: goto yy6;
	}
yy21:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt21 = in->yyt22 = in->yyt23 = in->yyt24 = in->cur;
			goto yy27;
		case 'b':
			in->yyt2 = in->yyt8;
			in->yyt3 = in->yyt9;
			in->yyt4 = in->yyt16;
			in->yyt5 = in->yyt17;
			in->yyt6 = in->yyt27;
			in->yyt7 = in->yyt29;
			in->yyt18 = in->yyt25;
			in->yyt19 = in->yyt26;
			in->yyt28 = in->yyt20;
			goto yy22;
		default: goto yy6;
	}
yy22:
	++in->cur;
	if ((in->lim - in->cur) < 6) if (fill(in, 6) != 0) return 1;
	yych = *in->cur;
yy23:
	switch (yych) {
		case 'a':
			in->yyt8 = in->yyt9 = in->yyt12 = in->yyt14 = in->yyt15 = in->cur;
			goto yy28;
		case 'b': goto yy22;
		default: goto yy6;
	}
yy24:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt14 = in->yyt15 = in->yyt25 = in->yyt26 = in->yyt27 = in->cur;
			goto yy29;
		default: goto yy31;
	}
yy25:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt14 = in->yyt15 = in->yyt28 = in->yyt29 = in->yyt30 = in->cur;
			goto yy32;
		default: goto yy34;
	}
yy26:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt16 = in->cur;
			goto yy35;
		default: goto yy6;
	}
yy27:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt2 = in->yyt8;
			in->yyt4 = in->yyt16;
			in->yyt5 = in->yyt17;
			in->yyt6 = in->yyt27;
			in->yyt7 = in->yyt29;
			in->yyt14 = in->yyt24;
			in->yyt15 = in->yyt24;
			in->yyt24 = in->cur;
			in->yyt8 = in->yyt3;
			in->yyt16 = in->yyt18;
			in->yyt17 = in->yyt19;
			in->yyt18 = in->yyt25;
			in->yyt19 = in->yyt26;
			in->yyt27 = in->yyt12;
			in->yyt29 = in->yyt13;
			in->yyt3 = in->yyt9;
			in->yyt12 = in->yyt23;
			in->yyt13 = in->yyt23;
			in->yyt23 = in->cur;
			in->yyt9 = in->yyt28;
			in->yyt25 = in->yyt10;
			in->yyt26 = in->yyt11;
			in->yyt28 = in->yyt20;
			in->yyt10 = in->yyt22;
			in->yyt11 = in->yyt22;
			in->yyt22 = in->cur;
			in->yyt20 = in->yyt30;
			in->yyt30 = in->yyt21;
			in->yyt21 = in->cur;
			goto yy27;
		case 'b': goto yy37;
		default: goto yy6;
	}
yy28:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt10 = in->yyt16 = in->yyt17 = in->cur;
			goto yy38;
		default: goto yy6;
	}
yy29:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt10 = in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
			goto yy39;
		case 'b':
			in->yyt7 = in->yyt17;
			in->yyt9 = in->yyt16;
			goto yy30;
		default: goto yy6;
	}
yy30:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy31:
	switch (yych) {
		case 'a':
			in->yyt10 = in->yyt11 = in->yyt14 = in->yyt15 = in->cur;
			goto yy40;
		case 'b': goto yy30;
		default: goto yy6;
	}
yy32:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
			goto yy41;
		case 'b':
			in->yyt5 = in->yyt16;
			in->yyt6 = in->yyt19;
			in->yyt7 = in->yyt20;
			in->yyt25 = in->yyt18;
			goto yy33;
		default: goto yy6;
	}
yy33:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy34:
	switch (yych) {
		case 'a':
			in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
			goto yy42;
		case 'b': goto yy33;
		default: goto yy6;
	}
yy35:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt14 = in->yyt15 = in->yyt17 = in->cur;
			goto yy43;
		default: goto yy45;
	}
yy36:
	++in->cur;
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt4;
	b1 = in->yyt5;
	a2 = in->yyt6;
	b2 = in->yyt7;
	a3 = in->yyt14;
	b3 = in->yyt15;
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
        outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
        outs(out, a3, b3); outc(out, '.'); outs(out, b3, in->cur);
        goto loop;
    }
#line 609 "gen/re2c/24__cat4_2-tdfa1.c"
yy37:
	++in->cur;
	if ((in->lim - in->cur) < 6) if (fill(in, 6) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt18;
			in->yyt5 = in->yyt19;
			in->yyt6 = in->yyt12;
			in->yyt7 = in->yyt13;
			in->yyt8 = in->yyt9 = in->yyt12 = in->yyt14 = in->yyt15 = in->cur;
			in->yyt3 = in->yyt28;
			in->yyt18 = in->yyt10;
			in->yyt19 = in->yyt11;
			in->yyt28 = in->yyt30;
			goto yy28;
		case 'b': goto yy37;
		default: goto yy6;
	}
yy38:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt11 = in->yyt15 = in->yyt25 = in->yyt26 = in->yyt27 = in->cur;
			goto yy46;
		default: goto yy48;
	}
yy39:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt14 = in->yyt15 = in->yyt28 = in->yyt29 = in->yyt30 = in->cur;
			goto yy49;
		default: goto yy51;
	}
yy40:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt12 = in->yyt16 = in->cur;
			goto yy52;
		default: goto yy6;
	}
yy41:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt5 = in->yyt16;
			in->yyt6 = in->yyt19;
			in->yyt7 = in->yyt20;
			in->yyt14 = in->yyt9;
			in->yyt15 = in->yyt9;
			in->yyt9 = in->cur;
			in->yyt16 = in->yyt25;
			in->yyt19 = in->yyt29;
			in->yyt20 = in->yyt30;
			in->yyt25 = in->yyt18;
			in->yyt29 = in->yyt8;
			in->yyt30 = in->yyt8;
			in->yyt8 = in->cur;
			in->yyt18 = in->yyt28;
			in->yyt28 = in->yyt3;
			in->yyt3 = in->cur;
			goto yy41;
		case 'b': goto yy53;
		default: goto yy6;
	}
yy42:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt9 = in->yyt16 = in->cur;
			goto yy54;
		default: goto yy6;
	}
yy43:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt3 = in->yyt8 = in->cur;
			goto yy55;
		case 'b':
			in->yyt7 = in->yyt16;
			goto yy44;
		default: goto yy6;
	}
yy44:
	++in->cur;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
yy45:
	switch (yych) {
		case 'a':
			in->yyt14 = in->yyt15 = in->cur;
			goto yy56;
		case 'b': goto yy44;
		default: goto yy6;
	}
yy46:
	yych = *++in->cur;
	switch (yych) {
		case '\n':
			in->yyt15 = in->yyt10;
			goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt18;
			in->yyt5 = in->yyt19;
			in->yyt6 = in->yyt8;
			in->yyt7 = in->yyt12;
			in->yyt14 = in->yyt11;
			in->yyt10 = in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
			in->yyt3 = in->yyt28;
			goto yy39;
		case 'b':
			in->yyt9 = in->yyt16;
			in->yyt12 = in->yyt17;
			in->yyt15 = in->yyt10;
			goto yy47;
		default: goto yy6;
	}
yy47:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy48:
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt18;
			in->yyt5 = in->yyt19;
			in->yyt6 = in->yyt8;
			in->yyt7 = in->yyt12;
			in->yyt10 = in->yyt11 = in->yyt14 = in->yyt15 = in->cur;
			in->yyt3 = in->yyt28;
			goto yy40;
		case 'b': goto yy47;
		default: goto yy6;
	}
yy49:
	yych = *++in->cur;
	switch (yych) {
		case '\n':
			in->yyt7 = in->yyt17;
			in->yyt14 = in->yyt10;
			in->yyt15 = in->yyt10;
			goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt8;
			in->yyt5 = in->yyt9;
			in->yyt6 = in->yyt26;
			in->yyt7 = in->yyt27;
			in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
			goto yy41;
		case 'b':
			in->yyt7 = in->yyt17;
			in->yyt9 = in->yyt16;
			in->yyt14 = in->yyt10;
			in->yyt15 = in->yyt10;
			in->yyt25 = in->yyt18;
			in->yyt26 = in->yyt19;
			in->yyt27 = in->yyt20;
			goto yy50;
		default: goto yy6;
	}
yy50:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy51:
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt8;
			in->yyt5 = in->yyt9;
			in->yyt6 = in->yyt26;
			in->yyt7 = in->yyt27;
			in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
			goto yy42;
		case 'b': goto yy50;
		default: goto yy6;
	}
yy52:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt13 = in->yyt15 = in->yyt17 = in->cur;
			goto yy57;
		default: goto yy59;
	}
yy53:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt5 = in->yyt25;
			in->yyt6 = in->yyt29;
			in->yyt7 = in->yyt30;
			in->yyt3 = in->yyt8 = in->yyt14 = in->yyt15 = in->cur;
			in->yyt25 = in->yyt28;
			goto yy42;
		case 'b': goto yy53;
		default: goto yy6;
	}
yy54:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt10 = in->yyt15 = in->yyt17 = in->cur;
			goto yy60;
		default: goto yy62;
	}
yy55:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt7 = in->yyt16;
			in->yyt14 = in->yyt8;
			in->yyt15 = in->yyt8;
			in->yyt8 = in->cur;
			in->yyt16 = in->yyt17;
			in->yyt17 = in->yyt3;
			in->yyt3 = in->cur;
			goto yy55;
		case 'b': goto yy63;
		default: goto yy6;
	}
yy56:
	yych = *++in->cur;
	switch (yych) {
		case 'a':
			in->yyt3 = in->cur;
			goto yy64;
		default: goto yy6;
	}
yy57:
	yych = *++in->cur;
	switch (yych) {
		case '\n':
			in->yyt15 = in->yyt12;
			goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt8;
			in->yyt5 = in->yyt9;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt11;
			in->yyt14 = in->yyt13;
			in->yyt3 = in->yyt8 = in->cur;
			goto yy55;
		case 'b':
			in->yyt11 = in->yyt16;
			in->yyt15 = in->yyt12;
			goto yy58;
		default: goto yy6;
	}
yy58:
	++in->cur;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
yy59:
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt4 = in->yyt8;
			in->yyt5 = in->yyt9;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt11;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy56;
		case 'b': goto yy58;
		default: goto yy6;
	}
yy60:
	yych = *++in->cur;
	switch (yych) {
		case '\n':
			in->yyt15 = in->yyt9;
			goto yy36;
		case 'a':
			in->yyt5 = in->yyt25;
			in->yyt6 = in->yyt3;
			in->yyt7 = in->yyt8;
			in->yyt14 = in->yyt10;
			in->yyt3 = in->yyt8 = in->cur;
			goto yy55;
		case 'b':
			in->yyt8 = in->yyt16;
			in->yyt15 = in->yyt9;
			goto yy61;
		default: goto yy6;
	}
yy61:
	++in->cur;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
yy62:
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt5 = in->yyt25;
			in->yyt6 = in->yyt3;
			in->yyt7 = in->yyt8;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy56;
		case 'b': goto yy61;
		default: goto yy6;
	}
yy63:
	++in->cur;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt7 = in->yyt17;
			in->yyt14 = in->yyt15 = in->cur;
			goto yy56;
		case 'b': goto yy63;
		default: goto yy6;
	}
yy64:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'a':
			in->yyt15 = in->yyt3;
			in->yyt3 = in->cur;
			goto yy64;
		case 'b': goto yy65;
		default: goto yy6;
	}
yy65:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy36;
		case 'b': goto yy65;
		default: goto yy6;
	}
}
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/24__cat4_2.re"

}
