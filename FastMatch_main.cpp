

////
////  main.cpp
////  FAsT-Match
////
////  Created by Saburo Okita on 22/05/14.
////  Copyright (c) 2014 Saburo Okita. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//#include <opencv2/opencv.hpp>
//#include <opencv2/imgproc/imgproc_c.h>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/highgui/highgui_c.h>
//
//#include "FAsTMatch.h"
//#include "MatchConfig.h"
//
//using namespace std;
////using namespace cv;
//
//int main(int argc, const char* argv[])
//{
//
//	cv::Mat image = cv::imread("./image/image3.png");
//	cv::Mat templ = cv::imread("./image/template3.png");
//
//
//	if (image.empty() || templ.empty()) {
//		cerr << "Empty test images!" << endl;
//		return -1;
//	}
//
//	fast_match::FAsTMatch fast_match;
//	fast_match.init(0.15f, 0.85f, false, 0.5f, 2.0f);
//	//vector<cv::Point2f> corners = fast_match.apply(image, templ);
//	double best_distance = fast_match.apply(image, templ);
//	cout <<"best_distance"<<best_distance;
//
//	//std::string winName("test");
//	/*cv::namedWindow(winName);
//	cv::moveWindow(winName, 0, 0);
//
//	line(image, corners[0], corners[1], cv::Scalar(0, 0, 255), 2);
//	line(image, corners[1], corners[2], cv::Scalar(0, 0, 255), 2);
//	line(image, corners[2], corners[3], cv::Scalar(0, 0, 255), 2);
//	line(image, corners[3], corners[0], cv::Scalar(0, 0, 255), 2);
//
//	cv::Mat appended(image.rows, 2 * image.cols, CV_8UC3, cv::Scalar(0, 0, 0));*/
//
//	/*cv::putText(appended, "Template: ", cv::Point(50, 50), cv::FONT_HERSHEY_SIMPLEX, 2.0, CV_RGB(0, 255, 0));
//	templ.copyTo(cv::Mat(appended, cv::Rect((image.cols - templ.cols) / 2, (image.rows - templ.cols) / 2, templ.cols, templ.rows)));
//	image.copyTo(cv::Mat(appended, cv::Rect(image.cols, 0, image.cols, image.rows)));
//
//	cv::imshow("", appended);
//	cv::waitKey(0);*/
//
//	return best_distance;
//}
//













