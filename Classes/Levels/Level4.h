#ifndef __LEVEL_4_H__
#define __LEVEL_4_H__

#include "EngineHelper.h"
#include "BaseLevel.h"
#include "../Element/Target.h"

class Level4 : public BaseLevel
{
public:
    virtual bool init();  
	virtual void restart();
	virtual void update(float);
	virtual int getLevel(){return 4;};
    CREATE_FUNC(Level4); 
private:
};

#endif // __LEVEL_4_H__
