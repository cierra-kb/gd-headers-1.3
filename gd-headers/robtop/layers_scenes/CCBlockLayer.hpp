#pragma once

#include <layers_scenes_transitions_nodes/CCLayer.h>
#include <touch_dispatcher/CCTouch.h>

class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    bool m_bRemoveOnExit;
    
    virtual ~CCBlockLayer();
    virtual void draw();
    virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void registerWithTouchDispatcher();
    virtual void customSetup();
    virtual void enterLayer();
    virtual void exitLayer();
    virtual void showLayer();
    virtual void hideLayer();
    virtual void layerVisible();
    virtual void layerHidden();
    virtual void enterAnimFinished();
    virtual void disableUI();
    virtual void enableUI();
    virtual void keyBackClicked();
    virtual bool getRemoveOnEdit();
    virtual void setRemoveOnExit();
};
