//
// Created by David Helekal on 04/11/2017.
//

#ifndef CVLIB_CHARACTER_DETECTOR_H
#define CVLIB_CHARACTER_DETECTOR_H


#include <vector>
#include <opencv2/core/types.hpp>
#include <opencv2/text.hpp>

class character_detector {

public:
    character_detector(float min_confidence, float min_area, float max_area);

    ~character_detector();

    std::vector<cv::Rect> character_bounds(cv::Mat &im);

private:
    void preprocess_image(cv::Mat &im, std::vector<cv::Mat> &channels);

    double min_area;
    double max_area;
    double min_confidence;

    cv::Ptr<cv::text::ERFilter> filter1;
    cv::Ptr<cv::text::ERFilter> filter2;
};


#endif //CVLIB_CHARACTER_DETECTOR_H
