#include <stdio.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include "esp_err.h"
#include "esp_log.h"
#include "esp_spiffs.h"
#include "Arduino.h"

#include "IDFSPIFFS.h"

static const char *TAG = "SPIFFS";

#define SPI_DMA_CHAN 1

IDFSPIFFS::IDFSPIFFS(const char *mount_point)
{
  m_mount_point = mount_point;

  esp_vfs_spiffs_conf_t mount_cofig = {
      .base_path = mount_point,
      .partition_label = NULL,
      .max_files = 5,
      .format_if_mount_failed = true};

  Serial.println("Initializing IDFSPIFFS");

  esp_err_t ret = esp_vfs_spiffs_register(&mount_cofig);

  if (ret != ESP_OK)
  {
    Serial.println("Failed to initialize IDFSPIFFS");
    return;
  }
}

IDFSPIFFS::~IDFSPIFFS()
{
  esp_vfs_spiffs_unregister(NULL);
  Serial.println("IDFSPIFFS unmounted");
}