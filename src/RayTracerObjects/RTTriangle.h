/**********************************************************\
            Nome:Eduardo Ceretta Dalla Favera
\**********************************************************/
#pragma once

#include <vector>
#include "GraphBasis/Vector3.h"
#include "GraphBasis/Color.h"

using namespace std;

class RTTriangle
{
    static unsigned int sTriangleNum;

    unsigned int mMaterialIndex;
    int mMyTriangleNum;
public:
   Vector3 v1, v2, v3;
   Vector3 n1, n2, n3;
   RTTriangle();
   RTTriangle(unsigned int materialIndex, Vector3 V1, Vector3 V2, Vector3 V3, Vector3 N1, Vector3 N2, Vector3 N3);

   unsigned int getMaterialIndex();
   unsigned int getGlobalIndex();
   static unsigned int getMaxNumTriangles();

   static vector<RTTriangle> readFromFile(unsigned int materialIndex, string fileName, Vector3 pos, Vector3 scale);
protected:
    static vector<RTTriangle> readUmFile(unsigned int materialIndex, string fileName, Vector3 pos, Vector3 scale);
    static vector<RTTriangle> readMshFile(unsigned int materialIndex, string fileName, Vector3 pos, Vector3 scale);

};

