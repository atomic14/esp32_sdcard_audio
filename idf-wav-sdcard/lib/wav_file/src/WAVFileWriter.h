#pragma once

#include <stdio.h>
#include "WAVFile.h"

class WAVFileWriter
{
private:
  int m_file_size;

  FILE *m_fp;
  wav_header_t m_header;

public:
  WAVFileWriter(FILE *fp, int sample_rate);
  void start();
  void write(int16_t *samples, int count);
  void finish();
};
