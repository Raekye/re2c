/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/25__cat4_4.re"
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
    
#line 30 "gen/re2c/25__cat4_4-tdfa0.c"
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
char *yyt35;
char *yyt36;
char *yyt37;
char *yyt38;
char *yyt39;
char *yyt4;
char *yyt40;
char *yyt41;
char *yyt42;
char *yyt43;
char *yyt44;
char *yyt45;
char *yyt46;
char *yyt47;
char *yyt48;
char *yyt49;
char *yyt5;
char *yyt50;
char *yyt51;
char *yyt52;
char *yyt53;
char *yyt54;
char *yyt55;
char *yyt56;
char *yyt57;
char *yyt58;
char *yyt59;
char *yyt6;
char *yyt60;
char *yyt61;
char *yyt62;
char *yyt63;
char *yyt64;
char *yyt65;
char *yyt66;
char *yyt67;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 101 "gen/re2c/25__cat4_4-tdfa0.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 112 "gen/re2c/25__cat4_4-tdfa0.c"
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


#line 156 "gen/re2c/25__cat4_4-tdfa0.c"
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
    
#line 175 "gen/re2c/25__cat4_4-tdfa0.c"
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
if (in->yyt35) in->yyt35 -= free;
if (in->yyt36) in->yyt36 -= free;
if (in->yyt37) in->yyt37 -= free;
if (in->yyt38) in->yyt38 -= free;
if (in->yyt39) in->yyt39 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt40) in->yyt40 -= free;
if (in->yyt41) in->yyt41 -= free;
if (in->yyt42) in->yyt42 -= free;
if (in->yyt43) in->yyt43 -= free;
if (in->yyt44) in->yyt44 -= free;
if (in->yyt45) in->yyt45 -= free;
if (in->yyt46) in->yyt46 -= free;
if (in->yyt47) in->yyt47 -= free;
if (in->yyt48) in->yyt48 -= free;
if (in->yyt49) in->yyt49 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt50) in->yyt50 -= free;
if (in->yyt51) in->yyt51 -= free;
if (in->yyt52) in->yyt52 -= free;
if (in->yyt53) in->yyt53 -= free;
if (in->yyt54) in->yyt54 -= free;
if (in->yyt55) in->yyt55 -= free;
if (in->yyt56) in->yyt56 -= free;
if (in->yyt57) in->yyt57 -= free;
if (in->yyt58) in->yyt58 -= free;
if (in->yyt59) in->yyt59 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt60) in->yyt60 -= free;
if (in->yyt61) in->yyt61 -= free;
if (in->yyt62) in->yyt62 -= free;
if (in->yyt63) in->yyt63 -= free;
if (in->yyt64) in->yyt64 -= free;
if (in->yyt65) in->yyt65 -= free;
if (in->yyt66) in->yyt66 -= free;
if (in->yyt67) in->yyt67 -= free;
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
    
#line 265 "gen/re2c/25__cat4_4-tdfa0.c"
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
in->yyt35 = 0;
in->yyt36 = 0;
in->yyt37 = 0;
in->yyt38 = 0;
in->yyt39 = 0;
in->yyt4 = 0;
in->yyt40 = 0;
in->yyt41 = 0;
in->yyt42 = 0;
in->yyt43 = 0;
in->yyt44 = 0;
in->yyt45 = 0;
in->yyt46 = 0;
in->yyt47 = 0;
in->yyt48 = 0;
in->yyt49 = 0;
in->yyt5 = 0;
in->yyt50 = 0;
in->yyt51 = 0;
in->yyt52 = 0;
in->yyt53 = 0;
in->yyt54 = 0;
in->yyt55 = 0;
in->yyt56 = 0;
in->yyt57 = 0;
in->yyt58 = 0;
in->yyt59 = 0;
in->yyt6 = 0;
in->yyt60 = 0;
in->yyt61 = 0;
in->yyt62 = 0;
in->yyt63 = 0;
in->yyt64 = 0;
in->yyt65 = 0;
in->yyt66 = 0;
in->yyt67 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    
#line 336 "gen/re2c/25__cat4_4-tdfa0.c"
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/25__cat4_4.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1, *a2, *a3,
        *b0, *b1, *b2, *b3;
loop:
    in->tok = in->cur;

#line 387 "gen/re2c/25__cat4_4-tdfa0.c"
{
	char yych;
	in->yyt1 = in->yyt2 = in->cur;
	if ((in->lim - in->cur) < 16) if (fill(in, 16) != 0) return 1;
	yych = *in->cur++;
	switch (yych) {
		case 0x00: goto yy1;
		case 'a':
			in->yyt11 = in->cur;
			goto yy4;
		default: goto yy2;
	}
yy1:
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
	{ return 0; }
#line 403 "gen/re2c/25__cat4_4-tdfa0.c"
yy2:
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/25__cat4_4.re"
	{ return 1; }
#line 408 "gen/re2c/25__cat4_4-tdfa0.c"
yy4:
	yych = *(in->mar = in->cur);
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt12 = in->cur;
			goto yy5;
		default: goto yy3;
	}
yy5:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt13 = in->cur;
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
			in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
			goto yy8;
		default: goto yy6;
	}
yy8:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt14 = in->yyt64 = in->yyt65 = in->cur;
			goto yy9;
		default: goto yy11;
	}
yy9:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt20 = in->yyt21 = in->yyt29 = in->cur;
			goto yy12;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt11;
			in->yyt64 = in->yyt65 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy10:
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy11:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt12 = in->cur;
			goto yy13;
		case 'b':
			++in->cur;
			in->yyt64 = in->yyt65 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy12:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt37 = in->yyt38 = in->yyt39 = in->cur;
			goto yy14;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt12;
			in->yyt64 = in->yyt65 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy13:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt13 = in->cur;
			goto yy15;
		default: goto yy6;
	}
yy14:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt7 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy16;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt13;
			in->yyt64 = in->yyt65 = in->cur;
			goto yy10;
		default: goto yy6;
	}
yy15:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt20 = in->cur;
			goto yy17;
		default: goto yy6;
	}
yy16:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt8 = in->yyt9 = in->yyt10 = in->yyt40 = in->yyt54 = in->cur;
			goto yy18;
		default: goto yy20;
	}
yy17:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt7 = in->yyt11 = in->cur;
			goto yy21;
		default: goto yy6;
	}
yy18:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt49 = in->yyt50 = in->yyt51 = in->yyt52 = in->yyt53 = in->cur;
			goto yy22;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt11;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt5 = in->yyt14;
			in->yyt8 = in->yyt9 = in->yyt10 = in->yyt54 = in->cur;
			goto yy19;
		default: goto yy6;
	}
yy19:
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy20:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt7 = in->yyt12 = in->cur;
			goto yy23;
		case 'b':
			++in->cur;
			in->yyt8 = in->yyt9 = in->yyt10 = in->yyt54 = in->cur;
			goto yy19;
		default: goto yy6;
	}
yy21:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt28 = in->yyt37 = in->yyt38 = in->cur;
			goto yy24;
		default: goto yy26;
	}
yy22:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt55 = in->yyt56 = in->yyt61 = in->yyt62 = in->yyt63 = in->cur;
			goto yy27;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt12;
			in->yyt3 = in->yyt21;
			in->yyt4 = in->yyt29;
			in->yyt5 = in->yyt20;
			in->yyt8 = in->yyt9 = in->yyt10 = in->yyt54 = in->cur;
			goto yy19;
		default: goto yy6;
	}
yy23:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt13 = in->yyt14 = in->cur;
			goto yy28;
		default: goto yy6;
	}
yy24:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt49 = in->yyt50 = in->yyt51 = in->cur;
			goto yy29;
		case 'b':
			++in->cur;
			in->yyt65 = in->yyt12;
			in->yyt37 = in->yyt38 = in->cur;
			goto yy25;
		default: goto yy6;
	}
yy25:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy26:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt12 = in->cur;
			goto yy30;
		case 'b':
			++in->cur;
			in->yyt37 = in->yyt38 = in->cur;
			goto yy25;
		default: goto yy6;
	}
yy27:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt15 = in->yyt16 = in->yyt17 = in->yyt18 = in->yyt19 = in->yyt66 = in->yyt67 = in->cur;
			goto yy31;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt13;
			in->yyt3 = in->yyt38;
			in->yyt4 = in->yyt39;
			in->yyt5 = in->yyt37;
			in->yyt8 = in->yyt9 = in->yyt10 = in->yyt54 = in->cur;
			goto yy19;
		default: goto yy6;
	}
yy28:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt20 = in->yyt21 = in->cur;
			goto yy32;
		default: goto yy6;
	}
yy29:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt61 = in->yyt62 = in->yyt63 = in->cur;
			goto yy33;
		case 'b':
			++in->cur;
			in->yyt65 = in->yyt13;
			in->yyt37 = in->yyt38 = in->cur;
			goto yy25;
		default: goto yy6;
	}
yy30:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt13 = in->cur;
			goto yy34;
		default: goto yy6;
	}
yy31:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt22 = in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy35;
		default: goto yy37;
	}
yy32:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt11 = in->yyt18 = in->yyt19 = in->yyt29 = in->cur;
			goto yy38;
		default: goto yy6;
	}
yy33:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt18 = in->yyt19 = in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
			goto yy39;
		case 'b':
			++in->cur;
			in->yyt65 = in->yyt20;
			in->yyt37 = in->yyt38 = in->cur;
			goto yy25;
		default: goto yy6;
	}
yy34:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt14 = in->cur;
			goto yy40;
		default: goto yy6;
	}
yy35:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt30 = in->yyt31 = in->yyt32 = in->yyt33 = in->yyt34 = in->yyt35 = in->yyt36 = in->cur;
			goto yy41;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt11;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt5 = in->yyt14;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt54;
			in->yyt41 = in->yyt40;
			in->yyt42 = in->yyt8;
			in->yyt43 = in->yyt9;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy36;
		default: goto yy6;
	}
yy36:
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy37:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt8 = in->yyt12 = in->yyt19 = in->cur;
			goto yy42;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy36;
		default: goto yy6;
	}
yy38:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt28 = in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy43;
		default: goto yy45;
	}
yy39:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt26 = in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy46;
		default: goto yy48;
	}
yy40:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt18 = in->yyt19 = in->yyt20 = in->cur;
			goto yy49;
		default: goto yy6;
	}
yy41:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt44 = in->yyt45 = in->yyt46 = in->yyt47 = in->yyt48 = in->cur;
			goto yy50;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt12;
			in->yyt3 = in->yyt21;
			in->yyt4 = in->yyt29;
			in->yyt5 = in->yyt20;
			in->yyt6 = in->yyt52;
			in->yyt7 = in->yyt53;
			in->yyt41 = in->yyt49;
			in->yyt42 = in->yyt50;
			in->yyt43 = in->yyt51;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy36;
		default: goto yy6;
	}
yy42:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt9 = in->yyt13 = in->yyt14 = in->cur;
			goto yy51;
		default: goto yy6;
	}
yy43:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt49 = in->yyt50 = in->yyt51 = in->yyt52 = in->yyt53 = in->cur;
			goto yy52;
		case 'b':
			++in->cur;
			in->yyt9 = in->yyt12;
			in->yyt54 = in->yyt7;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy44;
		default: goto yy6;
	}
yy44:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy45:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt12 = in->yyt19 = in->cur;
			goto yy53;
		case 'b':
			++in->cur;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy44;
		default: goto yy6;
	}
yy46:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt39 = in->yyt40 = in->yyt54 = in->yyt55 = in->yyt56 = in->cur;
			goto yy54;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			in->yyt11 = in->yyt28;
			in->yyt65 = in->yyt12;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy47;
		default: goto yy6;
	}
yy47:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy48:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt12 = in->yyt19 = in->cur;
			goto yy55;
		case 'b':
			++in->cur;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy47;
		default: goto yy6;
	}
yy49:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt21 = in->yyt23 = in->yyt24 = in->cur;
			goto yy56;
		default: goto yy58;
	}
yy50:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt57 = in->yyt58 = in->yyt59 = in->yyt60 = in->cur;
			goto yy59;
		case 'b':
			++in->cur;
			in->yyt2 = in->yyt13;
			in->yyt3 = in->yyt38;
			in->yyt4 = in->yyt39;
			in->yyt5 = in->yyt37;
			in->yyt6 = in->yyt62;
			in->yyt7 = in->yyt63;
			in->yyt41 = in->yyt55;
			in->yyt42 = in->yyt56;
			in->yyt43 = in->yyt61;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy36;
		default: goto yy6;
	}
yy51:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt10 = in->yyt20 = in->yyt21 = in->cur;
			goto yy60;
		default: goto yy6;
	}
yy52:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt61 = in->yyt62 = in->yyt63 = in->yyt64 = in->yyt65 = in->cur;
			goto yy61;
		case 'b':
			++in->cur;
			in->yyt9 = in->yyt13;
			in->yyt54 = in->yyt14;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy44;
		default: goto yy6;
	}
yy53:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt13 = in->cur;
			goto yy62;
		default: goto yy6;
	}
yy54:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt14 = in->yyt52 = in->yyt53 = in->yyt66 = in->yyt67 = in->cur;
			goto yy63;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt50;
			in->yyt7 = in->yyt51;
			in->yyt11 = in->yyt49;
			in->yyt65 = in->yyt13;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy47;
		default: goto yy6;
	}
yy55:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->yyt13 = in->cur;
			goto yy64;
		default: goto yy6;
	}
yy56:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt25 = in->yyt26 = in->yyt28 = in->cur;
			goto yy65;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt12;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy57;
		default: goto yy6;
	}
yy57:
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy58:
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy66;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy57;
		default: goto yy6;
	}
yy59:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt11;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt54;
			in->yyt10 = in->yyt52;
			in->yyt11 = in->yyt12;
			in->yyt12 = in->yyt13;
			in->yyt13 = in->yyt5;
			in->yyt18 = in->yyt27;
			in->yyt19 = in->yyt28;
			in->yyt27 = in->yyt35;
			in->yyt28 = in->yyt36;
			in->yyt35 = in->yyt48;
			in->yyt36 = in->yyt48;
			in->yyt48 = in->yyt60;
			in->yyt52 = in->yyt62;
			in->yyt54 = in->yyt53;
			in->yyt62 = in->yyt16;
			in->yyt64 = in->yyt21;
			in->yyt65 = in->yyt29;
			in->yyt21 = in->yyt38;
			in->yyt29 = in->yyt39;
			in->yyt38 = in->yyt42;
			in->yyt39 = in->yyt43;
			in->yyt53 = in->yyt63;
			in->yyt63 = in->yyt17;
			in->yyt60 = in->cur;
			in->yyt5 = in->yyt14;
			in->yyt14 = in->yyt20;
			in->yyt16 = in->yyt25;
			in->yyt17 = in->yyt26;
			in->yyt20 = in->yyt37;
			in->yyt25 = in->yyt33;
			in->yyt26 = in->yyt34;
			in->yyt33 = in->yyt47;
			in->yyt34 = in->yyt47;
			in->yyt37 = in->yyt41;
			in->yyt42 = in->yyt8;
			in->yyt43 = in->yyt9;
			in->yyt47 = in->yyt59;
			in->yyt8 = in->yyt50;
			in->yyt9 = in->yyt51;
			in->yyt50 = in->yyt56;
			in->yyt51 = in->yyt61;
			in->yyt56 = in->yyt67;
			in->yyt61 = in->yyt15;
			in->yyt59 = in->cur;
			in->yyt15 = in->yyt24;
			in->yyt24 = in->yyt32;
			in->yyt32 = in->yyt46;
			in->yyt41 = in->yyt40;
			in->yyt46 = in->yyt58;
			in->yyt67 = in->yyt23;
			in->yyt23 = in->yyt31;
			in->yyt31 = in->yyt45;
			in->yyt40 = in->yyt49;
			in->yyt45 = in->yyt58;
			in->yyt49 = in->yyt55;
			in->yyt55 = in->yyt66;
			in->yyt58 = in->cur;
			in->yyt66 = in->yyt22;
			in->yyt22 = in->yyt30;
			in->yyt30 = in->yyt44;
			in->yyt44 = in->yyt57;
			in->yyt57 = in->cur;
			goto yy59;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy68;
		default: goto yy6;
	}
yy60:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt11 = in->yyt18 = in->yyt29 = in->cur;
			goto yy69;
		default: goto yy6;
	}
yy61:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt15 = in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
			goto yy70;
		case 'b':
			++in->cur;
			in->yyt9 = in->yyt20;
			in->yyt54 = in->yyt21;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy44;
		default: goto yy6;
	}
yy62:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt7 = in->yyt14 = in->cur;
			goto yy71;
		default: goto yy6;
	}
yy63:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
			goto yy72;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt62;
			in->yyt7 = in->yyt63;
			in->yyt11 = in->yyt61;
			in->yyt65 = in->yyt20;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy47;
		default: goto yy6;
	}
yy64:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt4 = in->yyt14 = in->cur;
			goto yy73;
		default: goto yy6;
	}
yy65:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt29 = in->yyt40 = in->yyt43 = in->cur;
			goto yy74;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt13;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy57;
		default: goto yy6;
	}
yy66:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy75;
		default: goto yy6;
	}
yy67:
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt3;
	b1 = in->yyt4;
	a2 = in->yyt6;
	b2 = in->yyt7;
	a3 = in->yyt18;
	b3 = in->yyt19;
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/25__cat4_4.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
        outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
        outs(out, a3, b3); outc(out, '.'); outs(out, b3, in->cur);
        goto loop;
    }
#line 1184 "gen/re2c/25__cat4_4-tdfa0.c"
yy68:
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt42;
			in->yyt4 = in->yyt43;
			in->yyt6 = in->yyt16;
			in->yyt7 = in->yyt17;
			in->yyt8 = in->yyt12 = in->yyt19 = in->cur;
			in->yyt5 = in->yyt41;
			in->yyt41 = in->yyt66;
			in->yyt42 = in->yyt67;
			in->yyt43 = in->yyt15;
			goto yy42;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->yyt25 = in->yyt26 = in->yyt27 = in->yyt28 = in->cur;
			goto yy68;
		default: goto yy6;
	}
yy69:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt28 = in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy76;
		default: goto yy78;
	}
yy70:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt26 = in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy79;
		default: goto yy81;
	}
yy71:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt11 = in->yyt18 = in->yyt20 = in->cur;
			goto yy82;
		default: goto yy6;
	}
yy72:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			in->yyt18 = in->yyt42;
			in->yyt19 = in->yyt43;
			in->yyt37 = in->yyt50;
			in->yyt38 = in->yyt51;
			in->yyt42 = in->yyt55;
			in->yyt43 = in->yyt56;
			in->yyt50 = in->yyt62;
			in->yyt51 = in->yyt63;
			in->yyt55 = in->yyt66;
			in->yyt56 = in->yyt67;
			in->yyt62 = in->yyt24;
			in->yyt63 = in->yyt25;
			in->yyt65 = in->yyt12;
			in->yyt66 = in->yyt5;
			in->yyt67 = in->yyt5;
			in->yyt12 = in->yyt13;
			in->yyt13 = in->yyt20;
			in->yyt20 = in->yyt11;
			in->yyt5 = in->cur;
			in->yyt11 = in->yyt28;
			in->yyt24 = in->yyt27;
			in->yyt25 = in->yyt41;
			in->yyt27 = in->yyt40;
			in->yyt28 = in->yyt49;
			in->yyt40 = in->yyt52;
			in->yyt41 = in->yyt54;
			in->yyt49 = in->yyt61;
			in->yyt52 = in->yyt4;
			in->yyt54 = in->yyt53;
			in->yyt61 = in->yyt23;
			in->yyt53 = in->yyt4;
			in->yyt4 = in->cur;
			in->yyt23 = in->yyt26;
			in->yyt26 = in->yyt39;
			in->yyt39 = in->yyt14;
			in->yyt14 = in->yyt3;
			in->yyt3 = in->cur;
			goto yy72;
		case 'b':
			++in->cur;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy83;
		default: goto yy6;
	}
yy73:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt5 = in->yyt18 = in->yyt20 = in->cur;
			goto yy84;
		default: goto yy6;
	}
yy74:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt3 = in->yyt4 = in->cur;
			goto yy85;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt14;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy57;
		default: goto yy6;
	}
yy75:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt5 = in->cur;
			goto yy86;
		default: goto yy6;
	}
yy76:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt18 = in->yyt27;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt49 = in->yyt50 = in->yyt51 = in->yyt52 = in->yyt53 = in->cur;
			goto yy87;
		case 'b':
			++in->cur;
			in->yyt24 = in->yyt12;
			in->yyt26 = in->yyt8;
			in->yyt28 = in->yyt19;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy77;
		default: goto yy6;
	}
yy77:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy78:
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt18 = in->yyt27;
			in->yyt19 = in->yyt28;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt42;
			in->yyt4 = in->yyt43;
			in->yyt8 = in->yyt23;
			in->yyt9 = in->yyt24;
			in->yyt10 = in->yyt25;
			in->yyt54 = in->yyt26;
			in->yyt12 = in->yyt19 = in->cur;
			in->yyt5 = in->yyt41;
			goto yy53;
		case 'b':
			++in->cur;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy77;
		default: goto yy6;
	}
yy79:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt18 = in->yyt39;
			in->yyt19 = in->yyt40;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt39 = in->yyt40 = in->yyt54 = in->yyt55 = in->yyt56 = in->cur;
			goto yy88;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt37;
			in->yyt9 = in->yyt12;
			in->yyt11 = in->yyt28;
			in->yyt18 = in->yyt39;
			in->yyt19 = in->yyt40;
			in->yyt29 = in->yyt38;
			in->yyt54 = in->yyt7;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy80;
		default: goto yy6;
	}
yy80:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy81:
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt54;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt7 = in->yyt29;
			in->yyt64 = in->yyt8;
			in->yyt65 = in->yyt9;
			in->yyt12 = in->yyt19 = in->cur;
			goto yy55;
		case 'b':
			++in->cur;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy80;
		default: goto yy6;
	}
yy82:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt21 = in->yyt23 = in->yyt24 = in->cur;
			goto yy89;
		default: goto yy91;
	}
yy83:
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt6 = in->yyt24;
			in->yyt7 = in->yyt25;
			in->yyt65 = in->yyt11;
			in->yyt12 = in->yyt19 = in->cur;
			in->yyt11 = in->yyt23;
			goto yy55;
		case 'b':
			++in->cur;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy83;
		default: goto yy6;
	}
yy84:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt21 = in->yyt23 = in->yyt24 = in->cur;
			goto yy92;
		default: goto yy94;
	}
yy85:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt18 = in->yyt23;
			in->yyt19 = in->yyt24;
			in->yyt23 = in->yyt26;
			in->yyt24 = in->yyt28;
			in->yyt26 = in->yyt40;
			in->yyt28 = in->yyt43;
			in->yyt38 = in->yyt12;
			in->yyt40 = in->yyt4;
			in->yyt43 = in->yyt4;
			in->yyt12 = in->yyt13;
			in->yyt13 = in->yyt14;
			in->yyt14 = in->yyt20;
			in->yyt4 = in->cur;
			in->yyt20 = in->yyt21;
			in->yyt21 = in->yyt25;
			in->yyt25 = in->yyt29;
			in->yyt29 = in->yyt3;
			in->yyt3 = in->cur;
			goto yy85;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy95;
		default: goto yy6;
	}
yy86:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			++in->cur;
			in->yyt6 = in->cur;
			goto yy96;
		default: goto yy6;
	}
yy87:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt18 = in->yyt27;
			in->yyt19 = in->yyt9;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt61 = in->yyt62 = in->yyt63 = in->yyt64 = in->yyt65 = in->cur;
			goto yy97;
		case 'b':
			++in->cur;
			in->yyt24 = in->yyt13;
			in->yyt26 = in->yyt14;
			in->yyt28 = in->yyt9;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy77;
		default: goto yy6;
	}
yy88:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt14;
			in->yyt18 = in->yyt52;
			in->yyt19 = in->yyt53;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt14 = in->yyt52 = in->yyt53 = in->yyt66 = in->yyt67 = in->cur;
			goto yy98;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt50;
			in->yyt9 = in->yyt13;
			in->yyt11 = in->yyt49;
			in->yyt18 = in->yyt52;
			in->yyt19 = in->yyt53;
			in->yyt29 = in->yyt51;
			in->yyt54 = in->yyt14;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy80;
		default: goto yy6;
	}
yy89:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt54;
			in->yyt18 = in->yyt39;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt25 = in->yyt26 = in->yyt28 = in->cur;
			goto yy99;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt12;
			in->yyt40 = in->yyt19;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy90;
		default: goto yy6;
	}
yy90:
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy91:
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt54;
			in->yyt18 = in->yyt39;
			in->yyt19 = in->yyt40;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt64 = in->yyt8;
			in->yyt65 = in->yyt9;
			in->yyt3 = in->cur;
			goto yy66;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy90;
		default: goto yy6;
	}
yy92:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt18 = in->yyt42;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt25 = in->yyt26 = in->yyt28 = in->cur;
			goto yy100;
		case 'b':
			++in->cur;
			in->yyt41 = in->yyt12;
			in->yyt43 = in->yyt19;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy93;
		default: goto yy6;
	}
yy93:
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy94:
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt18 = in->yyt42;
			in->yyt19 = in->yyt43;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt37 = in->yyt27;
			in->yyt38 = in->yyt41;
			in->yyt65 = in->yyt11;
			in->yyt3 = in->cur;
			goto yy66;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy93;
		default: goto yy6;
	}
yy95:
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt38 = in->yyt20;
			in->yyt3 = in->cur;
			goto yy66;
		case 'b':
			++in->cur;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy95;
		default: goto yy6;
	}
yy96:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			in->yyt18 = in->yyt23;
			in->yyt19 = in->yyt24;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt24 = in->yyt3;
			in->yyt3 = in->yyt4;
			in->yyt4 = in->yyt5;
			in->yyt5 = in->yyt6;
			in->yyt6 = in->cur;
			goto yy96;
		case 'b':
			++in->cur;
			goto yy101;
		default: goto yy6;
	}
yy97:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt18 = in->yyt27;
			in->yyt19 = in->yyt10;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt42;
			in->yyt4 = in->yyt43;
			in->yyt6 = in->yyt11;
			in->yyt7 = in->yyt8;
			in->yyt8 = in->yyt23;
			in->yyt9 = in->yyt24;
			in->yyt10 = in->yyt25;
			in->yyt19 = in->yyt11;
			in->yyt54 = in->yyt26;
			in->yyt15 = in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
			in->yyt5 = in->yyt41;
			goto yy70;
		case 'b':
			++in->cur;
			in->yyt24 = in->yyt20;
			in->yyt26 = in->yyt21;
			in->yyt28 = in->yyt10;
			in->yyt37 = in->yyt38 = in->yyt39 = in->yyt40 = in->cur;
			goto yy77;
		default: goto yy6;
	}
yy98:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt7 = in->yyt21;
			in->yyt18 = in->yyt64;
			in->yyt19 = in->yyt65;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt7 = in->yyt29;
			in->yyt18 = in->yyt15;
			in->yyt19 = in->yyt15;
			in->yyt64 = in->yyt8;
			in->yyt65 = in->yyt9;
			in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
			goto yy72;
		case 'b':
			++in->cur;
			in->yyt6 = in->yyt62;
			in->yyt9 = in->yyt20;
			in->yyt11 = in->yyt61;
			in->yyt18 = in->yyt64;
			in->yyt19 = in->yyt65;
			in->yyt29 = in->yyt63;
			in->yyt54 = in->yyt21;
			in->yyt27 = in->yyt41 = in->yyt42 = in->yyt43 = in->cur;
			goto yy80;
		default: goto yy6;
	}
yy99:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt7 = in->yyt54;
			in->yyt18 = in->yyt39;
			in->yyt19 = in->yyt6;
			in->yyt6 = in->yyt10;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt29 = in->yyt40 = in->yyt43 = in->cur;
			goto yy102;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt13;
			in->yyt40 = in->yyt6;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy90;
		default: goto yy6;
	}
yy100:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt4 = in->yyt65;
			in->yyt18 = in->yyt42;
			in->yyt19 = in->yyt3;
			in->yyt3 = in->yyt64;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt29 = in->yyt40 = in->yyt43 = in->cur;
			goto yy103;
		case 'b':
			++in->cur;
			in->yyt41 = in->yyt13;
			in->yyt43 = in->yyt3;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy93;
		default: goto yy6;
	}
yy101:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt4 = in->yyt65;
			in->yyt6 = in->yyt37;
			in->yyt7 = in->yyt38;
			in->yyt18 = in->yyt23;
			in->yyt19 = in->yyt24;
			goto yy67;
		case 'b':
			++in->cur;
			goto yy101;
		default: goto yy6;
	}
yy102:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt6 = in->yyt10;
			in->yyt18 = in->yyt39;
			in->yyt19 = in->yyt7;
			in->yyt7 = in->yyt54;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt2 = in->yyt5;
			in->yyt19 = in->yyt11;
			in->yyt64 = in->yyt8;
			in->yyt65 = in->yyt9;
			in->yyt3 = in->yyt4 = in->cur;
			goto yy85;
		case 'b':
			++in->cur;
			in->yyt38 = in->yyt14;
			in->yyt40 = in->yyt7;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy90;
		default: goto yy6;
	}
yy103:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			in->yyt3 = in->yyt64;
			in->yyt18 = in->yyt42;
			in->yyt19 = in->yyt4;
			in->yyt4 = in->yyt65;
			goto yy67;
		case 'a':
			++in->cur;
			in->yyt19 = in->yyt5;
			in->yyt37 = in->yyt27;
			in->yyt38 = in->yyt41;
			in->yyt65 = in->yyt11;
			in->yyt3 = in->yyt4 = in->cur;
			goto yy85;
		case 'b':
			++in->cur;
			in->yyt41 = in->yyt14;
			in->yyt43 = in->yyt4;
			in->yyt23 = in->yyt24 = in->cur;
			goto yy93;
		default: goto yy6;
	}
}
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/25__cat4_4.re"

}
