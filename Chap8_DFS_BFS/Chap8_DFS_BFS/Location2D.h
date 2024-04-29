#pragma once

struct Location2D {
	int row;
	int col;

	//Structure생성자, row와 col 0으로 초기화
	Location2D(int r = 0, int c = 0) { 
		row = r; col = c; 
	}

	bool isNeighbor(Location2D& p) {
		return ((row ==p.row &&(col == p.col-1)))
	}

};