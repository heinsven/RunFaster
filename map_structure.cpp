//
// Created by 尹思宇 on 2019/3/24.
// 地图网络结构
// 道路信息：#(道路id，道路长度，最高限速，车道数目，起始点id，终点id，是否双向)
// 车辆信息：#(id,始发地,目的地,最高速度,出发时间)不计
// 路口信息：#(结点id,道路id,道路id,道路id,道路id)
//

#include "road.cpp"


class map_structure {
private:
    string cross_ID;
    string road_ID;
    road *west, *east, *north, *south;
public:
    map_structure(string cross_ID,int road1,int road2,int road3,int road4) : cross_ID(cross_ID), west(nullptr), east(nullptr), north(nullptr),
                                     south(nullptr) {}
/*    search_road(string cross1,string cross2,road_message road1){
        if(road1.begin_ID==cross_ID1&&road2.end_ID==cross_ID2)
    }*/

};
