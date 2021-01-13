/*******OPENCV********/
/*created by - Doman Sarkar*/

#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){
    int rot;
    string name = "IMAGE - press any key to exit!"; //name of the window
    Mat image = imread("C:\Graphic-Era.png");       //reading image in matrix Mat
    if(image.empty())                               //checking if image is empty to prevent crash
    {
        cout << "\n\nError loading image!" << endl;
        cin.get();
        return -1;
    }
    cout << "\tmenu:\n1. 0` rotation\n2. 90` clockwise\n3. 90`anti-clockwise\n4. 180` rotation\ninput : ";
    cin >> rot;
    switch(rot){
        case 1: cout << "Displaying image 0`!" << endl;
        break;
        case 2: rotate(image, image, ROTATE_90_CLOCKWISE);      //rotating image to 90` clockwise
                cout << "Displaying image 90` clockwise!" << endl;
        break;
        case 3: rotate(image, image, ROTATE_90_COUNTERCLOCKWISE);//rotating image to 90` anti-clockwise
                cout << "Displaying image 90` anti-clockwise!" << endl;
        break;
        case 4: rotate(image, image, ROTATE_180);               //rotating image to 180` clockwise
                cout << "Displaying image 180`!" << endl;
        break;
        default: cout << "enter a valid option!" << endl;
    }
        namedWindow(name, WINDOW_NORMAL);               //creating window
        imshow(name, image);                            //assigning image to window
        waitKey(0);                                     //waiting for character
        destroyWindow(name);                            //destroying window
    return 0;
}