/*
  Copyright (C) 2018  Julian Gaal
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include <ros/ros.h>
#include <jaco_manipulation/server/jaco_manipulation_server.h>
#include <reground_api/reground_api.h>

int main(int argn, char *args[]) {
  ros::init(argn, args, "manipulation_server");
  ros::MultiThreadedSpinner spinner(2);

  ROS_STATUS("Starting server for manipulation.");
  jaco_manipulation::server::JacoManipulationServer jms;

  ROS_STATUS("Starting server for reground manipulation logic");
  reground_api::RegroundAPI rga;

  ROS_SUCCESS("All servers are up.");

  spinner.spin();
}