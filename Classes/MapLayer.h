//
//  MapLayer.h
//  TileMapEditor
//
//  Created by Sway007 on 9/5/15.
//
//

#ifndef __TileMapEditor__MapLayer__
#define __TileMapEditor__MapLayer__

#include "cocos2d.h"

class MapLayer : public cocos2d::Node
{
public:
    CREATE_FUNC(MapLayer)
    
private:
    bool init();
    
    void initBgImgs();
    
private:
    
};

#endif /* defined(__TileMapEditor__MapLayer__) */
