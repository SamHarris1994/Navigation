#pragma once
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/video/background_segm.hpp"
using namespace cv;

namespace Utility
{
	const string videoFileName = "H:\\GitHubCode\\Navigation\\Research\\TrackingTeacher\\Data\\T_WALK1.mp4";
	const double PI = 3.1415926;
	const Rect BeginTrackingArea(120, 115, 480, 346);
	const Rect StopTrackingArea(90, 72, 540, 432);
	const int DisapperFrameThresh = 10;
}