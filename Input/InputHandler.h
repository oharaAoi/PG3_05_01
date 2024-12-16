#pragma once
#include <memory>
#include "Command/Command.h"

/// <summary>
/// 入力をまとめたクラス
/// </summary>
class InputHandler {
public:

	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveLeftCommand2PressKeyD();


private:
	std::unique_ptr<ICommand> pressKeyD_;
	std::unique_ptr<ICommand> pressKeyA_;

};

