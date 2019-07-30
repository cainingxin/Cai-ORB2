/**
 * Copyright (C) 2019.7.30 Cai
 */

#include <LoadData.h>

namespace LoadData
{
LoadMagData::LoadMagData(const std::string &strMagFile)
{
 std::ifstream f;
    f.open(strMagFile.c_str());

    while (!f.eof())
    {
        string s;
        getline(f,s);
        stringstream ss;
        ss  << s;
        double t;
        ss >> t;
        MagTimestramps.push_back(t);
        double x,y,z,ux,uy,uz;
        ss >> x;
        ss >> y;
        ss >> z;
        ss >> ux;
        ss >> uy;
        ss >> uz;
        xyz[0] = x;
        xyz[1] = y;
        xyz[2] = z;
        unit_xyz[0] = ux;
        unit_xyz[1] = uy;
        unit_xyz[2] = uz; 
        MagPos.push_back(make_pair(xyz,unit_xyz));     

    }
}

LoadImgData::LoadImgData(const std::string &strImgfile)
{
    std::ifstream f;
    f.open(strImgfile.c_str());

    while (!f.eof())
    {
        string s;
        getline(f,s);
        stringstream ss;
        ss  << s;
        double t;
        ss >> t;
        ImgTimestramps.push_back(t);
        double x,y,z,qx,qy,qz,theta;
        ss >> x;
        ss >> y;
        ss >> z;
        ss >> qx;
        ss >> qy;
        ss >> qz;
        ss >> theta;
        xyz[0] = x;
        xyz[1] = y;
        xyz[2] = z;
        qxyz[0] = qx;
        qxyz[1] = qy;
        qxyz[2] = qz; 
        qxyz[3] = theta;
        ImgPos.push_back(make_pair(xyz,qxyz));     

    }
}

LoadMagData::~LoadMagData()
{
}

LoadImgData::~LoadImgData()
{
}

}