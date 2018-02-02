#ifndef IMAGE_SELECT_H
#define IMAGE_SELECT_H
#include <string>

#ifdef DLL_IMPLEMENT  
#define DLL_API __declspec(dllexport)  
#else  
#define DLL_API __declspec(dllimport)  
#endif  

DLL_API bool choose_mat(std::string input_asf, std::string output_img_path,int SCALE = 2);
DLL_API bool choose_with_color(std::string choose_file_path,std::string out_file_path);

#endif