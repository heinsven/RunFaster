//
// Created by 尹思宇 on 2019/3/24.
// 道路信息：#(道路id，道路长度，最高限速，车道数目，起始点id，终点id，是否双向)
//

class road_message {
private:
    string road_ID, begin_ID, end_ID;
    int road_length, max_speed, lane_num,bothway;
public:
    road_message(string road_ID, int road_length, int max_speed, int lane_num, string begin_ID, string end_ID,
                  both) : road_ID(road_ID), road_length(road_length), max_speed(max_speed), lane_num(lane_num),
                                 begin_ID(begin_ID),end_ID(end_ID),bothway(bothway) {}
};