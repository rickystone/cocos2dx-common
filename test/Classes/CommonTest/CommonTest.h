#ifndef _CommonTest_H_
#define _CommonTest_H_

#include "../testBasic.h"
#include "cocos2d-common.h"

using namespace std;
USING_NS_CC;

// the class inherit from TestScene
// every Scene each test used must inherit from TestScene,
// make sure the test have the menu item for back to main menu
class CommonTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

class CommonDemo : public CCLayerColor
{
public:
    virtual void onEnter();
    virtual void onExit();
	
    virtual string title();
    virtual string subtitle();

    void restartCallback(CCObject* pSender);
    void nextCallback(CCObject* pSender);
    void backCallback(CCObject* pSender);
};

class CommonCalendar : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonGradientSprite : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonLocale : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonLocalization : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonMissile : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
    
    void onHit();
};

class CommonRichLabel : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonShake : public CommonDemo
{	
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonTiledSprite : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

class CommonTreeFadeInOut : public CommonDemo
{
public:
    virtual void onEnter();
    virtual string subtitle();
};

#endif
