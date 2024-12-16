#pragma once

struct Vector2 {
	float x;
	float y;
};

class Player {
public:

	Player();
	~Player();
	
	void Init();
	void Update();
	void Draw();

public:	// メンバ関数

	void MoveRight();
	void MoveLeft();

private:

	Vector2 pos_ = { 200.0f, 200.0f };
	float speed_ = 3.0f;

	float height_ = 50.0f;
	float width_ = 50.0f;

};

