//
//  MainScene.h
//  TileMapEditor
//
//  Created by Sway007 on 9/5/15.
//
//

#ifndef __TileMapEditor__MainScene__
#define __TileMapEditor__MainScene__

#include "cocos2d.h"
#include <UIScrollView.h>

#include "MapLayer.h"

enum class Mode{
    DRAG_MAP,
    DRAG_ITEMS
};

enum class ZOrders{
    ZORDER_MAP = 1,
    ZORDER_MODELSWITCHER = 10
};

class MainScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    
private:
    MainScene():
    _scrollBox(nullptr),
    _modeSwitcher(nullptr),
    _map(nullptr)
    {}
    
    bool init();
    
    /**
     * @brief add mode switcher
     */
    void initModeSwitcher();
    void switchMode();
    std::string getSwitcherLabel();
    
private:
    // the bg img carrier
    cocos2d::ui::ScrollView* _scrollBox;
    // switch mode
    cocos2d::MenuItemLabel* _modeSwitcher;
    
    Mode _modeIndicator;
    
    MapLayer* _map;
};

#endif /* defined(__TileMapEditor__MainScene__) */
