#ifndef SCENEPARSER_H
#define SCENEPARSER_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <cstring>
#include <algorithm>

#include "cutil_math.h"

#include "object.h"


class Scene
{
    public:
        Scene();

        void loadScene(const char* scenePath);
        std::string purgeString(std::string  bloatedString);
        float3 stringToFloat3(std::string vecString);

		int getSphereCount();
		SphereObject* getSceneSpheresList();

	private:
		int sceneSphereCount = 0;
        SphereObject* sceneSpheresList;
};

#endif // SCENEPARSER_H
