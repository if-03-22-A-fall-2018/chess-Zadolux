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
  return (pc.color == color && pc.type == type);
}

void init_chess_board(ChessBoard board) {
  for(int f = 0; f < 8; f++)
  {
    for(int r = 0; r < 8; r++)
    {
      board[r][f].is_occupied = false;
    }
  }
}

void setup_chess_board(ChessBoard chess_board) {
   struct ChessPiece white_pawn = {White, Pawn};
   struct ChessPiece white_rook = {White, Rook};
   struct ChessPiece white_knight = {White, Knight};
   struct ChessPiece white_bishop = {White, Bishop};
   struct ChessPiece white_queen = {White, Queen};
   struct ChessPiece white_king = {White, King};

   struct ChessPiece black_pawn = {Black, Pawn};
   struct ChessPiece black_rook = {Black, Rook};
   struct ChessPiece black_knight = {Black, Knight};
   struct ChessPiece black_bishop = {Black, Bishop};
   struct ChessPiece black_queen = {Black, Queen};
   struct ChessPiece black_king = {Black, King};

   init_chess_board(chess_board);

   for (int i = 'a'; i <= 'h'; i++) {
     add_piece(chess_board, i, 2, white_pawn);
     add_piece(chess_board, i, 7, black_pawn);
   }

   add_piece(chess_board, 'a', 1, white_rook);
   add_piece(chess_board, 'h', 1, white_rook);
   add_piece(chess_board, 'b', 1, white_knight);
   add_piece(chess_board, 'g', 1, white_knight);
   add_piece(chess_board, 'c', 1, white_bishop);
   add_piece(chess_board, 'f', 1, white_bishop);
   add_piece(chess_board, 'd', 1, white_queen);
   add_piece(chess_board, 'e', 1, white_king);

   add_piece(chess_board, 'a', 8, black_rook);
   add_piece(chess_board, 'h', 8, black_rook);
   add_piece(chess_board, 'b', 8, black_knight);
   add_piece(chess_board, 'g', 8, black_knight);
   add_piece(chess_board, 'c', 8, black_bishop);
   add_piece(chess_board, 'f', 8, black_bishop);
   add_piece(chess_board, 'd', 8, black_queen);
   add_piece(chess_board, 'e', 8, black_king);
}

struct ChessSquare* get_square(ChessBoard chess_board, File file, Rank rank) {
  if(file <= 'h' && rank <= 8)
  {
    return &chess_board[rank - 1][file - 'a'];
  }
  else
  {
    return 0;
  }
}

bool is_square_occupied(ChessBoard chess_board, File file, Rank rank) {
  return chess_board[rank - 1][file - 'a'].is_occupied;
}

bool add_piece(ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece)
{
  if((rank <= 8) && (file <= 'h') && !is_square_occupied(chess_board, file, rank))
  {
    chess_board[rank - 1][file - 'a'].piece = piece;
    chess_board[rank - 1][file - 'a'].is_occupied = true;
    return true;
  }
  else
  {
    return false;
  }
}

bool remove_piece(ChessBoard chess_board, File file, Rank rank)
{
  if((rank <= 8) && (file <= 'h') && is_square_occupied(chess_board, file, rank))
  {
    chess_board[rank - 1][file - 'a'].is_occupied = false;
    chess_board[rank - 1][file - 'a'].piece.type = NoPiece;
    return true;
  }
  else
  {
    return false;
  }
}

struct ChessPiece get_piece(ChessBoard chess_board, File file, Rank rank)
{
  if((rank <= 8) && (file <= 'h') && is_square_occupied(chess_board, file, rank))
  {
    return chess_board[rank - 1][file - 'a'].piece;
  }
  else
  {
    struct ChessPiece chess_piece_empty;
    chess_piece_empty.type = NoPiece;
    return chess_piece_empty;
  }
}

bool squares_share_file(File s1_f, Rank s1_r, File s2_f, Rank s2_r)
{
  if((s1_f <= 'h' && s1_f >= 'a') && (s2_f <= 'h' && s2_f >= 'a'))
  {
    if(s1_f == s2_f)
    {
      return true;
    }
  }

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
