#include <opencv2/opencv.hpp>

int main()
{
	float data1[] = { 1, 2, 3, 4 };

	cv::Mat mat(1, 4, CV_32FC1, data1);
	cv::Mat mat_dct(1, 4, CV_32FC1);

	cv::dct(mat, mat_dct);
	std::cout << mat << std::endl;
	std::cout << mat_dct << std::endl;
	return 0;
}