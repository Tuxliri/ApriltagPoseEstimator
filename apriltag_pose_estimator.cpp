#include "apriltag_pose_estimator.h"

ApriltagPoseEstimator::ApriltagPoseEstimator(const std::string& tag_family = "tag36h11")
{
    if (tag_family == "tag36h11") {

        tf = tag36h11_create();
    }
    else {
        std::cout << "Unsupported tag family, use tags of the family 36h11";
        exit(-1);
    }

    apriltag_detector_t *td = apriltag_detector_create();
    apriltag_detector_add_family(td, tf);
}

void ApriltagPoseEstimator::add_pose_to_history(const std::string& detected_tag_id, const Eigen::Affine3d& detected_pose){
    tags_pose_history[detected_tag_id].push_back(detected_pose);
}

bool ApriltagPoseEstimator::load_video_file(const std::string& file_path) {
    cap = cv::VideoCapture(file_path);
    return cap.isOpened();
}

bool ApriltagPoseEstimator::load_camera_matrix(const std::string& calibration_file_path){
    // TODO: implement this method
    std::cerr << "Method load_camera_matrix not implemented";
    return -1;
}
ApriltagPoseEstimator::~ApriltagPoseEstimator()
{
    apriltag_detector_destroy(td);
}

