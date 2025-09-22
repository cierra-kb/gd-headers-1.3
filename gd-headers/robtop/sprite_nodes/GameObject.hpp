#pragma once

#include <cocos2d.h>
#include <string>

enum GameObjectType : int32_t {
    Hazard = 2,
    InvertGravityPortal = 3,
    NormalGravityPortal = 4,
    ShipPortal = 5,
    CubePortal = 6,
    UnknownType = 7,
    YellowPad = 9,
    GravityPad = 10,
    YellowOrb = 11,
    BlueOrb = 12,
    MirrorPortal = 13,
    CounterMirrorPortal = 14,
    BallPortal = 15
};

class GameObject : public cocos2d::CCSprite {
public:
    cocos2d::CCSprite *m_pGlowSprite;
    bool m_bIsTrigger_unk;
    bool m_bIsOrb_unk;
    bool m_bPoweredOn;
    bool m_bUnk;
    float m_fWidth;
    float m_fHeight;
    bool m_bActive;
    bool m_bHasGlow;
    cocos2d::CCParticleSystem *m_pParticleSystem;
    std::string m_stParticleKey;
    bool m_bAddedParticle_unk;
    cocos2d::CCPoint unk;
    bool m_bIsRotated;
    float m_fScaleModX;
    float m_fScaleModY;
    int m_nM_ID;
    GameObjectType m_objType;
    int m_nSectionIdx;
    bool m_bShouldSpawn;
    cocos2d::CCPoint m_pStartPos;
    std::string m_stTextureName;
    char m_eBlendAdditive;
    bool m_bUsePlayerColor;
    bool m_bUsePlayerColor2;
    bool m_bIsDisabled;
    bool m_bUseAudioScale;
    float m_fStartRotation;
    float m_fStartScaleX;
    float m_fStartScaleY;
    bool m_bShouldHide;
    float m_fSpawnXPos;
    bool m_bIsInvisible;
    float m_fEnterAngle;
    int m_nEnterEffect;
    cocos2d::ccColor3B m_obTintColor;
    float m_fTintDuration;
    int m_nObjectKey;
    bool m_bDontTransform;
    bool m_bHasBeenActivated;
    bool m_bStateVar;
    int m_nObjectZ;
    cocos2d::CCNode *m_pObjectParent;

    static GameObject* objectFromString(std::string);

    void updateState();
    bool init(const char*);
    static GameObject* createObject(const char*);
    void customSetup();

    virtual ~GameObject();

    virtual void update(float dt);
    virtual void setRotation(float);
    virtual void setScaleX(float);
    virtual void setScaleY(float);
    virtual void setPosition(const cocos2d::CCPoint&);
    virtual void setVisible(bool);
    virtual void setOpacity(unsigned char);
    virtual void setScale(float);

    virtual void resetObject();
    virtual void triggerObject();
    virtual void activateObject();
    virtual void deactivateObject();

    virtual const cocos2d::CCRect getObjectRect();
    virtual const cocos2d::CCRect getObjectRect(float, float);

    virtual const cocos2d::CCPoint getRealPosition();
    virtual void setStartPos(cocos2d::CCPoint);
    virtual const std::string getSaveString();

    virtual void setFlipX(bool);
    virtual void setFlipY(bool);

    virtual void calculateSpawnXPos();
    virtual void triggerActivated();
    virtual void powerOnObject();
    virtual void powerOffObject();

    virtual bool getIsRotated() const;

    virtual float getScaleModX() const;
    virtual void setScaleModX(float);

    virtual float getScaleModY()const;
    virtual void setScaleModY(float);

    virtual int getM_ID() const;
    virtual void setM_ID(int);

    virtual GameObjectType /*unk*/ getType() const;

    virtual int getSectionIdx() const;
    virtual void setSectionIdx(int);

    virtual bool /*unk*/ getShouldSpawn() const;
    virtual	const cocos2d::CCPoint getStartPos() const;
    virtual void* /*unk*/ getFrame() const;
    virtual void* /*unk*/ getBlendAdditive() const;

    virtual bool getUsePlayerColor() const;
    virtual bool getUsePlayerColor2() const;
    virtual bool getIsDisabled() const;

    virtual bool getUseAudioScale() const;
    virtual void setUseAudioScale(bool);

    virtual float getStartRotation() const;
    virtual void setStartRotation(float);

    virtual float getStartScaleX() const;
    virtual void setStartScaleX(float);

    virtual float getStartScaleY() const;
    virtual void setStartScaleY(float);

    virtual bool getShouldHide() const;
    virtual void setShouldHide(bool);

    virtual float getSpawnXPos() const;
    virtual bool getIsInvisible() const;

    virtual float getEnterAngle() const;
    virtual void setEnterAngle(float);

    virtual int getEnterEffect() const;
    virtual void setEnterEffect(int);

    virtual cocos2d::ccColor3B getTintColor() const;
    virtual void setTintColor(cocos2d::ccColor3B);

    virtual float getTintDuration() const;
    virtual void setTintDuration(float);

    virtual int getObjectKey() const;
    virtual void setObjectKey(int);

    virtual bool getDontTransform() const;
    virtual void setDontTransform(bool);

    virtual bool /*unk*/ getHasBeenActivated() const;

    virtual bool getStateVar() const;
    virtual void setStateVar(bool);

    virtual int getObjectZ() const;
    virtual void setObjectZ(int);

    virtual cocos2d::CCNode* getObjectParent() const;
    virtual void setObjectParent(cocos2d::CCNode*);
};

