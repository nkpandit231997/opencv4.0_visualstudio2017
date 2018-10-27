#include "pch.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	int x;
	Mat img;
	VideoCapture cap(0);\\set value to -1 if no idea about camera device
	namedWindow("image", WINDOW_AUTOSIZE);
	cap >> img;
	
	while (1) 
	{
		cap >> img;
		imshow("image", img);
		if(waitKey(1)==27)
			break;
	}
	return 0;
}
