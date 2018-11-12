/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
#include "chess.h"

bool is_piece(struct ChessPiece pc, enum PieceColor color, enum PieceType type)
{
   return false;
}

void init_chess_board(ChessBoard board) {}
void setup_chess_board(ChessBoard board) {}

struct ChessSquare* get_square(ChessBoard chess_board, File file, Rank rank) {
  return 0;
}

bool is_square_occupied(ChessBoard chess_board, File file, Rank rank) {
  return false;
}

bool add_piece(ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
{
  return false;
}

bool remove_piece(ChessBoard chess_board, File file, Rank rank)
{
  return false;
}

struct ChessPiece get_piece(ChessBoard chess_board, File file, Rank rank)
{
  struct ChessPiece a;
  return a;
}

bool squares_share_file(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_rank(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_diagonal(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_knights_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_pawns_move(enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_queens_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}

bool squares_share_kings_move(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  return false;
}
