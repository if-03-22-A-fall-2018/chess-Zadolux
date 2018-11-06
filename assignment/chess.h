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

enum PieceColor {WHITE, BLACK};
enum PieceType {PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING};

 struct ChessPiece {
   enum PieceColor color;
   enum PieceType type;
 };
