/**
 * Copyright (C) 2019.7.30 Cai
 */

#ifndef LOADDATA_H
#define LOADDATA_H

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
#include <utility>
#include <set>
#include <map>
#include <queue>
#include <Eigen/Dense>

using namespace std;

namespace LoadData
{
//LoadImgData form KeyFrame.txt
class LoadImgData
{
private:
    //position xyz[3]
    Eigen::Vector3d xyz;
    //x*sin(theta/2),y*sin(theta/2),z*sin(theta/2),cos(theta/2)
    Eigen::Vector4d qxyz;
    
    vector<pair<Eigen::Vector3d,Eigen::Vector4d> >vImgPos ;
    
    std::vector<double> vImgTimestramps;
    //time,posi
    map<vector<double>,vector<pair<Eigen::Vector3d,Eigen::Vector4d> > > ImgData;
public:
    LoadImgData(const std::string &strImgfilename);
    ~LoadImgData();
};

//LoadMagData form Mag.txt
class LoadMagData
{
private:
    //position xyz[3]
    Eigen::Vector3d xyz;
    //unit vector unit_xyz[3]
    Eigen::Vector3d unit_xyz;
    std::vector<double> vMagTimestramps;
    //time,posi
    vector<pair<Eigen::Vector3d,Eigen::Vector3d> > vMagPos ;
    map<vector<double>,vector<pair<Eigen::Vector3d,Eigen::Vector3d> > > MagData;
public:
    LoadMagData(const std::string &strMagfilename);
    ~LoadMagData();
};
    
} // namespace LoadData

#endif //LOADDATA_H