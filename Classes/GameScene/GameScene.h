//
//  GameScene.h
//  AITetris
//
//  Created by yangjh on 15/4/26.
//
//

#ifndef __AITetris__GameScene__
#define __AITetris__GameScene__

#include <stdio.h>
#include "GameLayer.h"
#include "GameCtrlLayer.h"

USING_NS_CC;

class GameScene : public Scene, public GameCtrlLayerDelegate
{
public:
    virtual bool init();
    CREATE_FUNC(GameScene);
    
public:
    // GameCtrlLayerDelegate
    virtual void gameCtrlLayerClickStartGame();
    virtual void gameCtrlLayerStartAI(bool AIOn);
    virtual void gameCtrlLayerClickAccelerate();
    virtual void gameCtrlLayerClickDecelerate();
    virtual float gameCtrlLayerGetAISpeed();
    virtual void gameCtrlLayerClickLeft();
    virtual void gameCtrlLayerClickRight();
    virtual void gameCtrlLayerClickRotate();
    virtual void gameCtrlLayerClickThrowDown();
    
private:
    GameLayer *m_gameLayer;
};

#endif /* defined(__AITetris__GameScene__) */
