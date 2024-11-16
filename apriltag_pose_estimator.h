#include <iostream>
#include <opencv4/opencv2/opencv.hpp>
#include <apriltag/apriltag.h>
#include <apriltag/tag36h11.h>
#include <Eigen/Dense>

class ApriltagPoseEstimator
{
private:
    apriltag_detector_t *td;
    apriltag_family_t *tf = nullptr;
    cv::VideoCapture cap;
    std::unordered_map<std::string, std::vector<Eigen::Affine3d>> tags_pose_history;
    void add_pose_to_history(const std::string& detected_tag_id, const Eigen::Affine3d& detected_pose);
public:
    ApriltagPoseEstimator(const std::string& tag_family);
    ~ApriltagPoseEstimator();
    bool load_camera_matrix(const std::string& calibration_file_path);
    bool load_video_file(const std::string& file_path);
    void run(); // TODO: implement this method
};
