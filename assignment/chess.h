/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */
#ifndef __CHESS_H
#define __CHESS_H

enum PieceColor { White, Black };
enum PieceType { NoPiece, Pawn, Rook, Knight, Bishop, Queen, King };
enum MoveType { NormalMove, CaptureMove };

struct ChessPiece {
  enum PieceColor color;
  enum PieceType type;
};

struct ChessSquare {
  bool is_occupied;
  struct ChessPiece piece;
};

typedef struct ChessSquare ChessBoard[8][8];
typedef char File;
typedef int Rank;

bool is_piece(struct ChessPiece pc, enum PieceColor color, enum PieceType type);
void init_chess_board(ChessBoard board);
void setup_chess_board(ChessBoard board);
struct ChessSquare* get_square(ChessBoard chess_board, File file, Rank rank);
bool is_square_occupied(ChessBoard chess_board, File file, Rank rank);
bool add_piece(ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece);
bool remove_piece(ChessBoard chess_board, File file, Rank rank);
struct ChessPiece get_piece(ChessBoard chess_board, File file, Rank rank);
bool squares_share_file(File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_rank(File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_diagonal(File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_knights_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_pawns_move(enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_queens_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool squares_share_kings_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r);

#endif
