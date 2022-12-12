import cv2
import os

def get_frame_from_video(video_name, frame_time, img_dir, img_name):
    vidcap = cv2.VideoCapture(video_name)
    vidcap.set(cv2.CAP_PROP_POS_FRAMES, frame_time)
    success, image = vidcap.read()


    if not os.path.exists(img_dir):
        os.makedirs(img_dir)

    if success:
        # image = cv2.imshow(image)
        cv2.namedWindow('image', cv2.WINDOW_NORMAL)
        cv2.imshow('image', image)
        cv2.waitKey(0)
    
        cv2.imwrite(img_dir + img_name, image)
        

time = 0
get_frame_from_video('D19_20210115205512.mp4', time, 'D:/code/dir/',
 'test.jpg')