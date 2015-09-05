//
//  MainScene.cpp
//  TileMapEditor
//
//  Created by Sway007 on 9/5/15.
//
//

#include "MainScene.h"
#include <UIButton.h>

using namespace cocos2d;

Scene* MainScene::createScene()
{
    auto ret = new(std::nothrow) MainScene();
    if (ret && ret->init())
    {
        ret->autorelease();
    }
    else
    {
        delete ret;
        ret = NULL;
    }
    return ret;
}

bool MainScene::init()
{
    if (!Scene::init())
        return false;
    
    this->initModeSwitcher();
    
    return true;
}

void MainScene::initModeSwitcher()
{
    Label* label = Label::createWithSystemFont(this->getSwitcherLabel(), "", 20);
    _modeSwitcher = MenuItemLabel::create(label, CC_CALLBACK_0(MainScene::switchMode, this));
    _modeSwitcher->setNormalizedPosition(Vec2(0.8, 0.8));
    
    Menu* menu = Menu::createWithItem(_modeSwitcher);
    menu->setZOrder((int)ZOrders::ZORDER_MODELSWITCHER);
    
    this->addChild(menu);
}

std::string MainScene::getSwitcherLabel()
{
    return _modeIndicator == Mode::DRAG_MAP ? "拖动地图" : "拖动建筑物";
}

void MainScene::switchMode()
{
    _modeIndicator = _modeIndicator == Mode::DRAG_MAP ? Mode::DRAG_ITEMS : Mode::DRAG_MAP;
    
    // TODO
}

