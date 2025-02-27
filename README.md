# 基于YOLO的停车位检测系统 | Parking Detection With YOLO

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B-orange.svg)
![Framework](https://img.shields.io/badge/framework-YOLO-darkgreen.svg)

> WUST-CS 2020级2023年暑期生产实习，武科大-光庭校企合作结题项目，获得最优团队项目奖

## 项目简介 | Project Introduction

本项目是一个基于YOLO（You Only Look Once）目标检测算法的停车位检测系统。该系统能够实时识别和监测停车场中的车位状态，区分空闲和占用的停车位，为智能停车场管理提供技术支持。

*This project is a parking space detection system based on YOLO (You Only Look Once) object detection algorithm. The system can identify and monitor parking space status in real-time, distinguish between vacant and occupied parking spaces, providing technical support for intelligent parking lot management.*

## 功能特点 | Features

- 检测停车场车位状态
- 区分空闲和占用的停车位
- 多场景适应性（室内/室外停车场）

## 技术栈 | Technologies

- **编程语言 | Programming Languages**: C++ (38.2%), C (18%)
- **构建工具 | Build Tools**: Makefile (43.3%), QMake (0.5%)
- **算法框架 | Algorithm Framework**: YOLO (You Only Look Once)
- **开发环境 | Development Environment**: Linux/Windows

## 项目结构 | Project Structure

```
Parking-Detection-With-YOLO/
├── Client/             # 客户端
├── Server/                 # 服务端
├── models/              # 模型文件
├── Video/                #  测试数据
├── include/               #  头文件依赖
└── README.md            # 项目说明文档
```

## 安装指南 | Installation Guide

### 环境要求 | Requirements

- C++ 编译器 (GCC/G++ >= 7.0)
- CMake (>= 3.10)
- CUDA (>= 10.0) [可选，用于GPU加速]
- OpenCV (>= 4.0)

### 编译安装步骤 | Compilation Steps

1. 克隆仓库 | Clone the repository:
```bash
git clone https://github.com/Ultraman6/Parking-Detection-With-YOLO.git
cd Parking-Detection-With-YOLO
```

2. 编译项目 | Compile the project:
```bash
mkdir build && cd build
cmake ..
make -j4
```

3. 安装 | Install:
```bash
sudo make install
```

## 使用方法 | Usage

### 命令行接口 | Command Line Interface

```bash
./parking_detection --input <video_source> --model <model_path> --config <config_path>
```

### 参数说明 | Parameters

- `--input`: 输入视频源或摄像头索引
- `--model`: YOLO模型路径
- `--config`: 配置文件路径
- `--output`: [可选] 输出视频路径
- `--threshold`: [可选] 检测阈值，默认0.5
- `--gpu`: [可选] 使用GPU，默认启用

### 示例 | Example

```bash
# 使用摄像头进行实时检测
./parking_detection --input 0 --model models/yolov5.weights --config config/parking.cfg

# 处理视频文件
./parking_detection --input parking_video.mp4 --model models/yolov5.weights --config config/parking.cfg --output result.avi
```

## 演示效果 | Demonstration

![停车位检测示例](docs/images/demo.png)

## 性能指标 | Performance Metrics

- 检测准确率: 95%+
- 实时处理帧率: 25+ FPS (使用GPU)
- 平均检测时间: <40ms/帧

## 团队成员 | Team Members

- 武汉科技大学计算机科学与技术学院2020级 YOLO Brothers团队

## 致谢 | Acknowledgements

- 感谢武汉科技大学和光庭信息科技股份有限公司提供的实习机会和支持
- 感谢项目指导老师的悉心指导
- 感谢YOLO开源社区提供的技术支持

## 许可证 | License

本项目采用MIT许可证 - 详情请参阅 [LICENSE](LICENSE) 文件

*This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details*

---

© 2023 武汉科技大学计算机科学与技术学院 | Wuhan University of Science and Technology, School of Computer Science and Technology