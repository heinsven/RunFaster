//
// Created by 尹思宇 on 2019/3/24.
// 车辆信息：#(id,始发地,目的地,最高速度,出发时间)
//

class car {
private:
    string car_ID, begin_cross, end_cross;
    int max_speed, begin_time;
public:
    car(string car_ID, string begin_cross, string end_cross, int max_speed, int begin_time) : car_ID(car_ID),
                                                                                              begin_cross(begin_cross),
                                                                                              end_cross(end_cross),
                                                                                              max_speed(max_speed),
                                                                                              begin_time(begin_time) {}
};