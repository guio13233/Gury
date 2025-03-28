#pragma once

#include <G3DAll.h>

#include "../Gury/Game/Objects/instance.h"
#include "../Gury/Game/Services/service.h"

#include "oscontext.h"


namespace RBX
{
	class ThumbnailGenerator :
		public RBX::Instance,
		public Service<ThumbnailGenerator>
	{
	public:
		std::string click(std::string fileType, int width, int height, bool hideSky);
		void doClick(std::string fileType, int width, int height, bool imageServerView, BinaryOutput& out);
		ThumbnailGenerator()
		{
			setClassName("ThumbnailGenerator");
			setName("ThumbnailGenerator");
		}
	};
}