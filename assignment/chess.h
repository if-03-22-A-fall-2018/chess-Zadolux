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

enum PieceColor { White, Black };
enum PieceType { Pawn, Rook, Knight, Bishop, Queen, King };

struct ChessPiece {
  enum PieceColor color;
  enum PieceType type;
};

struct ChessSquare {
  bool is_occupied;
  struct ChessPiece piece;
};

typedef struct ChessSquare ChessBoard[8][8];
