#ifndef __NEWSCENE_H__
#define __NEWSCENE_H__

#include "cocos2d.h"
#include "SystemHeader.h"
#include "MyUtility.h"
#include "PlayMapOne.h"
#include "PlaySceneOne.h"
#include "GameDirectory.h"

class newScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

	virtual void onEnterTransitionDidFinish();

	void menuBackCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(newScene);
};

#endif // __HELPLAYER_SCENE_H__
