#include "ApriltagPoseEstimator.h"
int main(int argc, char const *argv[])
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <path_to_video> <path_to_camera_calibration>" << std::endl;
        return -1;
    }

    std::string path_to_video = argv[1];
    std::string path_to_camera_calibration = argv[2];

    ApriltagPoseEstimator pose_estimator = ApriltagPoseEstimator();
    if (!pose_estimator.load_video_file(path_to_video)) {
        std::cerr << "The file " << path_to_video << " was not found!";
        return -1;
    }

    if (!pose_estimator.load_camera_matrix(path_to_camera_calibration)) {
        std::cerr << "The file " << path_to_camera_calibration << " was not found!";
        return -1;
    }

    // TODO: execute estimator.run


    return 0;
}
