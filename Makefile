all:
	g++ -o ChessSet ChessSet.cpp Knight.cpp Location.cpp Piece.cpp Rook.cpp Pawn.cpp Board.cpp Queen.cpp King.cpp Bishop.cpp

clean:
	rm *.o