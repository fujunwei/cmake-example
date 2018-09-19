#include<stdio.h>

#include "../../include/sum.h"
#include "../../include/cl_dnn/cldnn.h"

int sum( int a, int b ){
  cl_dnn_engin();
  return a + b;
}

void cl_dnn_engin() {
  cldnn_status status;
  cldnn_version version = cldnn_get_version(&status);
  if (status != CLDNN_SUCCESS)
    printf("[clDNN] failed to get cldnn version");
  printf("The version of cldnn is %d.%d.%d.%d\n", version.major, version.minor, version.build, version.revision);

  uint32_t engine_count = cldnn_get_engine_count(cldnn_engine_ocl, &status);
  if (status != CLDNN_SUCCESS)
    printf("[clDNN] failed to get cldnn version 1");
  printf("The engine_count is %d\n", engine_count);
  cldnn_engine engine = cldnn_create_engine(cldnn_engine_ocl, 0, NULL, &status);
  if (status != CLDNN_SUCCESS)
    printf("[clDNN] failed to get cldnn version 2");
  cldnn_engine_info engine_info = cldnn_get_engine_info(engine, &status);
  if (status != CLDNN_SUCCESS)
    printf("[clDNN] failed to get cldnn version 3");
  printf("The engine info is %d\n", engine_info.cores_count);
}
