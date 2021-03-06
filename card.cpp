#include "card.h"

card::card(cardface face_given) {
	face = face_given;
	switch (face){
	case one: 
		human_rules = "Either start a pawn OR move one pawn forward 1 space.";
		break;
	case two:
		human_rules = "Either start a pawn OR move one pawn forward 2 spaces. Draw again.";
		break;
	case three:
		human_rules = "Move one pawn forawrd 3 spaces.";
		break;
	case four:
		human_rules = "Move one pawn backwards 4 spaces.";
		break;
	case five:
		human_rules = "Move one pawn forward 5 spaces.";
		break;
	case seven:
		human_rules = "Either move one pawn forward 7 spaces OR split the forawrd move between any two pawns. You may not use this to start a pawn.";
		break;
	case eight:
		human_rules = "Move one pawn forward 8 spaces.";
		break;
	case ten: 
		human_rules = "Either move one pawn forward 10 spaces OR move one pawn back 1 space.";
		break;
	case eleven:
		human_rules = "Move one pawn forward 11 spaces OR switch any one of your pawns with any one of your opponent's.";
		break;
	case twelve:
		human_rules = "Move one pawn forward 12 spaces.";
		break;
	case sorry:
		human_rules = "Take one pawn from start, move it to any space occupied by an opponent, and bump that player's pawn back to its START.";
		break;
	}
}