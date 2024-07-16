#pragma once
#include "mediator.h"
#include "message.h"
class Mediator;
class Bird;
class abstractColleague
{
public:
    virtual void notify(int message) = 0;
    void  enroll(Mediator* mediator);
    void  unenroll(Mediator* mediator);

protected:
    Mediator* mediator;
    enum MessageType { BIRD_DIED, BULLET_FIRED };
};

class birdColleague : public abstractColleague
{
public:
	void wentOutOfBounds();
	void wasShot();

private:
    Bird* pBird;
};


//class HitRatioColleague : public abstractColleague
//{
//public:
//	void notify(const Message& message) {
//		if (message.type == BIRD_DIED) {
//			pStatus.adjust(message.value);
//    }
//}
//
//	void setStatus(Status* status) { pStatus = *status; }
//
//private:
//Status* pStatus;
//};


//class ScoreColleague : public abstractColleague
//{
// //score colleague
//public:
//	void notify(const Message& message) {
//		pmessage.adjust(message.value);
//	}
//
//	void setStatus(Status* status) { pStatus = *status; }
//
//private:
//	Message* pMessage;
//};
//
//
class bulletColleague : public abstractColleague
{
public:
    void wentOutOfBounds();
    void firedBullet();

};