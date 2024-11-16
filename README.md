# Apriltag Pose Estimator

This repository contains a C++ implementation of an AprilTag pose estimator using OpenCV and Eigen libraries. The `ApriltagPoseEstimator` class detects AprilTags in a video file and maintains a history of poses for each detected tag. The primary goal of this project is to measure the ground truth trajectory for a drone using an AprilTag placed on it.

## Features

- Detects AprilTags in video files.
- Maintains a history of poses for each detected tag.
- Uses OpenCV for video processing and Eigen for matrix operations.

## Installation

### Prerequisites

Ensure you have the following dependencies installed:

- OpenCV
- Eigen
- AprilTag3 library

On Ubuntu, you can install the dependencies using `apt`:

```sh
sudo apt-get update
sudo apt-get install -y libopencv-dev libeigen3-dev libapriltag-dev
```

### Building the Project

1. Clone the repository:

```sh
git clone https://github.com/tuxliri/ApriltagPoseEstimator.git
cd ApriltagPoseEstimator
```

2. Create a `build` directory and navigate into it:

```sh
mkdir build
cd build
```

3. Compile the project using `g++`:

```sh
g++ -o apriltag_pose_estimator ../main.cpp ../apriltag_pose_estimator.cpp -I/usr/include/eigen3 `pkg-config --cflags --libs opencv4`
```

## Usage

1. Ensure you have a video file (e.g., `example.mp4`) in the project directory.

2. Run the executable:

```sh
./apriltag_pose_estimator <path_to_video> <path_to_camera_calibration>
```

## Project Structure

```
.
├── apriltag_pose_estimator.cpp
└── README.md
```

- `Dockerfile`: Dockerfile for setting up the development environment.
- `README.md`: This file.
- `main.cpp`: Contains the `main` function and example usage of the `ApriltagPoseEstimator` class.
- `apriltag_pose_estimator.cpp`: Implementation of the `ApriltagPoseEstimator` class.
- `apriltag_pose_estimator.h`: Header file for the `ApriltagPoseEstimator` class.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- [OpenCV](https://opencv.org/)
- [Eigen](https://eigen.tuxfamily.org/)
- [AprilTag](https://april.eecs.umich.edu/software/apriltag.html)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.
