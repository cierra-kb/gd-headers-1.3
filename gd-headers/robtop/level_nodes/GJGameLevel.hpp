#pragma once

#include <cocos2d.h>
#include <string>

typedef enum {
    Local = 1,
    Editor = 2,
    Saved = 3 
} GJLevelType;

class GJGameLevel : public cocos2d::CCNode
{
public:
    int m_nLevelID;
    std::string m_sLevelName;
    std::string m_sLevelDesc;
    std::string m_sLevelString;
    std::string m_sUserName;
    int m_nUserID;
    int m_nDifficulty;
    int m_nAudioTrack;
    int m_nRatings;
    int m_nRatingsSum;
    int m_nDownloads;
    int m_nCompletes;
    bool m_bIsEditable;
    bool m_bIsVerified;
    bool m_bIsUploaded;
    int m_nLevelVersion;
    int m_nGameVersion;
    int m_nAttempts;
    int m_nNormalPercent;
    int m_nPracticePercent;
    int m_nLikes;
    int m_nDislikes;
    int m_nLevelLength;
    bool m_bDemon;
    int m_nStars;
    cocos2d::CCPoint m_obLastCameraPos;
    float m_fLastEditorZoom;
    GJLevelType m_eLevelType;
    int m_nM_ID;

    static GJGameLevel* create(cocos2d::CCDictionary*);
    virtual ~GJGameLevel();

    virtual int getLevelID();
    virtual void setLevelID(int);

    virtual const std::string& getLevelName();
    virtual void setLevelName(std::string);

    virtual const std::string& getLevelDesc();
    virtual void setLevelDesc(std::string);

    virtual const std::string getLevelString();
    virtual void setLevelString(std::string);

    virtual const std::string& getUserName();
    virtual void setUserName(std::string);

    virtual int getUserID();
    virtual void setUserID(int);

    virtual int getDifficulty();
    virtual void setDifficulty(int);

    virtual int getAudioTrack();
    virtual void setAudioTrack(int);

    virtual int getRatings();
    virtual void setRatings(int);

    virtual int getRatingsSum();
    virtual void setRatingsSum(int);

    virtual int getDownloads();
    virtual void setDownloads(int);

    virtual int getCompletes();
    virtual void setCompletes(int);

    virtual bool getIsEditable();
    virtual void setIsEditable(bool);

    virtual bool getIsVerified();
    virtual void setIsVerified(bool);

    virtual bool getIsUploaded();
    virtual void setIsUploaded(bool);

    virtual int getLevelVersion();
    virtual void setLevelVersion(int);

    virtual int getGameVersion();
    virtual void setGameVersion(int);

    virtual int getAttempts();
    virtual void setAttempts(int);

    virtual int getNormalPercent();
    virtual void setNormalPercent(int);

    virtual int getPracticePercent();
    virtual void setPracticePercent(int);

    virtual int getLikes();
    virtual void setLikes(int);

    virtual int getDislikes();
    virtual void setDislikes(int);

    virtual int getLevelLength();
    virtual void setLevelLength(int);

    virtual bool getDemon();
    virtual void setDemon(bool);

    virtual int getStars();
    virtual void setStars(int);

    virtual const cocos2d::CCPoint& getLastCameraPos();
    virtual void setLastCameraPos(cocos2d::CCPoint);

    virtual float getLastEditorZoom();
    virtual void setLastEditorZoom(float);

    virtual GJLevelType getLevelType();
    virtual void setLevelType(GJLevelType);

    virtual int getM_ID();
};
