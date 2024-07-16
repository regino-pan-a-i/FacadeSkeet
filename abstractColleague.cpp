#include "abstractColleague.h"
#include "bird.h"
#include "mediator.h"
#include "bullet.h"
#include "message.h"

Bird* pBird;
Bullet* pBullet;
//Bullet bullet;
//ScoreColleague scoreColleague;
//HitRatioColleague hitRatioColleague;
//Status status;

void birdColleague::wasShot()
{
	MessageType message = MessageType(BIRD_DIED);
	int messageValue = -pBird->getPoints();
	mediator->notify(message);
}

void birdColleague::wentOutOfBounds()
{
	MessageType message = MessageType(BIRD_DIED);
	int messageValue = -pBird->getPoints();
	mediator->notify(message);
}



void bulletColleague::wentOutOfBounds()
{
	MessageType message = MessageType(BULLET_FIRED);
	int messageValue = -pBullet->getValue();
	mediator->notify(message);
};


void bulletColleague::firedBullet()
{
	MessageType message = MessageType(BULLET_FIRED);
	int messageValue = -pBullet->getValue();
	mediator->notify(message);
};