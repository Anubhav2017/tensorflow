/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_CONTRIB_LITE_EXAMPLES_LABLE_IMAGE_BITMAP_UTILS_H_
#define TENSORFLOW_CONTRIB_LITE_EXAMPLES_LABLE_IMAGE_BITMAP_UTILS_H_

// Needed to resolve unordered_set hash on older compilers.
namespace tensorflow {
namespace label_image_tflite {

uint8_t* decode_bmp(const uint8_t* input, const int row_size,
                    uint8_t* const output, const int width, const int height,
                    const int channels, bool top_down);

uint8_t* read_bmp(const std::string& input_bmp_name, int& width, int& height,
                  int& channels);

template <class T>
void downsize(T* out, uint8_t* in, int image_height, int image_width,
              int image_channels, int wanted_height, int wanted_width,
              int wanted_channels);

}  // label_image_tflite
}  // tensorflow
#endif  // TENSORFLOW_CONTRIB_LITE_EXAMPLES_LABLE_IMAGE_BITMAP_UTILS_H_
