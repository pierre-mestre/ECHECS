/*
 *	DATA.H
 *	Tom Kerrigan's Simple Chess Program (TSCP)
 *
 *	Copyright 1997 Tom Kerrigan
 */


/* this is basically a copy of data.c that's included by most
   of the source files so they can use the data.c variables */

extern int color[64];
extern int piece[64];
extern int side;
extern int xside;
extern int castle;
extern int ep;
extern int fifty; // si 50 coups jou�s
extern int hash;
extern int ply; // 
extern int hply;
extern gen_t gen_dat[GEN_STACK]; // coup a jou� � une profondeur n
extern int first_move[MAX_PLY];
extern int history[64][64]; // m�thode d'�lagage
extern hist_t hist_dat[HIST_STACK];
extern int max_time; // temps allou� de r�flexion
extern int max_depth;
extern int start_time;
extern int stop_time;
extern int nodes;
extern move pv[MAX_PLY][MAX_PLY]; // stocke les coups s�lectionn�s
extern int pv_length[MAX_PLY];
extern BOOL follow_pv;
extern int hash_piece[2][6][64];
extern int hash_side;
extern int hash_ep[64];
extern int mailbox[120];
extern int mailbox64[64];
extern BOOL slide[6];
extern int offsets[6];
extern int offset[6][8];
extern int castle_mask[64];
extern char piece_char[6];
extern int init_color[64];
extern int init_piece[64];
int canAttack[6][64][64] ; // canAttack[TypeDePiece][Source][Destination]
