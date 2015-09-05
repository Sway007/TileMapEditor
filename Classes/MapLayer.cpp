//
//  MapLayer.cpp
//  TileMapEditor
//
//  Created by Sway007 on 9/5/15.
//
//

#include "MapLayer.h"

using namespace cocos2d;

bool MapLayer::init()
{
    if (!Node::init())
        return false;
    
    this->initBgImgs();
    return true;
}

void MapLayer::initBgImgs()
{
    for (int i = 0; i <= 28; i++)
    {
        
    }
}