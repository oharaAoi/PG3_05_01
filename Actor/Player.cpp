#include "Player.h"
#include "Novice.h"

Player::Player() {
}

Player::~Player() {
}

void Player::Init() {
}

void Player::Update() {
}

void Player::Draw() {
	Novice::DrawBox(
		static_cast<int>(pos_.x - (width_ / 2.0f)),
		static_cast<int>(pos_.y - (height_ / 2.0f)),
		static_cast<int>(width_),
		static_cast<int>(height_),
		0.0f, 
		WHITE,
		kFillModeSolid
	);
}

void Player::MoveRight() {
	pos_.x += speed_;
}

void Player::MoveLeft() {
	pos_.x -= speed_;
}
