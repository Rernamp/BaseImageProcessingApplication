#pragma once

#include <opencv2/opencv.hpp>

namespace UDA {

	using namespace cv;

	class Application {
	public:
		Application(char* pathToImage) : _sourceImage(imread(pathToImage, IMREAD_COLOR)) {

		}

		bool run() {
			if (!_sourceImage.data) {
				throw std::logic_error("No image data ");
			}

			namedWindow("Display Image", WINDOW_AUTOSIZE );
			imshow("Display Image", _sourceImage);
			waitKey(0);
		}
	private:
		Mat _sourceImage;

	};
}