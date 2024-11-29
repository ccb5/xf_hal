/**
 * @file xf_hal.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief xf_hal 模块用户总头文件。
 * @version 0.1
 * @date 2024-05-11
 * @note 此文件不需要防止重复包含。
 *
 * @copyright Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

/**
 * @cond (XFAPI_USER || XFAPI_PORT || XFAPI_INTERNAL)
 * @defgroup group_xf_hal xf_hal
 * @brief xf_hal (硬件抽象层) 允许在不同硬件平台上使用同样的硬件功能。
 *
 * 如 gpio, adc, dac, uart, i2c, spi, timer 等等。
 *
 * @endcond
 */

/* ==================== [Includes] ========================================== */

#include "kernel/xf_hal_posix.h"
#include "device/xf_hal_device.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif
