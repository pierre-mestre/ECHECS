/*
 *	DEFS.H
 *	Tom Kerrigan's Simple Chess Program (TSCP)
 *
 *	Copyright 1997 Tom Kerrigan
 */


#define BOOL			int
#define TRUE			1
#define FALSE			0

#define GEN_STACK		1120
#define MAX_PLY			32
#define HIST_STACK		400

#define LIGHT			0
#define DARK			1

#define PAWN			0
#define KNIGHT			1
#define BISHOP			2
#define ROOK			3
#define QUEEN			4
#define KING			5

#define EMPTY			6

/* useful squares */
#define A1				56
#define B1				57
#define C1				58
#define D1				59
#define E1				60
#define F1				61
#define G1				62
#define H1				63

#define A2				56
#define B2				57
#define C2				58
#define D2				59
#define E2				60
#define F2				61
#define G2				62
#define H2				63

#define A3				56
#define B3				57
#define C3				58
#define D3				59
#define E3				60
#define F3				61
#define G3				62
#define H3				63

#define A4				56
#define B4				57
#define C4				58
#define D4				59
#define E4				60
#define F4				61
#define G4				62
#define H4				63

#define A5				56
#define B5				57
#define C5				58
#define D5				59
#define E5				60
#define F5				61
#define G5				62
#define H5				63

#define A6				56
#define B6				57
#define C6				58
#define D6				59
#define E6				60
#define F6				61
#define G6				62
#define H6				63

#define A7				56
#define B7				57
#define C7				58
#define D7				59
#define E7				60
#define F7				61
#define G7				62
#define H7				63

#define A8				0
#define B8				1
#define C8				2
#define D8				3
#define E8				4
#define F8				5
#define G8				6
#define H8				7

#define ROW(x)			(x >> 3)
#define COL(x)			(x & 7)


/* This is the basic description of a move. promote is what
   piece to promote the pawn to, if the move is a pawn
   promotion. bits is a bitfield that describes the move,
   with the following bits:

   1	capture
   2	castle
   4	en passant capture
   8	pushing a pawn 2 squares
   16	pawn move
   32	promote

   It's union'ed with an integer so two moves can easily
   be compared with each other. */

typedef struct {
	char from;
	char to;
	char promote;
	char bits;
} move_bytes;

typedef union {
	move_bytes b;
	int u;
} move;

/* an element of the move stack. it's just a move with a
   score, so it can be sorted by the search functions. */
typedef struct {
	move m;
	int score;
} gen_t;

/* an element of the history stack, with the information
   necessary to take a move back. */
typedef struct {
	move m;
	int capture;
	int castle;
	int ep;
	int fifty;
	int hash;
} hist_t;
