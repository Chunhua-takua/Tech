import cv2
from skimage.filters import threshold_local

from pythonProject.utils import cv_imread


class Scanner:
    def __init__(self, img, count):
        self.img = img
        self.count = count

    def Scan_View(self):
        print("Scanned View")
        # image = cv2.imread(self.img)
        image = cv_imread(self.img)
        print(self.img)

        path = self.img
        path_list = path.split('/')
        img_name = path_list.pop()

        image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        thr = threshold_local(image, 11, offset=10, method="gaussian")
        image = (image > thr).astype("uint8") * 255

        print('img_name = ' + img_name)
        cv2.imwrite('scan_' + str(self.count) + '.jpg', image)
        return image
