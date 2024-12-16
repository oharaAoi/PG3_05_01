﻿#include "Command.h"
#include "Actor/Player.h"

//////////////////////////////////////////////////////////////////////////////////////////////////
// ↓　右に進む処理
//////////////////////////////////////////////////////////////////////////////////////////////////

void MoveRightCommand::Exec(Player& player) {
	player.MoveRight();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// ↓　左に進む処理
//////////////////////////////////////////////////////////////////////////////////////////////////

void MoveLeftCommand::Exec(Player& player) {
	player.MoveLeft();
}
