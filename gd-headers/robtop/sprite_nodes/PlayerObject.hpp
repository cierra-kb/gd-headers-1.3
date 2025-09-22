#pragma once

#include <cocos2d.h>
#include "robtop/sprite_nodes/GameObject.hpp"

class GhostTrailEffect;
class CheckpointObject;

enum class PlayerButton : int32_t {
    Unknown = 1,
};

class PlayerObject : public GameObject {
public:
    int m_UNKNOWN0;
    int m_ghostType;
    GhostTrailEffect *m_ghostTrail;
    cocos2d::CCSprite *m_firstSpritePart;
    cocos2d::CCSprite *m_secondSpritePart;
    cocos2d::CCSprite *m_shipSprite;
    cocos2d::CCMotionStreak *m_motionStreak;
    double m_xVelocity;
    double m_jumpYStart;
    double m_gravity;
    float m_UNKNOWN1;
    bool m_UNKNOWN2;
    bool m_bIsRising;
    bool m_canJump;
    bool m_bButtonPushed;
    bool m_UNKNOWN3;
    bool m_UNKNOWN4;
    bool m_UNKNOWN5;
    bool m_UNKNOWN6;
    bool m_UNKNOWN7;
    bool m_particleActivated;
    bool m_UNKNOWN8;
    bool m_UNKNOWN9;
    float m_UNKNOWN10;
    float m_UNKNOWN11;
    double m_yVelocity;
    char m_UNKNOWN12[8];
    double m_distanceFromLandedObject;
    float m_UNKNOWN13;
    bool m_UNKNOWN14;
    char m_UNKNOWN15[3];
    GameObject *m_landedObject;
    CheckpointObject *m_pendingCheckpoint;
    int m_checkpointTick;
    cocos2d::CCPoint m_previousPosition;
    cocos2d::CCParticleSystemQuad *m_dragParticle1;
    cocos2d::CCParticleSystemQuad *m_dragParticle2;
    cocos2d::CCParticleSystemQuad *m_dragParticle3;
    cocos2d::CCParticleSystemQuad *m_shipDragParticle;
    int m_UNKNOWN16;
    cocos2d::CCParticleSystemQuad *m_landEffectParticle;
    cocos2d::CCParticleSystemQuad *m_landEffectParticle2;
    float m_fLandEffectParticleAngle;
    float m_fLandEffectParticleYGravity;
    bool m_flyMode;
    bool m_rollMode;
    bool m_gravityFlipped;
    bool m_isDead;
    cocos2d::CCPoint m_lastPos;
    cocos2d::CCPoint m_portalPos;
    cocos2d::CCLayer *m_gameLayer;
    bool m_onGround;
    bool m_isLocked;
    char m_UNKNOWN17[2];
    cocos2d::CCPoint m_UNKNOWN18;
    GameObject *m_touchedRing;
    GameObject *m_portalObject;
    bool m_UNKNOWN19;
    bool m_hasRingJumped;

    static PlayerObject* create(int, cocos2d::CCLayer*);
    //virtual ~PlayerObject();
    bool playerIsFalling();
    int flipMod();
    void runRotateAction();
    void runBallRotation2();
    void activateStreak();

    void updateShipRotation(float);
    virtual void update(float);
    virtual void setPosition(cocos2d::CCPoint const&);
    virtual void setOpacity(GLubyte) override;
    virtual void setColor(cocos2d::ccColor3B const&);
    virtual void resetObject();
    virtual const cocos2d::CCPoint getRealPosition();
    virtual bool getFlyMode() const;
    virtual bool getRollMode() const;
    virtual bool getGravityFlipped() const;
    virtual void getIsDead() const;
    virtual void getLastP() const;
    virtual void setLastP(cocos2d::CCPoint);
    virtual void getPortalP() const;
    virtual void setPortalP(cocos2d::CCPoint);
    virtual void getGameLayer() const;
    virtual void setGameLayer(cocos2d::CCLayer *);
    virtual void getOnGround() const;
    virtual void setOnGround(bool);
    virtual bool getIsLocked() const;
    virtual void getLastGroundPos() const;
    virtual void getTouchedRing() const;
    virtual void setTouchedRing(GameObject *);
    virtual void getPortalObject() const;
    virtual void setPortalObject(GameObject *);
    virtual void getHasJumped() const;
    virtual void getHasRingJumped() const ;

    void hitGround(bool);
    void flipGravity(bool);
    void propellPlayer(float);
    void collidedWithObject(float, GameObject*);
    void ringJump();
    void deactivateStreak();
    void setSecondColor(cocos2d::ccColor3B const&);
};
