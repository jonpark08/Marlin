/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Korean
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */
#define MEDIA_TYPE_KR "저장소"

namespace Language_ko_KR {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t CHARSIZE              = 1;
  LSTR LANGUAGE                           = _UxGT("Korean");

  // These strings should be translated
  LSTR WELCOME_MSG                        = MACHINE_NAME _UxGT(" 준비.");
  LSTR MSG_YES                            = _UxGT("예");
  LSTR MSG_NO                             = _UxGT("아니오");
  LSTR MSG_HIGH                           = _UxGT("높음");
  LSTR MSG_LOW                            = _UxGT("낮음");
  LSTR MSG_BACK                           = _UxGT("뒤로");
  LSTR MSG_ERROR                          = _UxGT("오류");
  LSTR MSG_MEDIA_ABORTING                 = _UxGT("취소중...");
  LSTR MSG_MEDIA_INSERTED                 = MEDIA_TYPE_KR _UxGT(" 삽입됨");
  LSTR MSG_MEDIA_REMOVED                  = MEDIA_TYPE_KR _UxGT(" 제거됨");
  LSTR MSG_MEDIA_WAITING                  = MEDIA_TYPE_KR _UxGT(" 기다리는 중");
  LSTR MSG_MEDIA_INIT_FAIL                = MEDIA_TYPE_KR _UxGT(" 로딩 실패");
  LSTR MSG_MEDIA_READ_ERROR               = MEDIA_TYPE_KR _UxGT(" 읽기 오류");
  LSTR MSG_MEDIA_USB_REMOVED              = _UxGT("USB 저장소 제거됨");
  LSTR MSG_MEDIA_USB_FAILED               = _UxGT("USB 로딩 실패");
  //LSTR MSG_KILL_SUBCALL_OVERFLOW          = _UxGT("Subcall Overflow");
  LSTR MSG_LCD_ENDSTOPS                   = _UxGT("엔드스탑"); // Max length 8 characters
  LSTR MSG_LCD_SOFT_ENDSTOPS              = _UxGT("소프트 엔드스탑");
  LSTR MSG_MAIN                           = _UxGT("뒤로");
  LSTR MSG_ADVANCED_SETTINGS              = _UxGT("고급 설정");
  LSTR MSG_TOOLBAR_SETUP                  = _UxGT("툴바 설정");
  LSTR MSG_OPTION_DISABLED                = _UxGT("옵션 비활성화됨");
  LSTR MSG_CONFIGURATION                  = _UxGT("구성 설정");
  //LSTR MSG_RUN_AUTO_FILES                 = _UxGT("Run Auto Files");
  LSTR MSG_DISABLE_STEPPERS               = _UxGT("모터 비활성화");
  LSTR MSG_DEBUG_MENU                     = _UxGT("개발자 메뉴");
  LSTR MSG_PROGRESS_BAR_TEST              = _UxGT("진행도 바 테스트");
  LSTR MSG_HOMING                         = _UxGT("홈 메뉴");
  LSTR MSG_AUTO_HOME                      = _UxGT("자동 홈");
  LSTR MSG_AUTO_HOME_A                    = _UxGT("@ 홈으로");
  LSTR MSG_AUTO_HOME_X                    = _UxGT("X 홈으로");
  LSTR MSG_AUTO_HOME_Y                    = _UxGT("Y 홈으로");
  LSTR MSG_AUTO_HOME_Z                    = _UxGT("Z 홈으로");
  LSTR MSG_FILAMENT_SET                   = _UxGT("필라멘트 설정");
  LSTR MSG_FILAMENT_MAN                   = _UxGT("필라멘트 관리");
  LSTR MSG_MANUAL_LEVELING                = _UxGT("수동 레벨링");
  LSTR MSG_LEVBED_FL                      = _UxGT("전면 좌측");
  LSTR MSG_LEVBED_FR                      = _UxGT("전면 우측");
  LSTR MSG_LEVBED_C                       = _UxGT("중앙");
  LSTR MSG_LEVBED_BL                      = _UxGT("후면 좌측");
  LSTR MSG_LEVBED_BR                      = _UxGT("후면 우측");
  LSTR MSG_MANUAL_MESH                    = _UxGT("수동 메쉬");
  LSTR MSG_AUTO_MESH                      = _UxGT("메쉬 자동 생성");
  LSTR MSG_AUTO_Z_ALIGN                   = _UxGT("자동 Z축 교정");
  LSTR MSG_ITERATION                      = _UxGT("G34 반복: %i");
  LSTR MSG_DECREASING_ACCURACY            = _UxGT("정밀도 감소함!");
  LSTR MSG_ACCURACY_ACHIEVED              = _UxGT("정밀도 달성함");
  LSTR MSG_LEVEL_BED_HOMING               = _UxGT("XYZ 홈으로");
  LSTR MSG_LEVEL_BED_WAITING              = _UxGT("클릭해서 재개");
  LSTR MSG_LEVEL_BED_NEXT_POINT           = _UxGT("다음 포인트");
  LSTR MSG_LEVEL_BED_DONE                 = _UxGT("레벨링 완료!");
  LSTR MSG_Z_FADE_HEIGHT                  = _UxGT("Fade Height");
  LSTR MSG_SET_HOME_OFFSETS               = _UxGT("홈 오프셋 지정");
  LSTR MSG_HOME_OFFSET_X                  = _UxGT("X 홈 오프셋");
  LSTR MSG_HOME_OFFSET_Y                  = _UxGT("Y 홈 오프셋");
  LSTR MSG_HOME_OFFSET_Z                  = _UxGT("Z 홈 오프셋");
  LSTR MSG_HOME_OFFSETS_APPLIED           = _UxGT("오프셋 반영됨");
  LSTR MSG_TRAMMING_WIZARD                = _UxGT("트래밍 마법사");
  LSTR MSG_SELECT_ORIGIN                  = _UxGT("원점 지정");
  LSTR MSG_LAST_VALUE_SP                  = _UxGT("마지막 값 ");
  #if HAS_PREHEAT
    LSTR MSG_PREHEAT_1                    = _UxGT("예열하기 - ") PREHEAT_1_LABEL;
    LSTR MSG_PREHEAT_1_H                  = _UxGT("예열하기 - ") PREHEAT_1_LABEL " ~";
    LSTR MSG_PREHEAT_1_END                = _UxGT("예열하기 - ") PREHEAT_1_LABEL _UxGT(" End");
    LSTR MSG_PREHEAT_1_END_E              = _UxGT("예열하기 - ") PREHEAT_1_LABEL _UxGT(" End ~");
    LSTR MSG_PREHEAT_1_ALL                = _UxGT("예열하기 - ") PREHEAT_1_LABEL _UxGT(" All");
    LSTR MSG_PREHEAT_1_BEDONLY            = _UxGT("예열하기 - ") PREHEAT_1_LABEL _UxGT(" Bed");
    LSTR MSG_PREHEAT_1_SETTINGS           = _UxGT("예열하기 - ") PREHEAT_1_LABEL _UxGT(" Conf");
    #ifdef PREHEAT_2_LABEL
      LSTR MSG_PREHEAT_2                  = _UxGT("예열하기 - ") PREHEAT_2_LABEL;
      LSTR MSG_PREHEAT_2_SETTINGS         = _UxGT("예열하기 - ") PREHEAT_2_LABEL _UxGT(" Conf");
    #endif
    #ifdef PREHEAT_3_LABEL
      LSTR MSG_PREHEAT_3                  = _UxGT("예열하기 - ") PREHEAT_3_LABEL;
      LSTR MSG_PREHEAT_3_SETTINGS         = _UxGT("예열하기 - ") PREHEAT_3_LABEL _UxGT(" Conf");
    #endif
    LSTR MSG_PREHEAT_M                    = _UxGT("예열하기 - $");
    LSTR MSG_PREHEAT_M_H                  = _UxGT("예열하기 - $ ~");
    LSTR MSG_PREHEAT_M_END                = _UxGT("예열하기 - $ 노즐");
    LSTR MSG_PREHEAT_M_END_E              = _UxGT("예열하기 - $ 노즐 ~");
    LSTR MSG_PREHEAT_M_ALL                = _UxGT("예열하기 - $ 전체");
    LSTR MSG_PREHEAT_M_BEDONLY            = _UxGT("예열하기 - $ 베드");
    LSTR MSG_PREHEAT_M_SETTINGS           = _UxGT("예열하기 - $ 설정");
  #endif
  LSTR MSG_PREHEAT_CUSTOM                 = _UxGT("커스텀 예열");
  LSTR MSG_COOLDOWN                       = _UxGT("냉각하기");

  LSTR MSG_SWITCH_PS_ON                   = _UxGT("스위치 전원 켜기");
  LSTR MSG_SWITCH_PS_OFF                  = _UxGT("스위치 전원 끄기");
  LSTR MSG_EXTRUDE                        = _UxGT("압출하기");
  LSTR MSG_RETRACT                        = _UxGT("리트랙트 하기");
  LSTR MSG_MOVE_AXIS                      = _UxGT("축 이동");
  LSTR MSG_BED_LEVELING                   = _UxGT("베드 레벨링");
  LSTR MSG_LEVEL_BED                      = _UxGT("베드 레벨링 필요");
  LSTR MSG_BED_TRAMMING                   = _UxGT("베드 트래밍");
  LSTR MSG_BED_TRAMMING_MANUAL            = _UxGT("수동 트래밍");
  LSTR MSG_BED_TRAMMING_RAISE             = _UxGT("프로브가 활성화 될 때까지 베드를 조정하시오.");
  LSTR MSG_BED_TRAMMING_IN_RANGE          = _UxGT("트래밍 완료.");
  //LSTR MSG_BED_TRAMMING_GOOD_POINTS       = _UxGT("Good Points: ");
  //LSTR MSG_BED_TRAMMING_LAST_Z            = _UxGT("Last Z: ");
  LSTR MSG_NEXT_CORNER                    = _UxGT("다음 모서리");
  LSTR MSG_MESH_EDITOR                    = _UxGT("메쉬 편집기");
  LSTR MSG_MESH_VIEWER                    = _UxGT("메쉬 뷰어");
  LSTR MSG_EDIT_MESH                      = _UxGT("메쉬 편집하기");
  LSTR MSG_MESH_VIEW                      = _UxGT("메쉬 보기");
  LSTR MSG_EDITING_STOPPED                = _UxGT("메쉬 편집 중단됨");
  LSTR MSG_NO_VALID_MESH                  = _UxGT("유효한 메쉬 없음");
  LSTR MSG_ACTIVATE_MESH                  = _UxGT("레벨링 활성화");
  LSTR MSG_PROBING_POINT                  = _UxGT("프로브 지점");
  //LSTR MSG_MESH_X                         = _UxGT("Index X");
  //LSTR MSG_MESH_Y                         = _UxGT("Index Y");
  //LSTR MSG_MESH_INSET                     = _UxGT("Mesh Inset");
  //LSTR MSG_MESH_MIN_X                     = _UxGT("Mesh X Minimum");
  //LSTR MSG_MESH_MAX_X                     = _UxGT("Mesh X Maximum");
  //LSTR MSG_MESH_MIN_Y                     = _UxGT("Mesh Y Minimum");
  //LSTR MSG_MESH_MAX_Y                     = _UxGT("Mesh Y Maximum");
  //LSTR MSG_MESH_AMAX                      = _UxGT("Maximize Area");
  //LSTR MSG_MESH_CENTER                    = _UxGT("Center Area");
  LSTR MSG_MESH_EDIT_Z                    = _UxGT("Z 값");
  LSTR MSG_MESH_CANCEL                    = _UxGT("메쉬 취소됨");
  LSTR MSG_CUSTOM_COMMANDS                = _UxGT("커스텀 명령어");
  LSTR MSG_M48_TEST                       = _UxGT("M48 프로브 테스트");
  LSTR MSG_M48_POINT                      = _UxGT("M48 지점");
  LSTR MSG_M48_OUT_OF_BOUNDS              = _UxGT("프로브가 경계를 벗어남");
  LSTR MSG_M48_DEVIATION                  = _UxGT("편차");
  LSTR MSG_IDEX_MENU                      = _UxGT("IDEX 모드");
  LSTR MSG_OFFSETS_MENU                   = _UxGT("툴 오프셋");
  LSTR MSG_IDEX_MODE_AUTOPARK             = _UxGT("자동 파킹");
  //LSTR MSG_IDEX_MODE_DUPLICATE            = _UxGT("Duplication");
  //LSTR MSG_IDEX_MODE_MIRRORED_COPY        = _UxGT("Mirrored Copy");
  //LSTR MSG_IDEX_MODE_FULL_CTRL            = _UxGT("Full Control");
  //LSTR MSG_IDEX_DUPE_GAP                  = _UxGT("Duplicate X-Gap");
  //LSTR MSG_HOTEND_OFFSET_Z                = _UxGT("2nd Nozzle Z");
  //LSTR MSG_HOTEND_OFFSET_A                = _UxGT("2nd Nozzle @");
  LSTR MSG_UBL_DOING_G29                  = _UxGT("G29 실행중");
  LSTR MSG_UBL_TOOLS                      = _UxGT("UBL 도구");
  //LSTR MSG_UBL_LEVEL_BED                  = _UxGT("Unified Bed Leveling");
  //LSTR MSG_LCD_TILTING_MESH               = _UxGT("Tilting Point");
  //LSTR MSG_UBL_TILT_MESH                  = _UxGT("Tilt Mesh");
  //LSTR MSG_UBL_TILTING_GRID               = _UxGT("Tilting Grid Size");
  //LSTR MSG_UBL_MESH_TILTED                = _UxGT("Mesh Tilted");
  LSTR MSG_UBL_MANUAL_MESH                = _UxGT("수동으로 메쉬 생성");
  LSTR MSG_UBL_MESH_WIZARD                = _UxGT("UBL 메쉬 마법사");
  //LSTR MSG_UBL_BC_INSERT                  = _UxGT("Place Shim & Measure");
  //LSTR MSG_UBL_BC_INSERT2                 = _UxGT("Measure");
  //LSTR MSG_UBL_BC_REMOVE                  = _UxGT("Remove & Measure Bed");
  //LSTR MSG_UBL_MOVING_TO_NEXT             = _UxGT("Moving to next");
  LSTR MSG_UBL_ACTIVATE_MESH              = _UxGT("UBL 활성화");
  LSTR MSG_UBL_DEACTIVATE_MESH            = _UxGT("UBL 비활성화");
  LSTR MSG_UBL_SET_TEMP_BED               = _UxGT("베드 온도 설정");
  LSTR MSG_UBL_BED_TEMP_CUSTOM            = _UxGT("베드 온도 설정");
  LSTR MSG_UBL_SET_TEMP_HOTEND            = _UxGT("노즐 온도 설정");
  LSTR MSG_UBL_HOTEND_TEMP_CUSTOM         = _UxGT("노즐 온도 설정");
  LSTR MSG_UBL_MESH_EDIT                  = _UxGT("메쉬 편집하기");
  LSTR MSG_UBL_EDIT_CUSTOM_MESH           = _UxGT("커스텀 메쉬 편집");
  //LSTR MSG_UBL_FINE_TUNE_MESH             = _UxGT("Fine Tuning Mesh");
  LSTR MSG_UBL_DONE_EDITING_MESH          = _UxGT("메쉬 편집 완료");
  /*LSTR MSG_UBL_BUILD_CUSTOM_MESH          = _UxGT("Build Custom Mesh");
  LSTR MSG_UBL_BUILD_MESH_MENU            = _UxGT("Build Mesh");
  LSTR MSG_UBL_BUILD_MESH_M               = _UxGT("Build Mesh ($)");
  LSTR MSG_UBL_BUILD_COLD_MESH            = _UxGT("Build Cold Mesh");
  LSTR MSG_UBL_MESH_HEIGHT_ADJUST         = _UxGT("Adjust Mesh Height");
  LSTR MSG_UBL_MESH_HEIGHT_AMOUNT         = _UxGT("Height Amount");
  LSTR MSG_UBL_VALIDATE_MESH_MENU         = _UxGT("Validate Mesh");
  LSTR MSG_UBL_VALIDATE_MESH_M            = _UxGT("Validate Mesh ($)");
  LSTR MSG_UBL_VALIDATE_CUSTOM_MESH       = _UxGT("Validate Custom Mesh");
  LSTR MSG_G26_HEATING_BED                = _UxGT("G26 Heating Bed");
  LSTR MSG_G26_HEATING_NOZZLE             = _UxGT("G26 Heating Nozzle");
  LSTR MSG_G26_MANUAL_PRIME               = _UxGT("Manual priming...");
  LSTR MSG_G26_FIXED_LENGTH               = _UxGT("Fixed Length Prime");
  LSTR MSG_G26_PRIME_DONE                 = _UxGT("Done Priming");
  LSTR MSG_G26_CANCELED                   = _UxGT("G26 Canceled");
  LSTR MSG_G26_LEAVING                    = _UxGT("Leaving G26");
  LSTR MSG_UBL_CONTINUE_MESH              = _UxGT("Continue Bed Mesh");
  LSTR MSG_UBL_MESH_LEVELING              = _UxGT("Mesh Leveling");
  LSTR MSG_UBL_3POINT_MESH_LEVELING       = _UxGT("3-Point Leveling");
  LSTR MSG_UBL_GRID_MESH_LEVELING         = _UxGT("Grid Mesh Leveling");
  LSTR MSG_UBL_MESH_LEVEL                 = _UxGT("Level Mesh");
  LSTR MSG_UBL_SIDE_POINTS                = _UxGT("Side Points");
  LSTR MSG_UBL_MAP_TYPE                   = _UxGT("Map Type");
  LSTR MSG_UBL_OUTPUT_MAP                 = _UxGT("Output Mesh Map");
  LSTR MSG_UBL_OUTPUT_MAP_HOST            = _UxGT("Output for Host");
  LSTR MSG_UBL_OUTPUT_MAP_CSV             = _UxGT("Output for CSV");
  LSTR MSG_UBL_OUTPUT_MAP_BACKUP          = _UxGT("Off Printer Backup");
  LSTR MSG_UBL_INFO_UBL                   = _UxGT("Output UBL Info");
  LSTR MSG_UBL_FILLIN_AMOUNT              = _UxGT("Fill-in Amount");
  LSTR MSG_UBL_MANUAL_FILLIN              = _UxGT("Manual Fill-in");
  LSTR MSG_UBL_SMART_FILLIN               = _UxGT("Smart Fill-in");
  LSTR MSG_UBL_FILLIN_MESH                = _UxGT("Fill-in Mesh");
  LSTR MSG_UBL_MESH_FILLED                = _UxGT("Missing Points Filled");
  LSTR MSG_UBL_MESH_INVALID               = _UxGT("Invalid Mesh");
  LSTR MSG_UBL_INVALIDATE_ALL             = _UxGT("Invalidate All");
  LSTR MSG_UBL_INVALIDATE_CLOSEST         = _UxGT("Invalidate Closest");
  LSTR MSG_UBL_FINE_TUNE_ALL              = _UxGT("Fine Tune All");
  LSTR MSG_UBL_FINE_TUNE_CLOSEST          = _UxGT("Fine Tune Closest");
  LSTR MSG_UBL_STORAGE_MESH_MENU          = _UxGT("Mesh Storage");
  LSTR MSG_UBL_STORAGE_SLOT               = _UxGT("Memory Slot");
  LSTR MSG_UBL_LOAD_MESH                  = _UxGT("Load Bed Mesh");
  LSTR MSG_UBL_SAVE_MESH                  = _UxGT("Save Bed Mesh");
  LSTR MSG_UBL_INVALID_SLOT               = _UxGT("First Select a Mesh Slot");
  LSTR MSG_MESH_LOADED                    = _UxGT("Mesh %i Loaded");
  LSTR MSG_MESH_SAVED                     = _UxGT("Mesh %i Saved");
  LSTR MSG_UBL_NO_STORAGE                 = _UxGT("No Storage");
  LSTR MSG_UBL_SAVE_ERROR                 = _UxGT("Err: UBL Save");
  LSTR MSG_UBL_RESTORE_ERROR              = _UxGT("Err: UBL Restore");
  */
  LSTR MSG_UBL_Z_OFFSET                   = _UxGT("Z-오프셋: ");
  LSTR MSG_UBL_Z_OFFSET_STOPPED           = _UxGT("Z-오프셋 멈춤");
  LSTR MSG_UBL_STEP_BY_STEP_MENU          = _UxGT("단계별 UBL");
  LSTR MSG_UBL_1_BUILD_COLD_MESH          = _UxGT("1. Cold 메쉬 생성");
  //LSTR MSG_UBL_2_SMART_FILLIN             = _UxGT("2. Smart Fill-in");
  LSTR MSG_UBL_3_VALIDATE_MESH_MENU       = _UxGT("3. 메쉬 유효성 검증");
  //LSTR MSG_UBL_4_FINE_TUNE_ALL            = _UxGT("4. Fine Tune All");
  LSTR MSG_UBL_5_VALIDATE_MESH_MENU       = _UxGT("5. 메쉬 유효성 검증");
  //LSTR MSG_UBL_6_FINE_TUNE_ALL            = _UxGT("6. Fine Tune All");
  LSTR MSG_UBL_7_SAVE_MESH                = _UxGT("7. 베드 메쉬 저장");

  LSTR MSG_LED_CONTROL                    = _UxGT("LED 제어");
  LSTR MSG_LEDS                           = _UxGT("LED");
  LSTR MSG_LED_PRESETS                    = _UxGT("LED 프리셋");
  LSTR MSG_SET_LEDS_RED                   = _UxGT("빨강");
  LSTR MSG_SET_LEDS_ORANGE                = _UxGT("주황");
  LSTR MSG_SET_LEDS_YELLOW                = _UxGT("노랑");
  LSTR MSG_SET_LEDS_GREEN                 = _UxGT("초록");
  LSTR MSG_SET_LEDS_BLUE                  = _UxGT("파랑");
  LSTR MSG_SET_LEDS_INDIGO                = _UxGT("Indigo");
  LSTR MSG_SET_LEDS_VIOLET                = _UxGT("보라");
  LSTR MSG_SET_LEDS_WHITE                 = _UxGT("하양");
  LSTR MSG_SET_LEDS_DEFAULT               = _UxGT("기본");
  LSTR MSG_LED_CHANNEL_N                  = _UxGT("채널 =");
  LSTR MSG_LEDS2                          = _UxGT("LED #2");
  LSTR MSG_NEO2_PRESETS                   = _UxGT("LED #2 프리셋");
  LSTR MSG_NEO2_BRIGHTNESS                = _UxGT("밝기");
  LSTR MSG_CUSTOM_LEDS                    = _UxGT("커스텀 LED");
  LSTR MSG_INTENSITY_R                    = _UxGT("빨강 밝기");
  LSTR MSG_INTENSITY_G                    = _UxGT("초록 밝기");
  LSTR MSG_INTENSITY_B                    = _UxGT("파랑 밝기");
  LSTR MSG_INTENSITY_W                    = _UxGT("하양 밝기");
  LSTR MSG_LED_BRIGHTNESS                 = _UxGT("밝기");

  LSTR MSG_MOVING                         = _UxGT("이동중...");
  //LSTR MSG_FREE_XY                        = _UxGT("Free XY");
  LSTR MSG_MOVE_X                         = _UxGT("X 이동"); // Used by draw_edit_screen
  LSTR MSG_MOVE_Y                         = _UxGT("Y 이동");
  LSTR MSG_MOVE_Z                         = _UxGT("Z 이동");
  LSTR MSG_MOVE_N                         = _UxGT("@ 이동");
  LSTR MSG_MOVE_E                         = _UxGT("익스트루더 이동");
  LSTR MSG_MOVE_EN                        = _UxGT("* 이동");
  LSTR MSG_HOTEND_TOO_COLD                = _UxGT("노즐 온도 너무 낮음");
  LSTR MSG_MOVE_N_MM                      = _UxGT("$mm 이동");
  LSTR MSG_MOVE_01MM                      = _UxGT("0.1mm 이동");
  LSTR MSG_MOVE_1MM                       = _UxGT("1mm 이동");
  LSTR MSG_MOVE_10MM                      = _UxGT("10mm 이동");
  LSTR MSG_MOVE_50MM                      = _UxGT("50mm 이동");
  LSTR MSG_MOVE_100MM                     = _UxGT("100mm 이동");
  LSTR MSG_MOVE_0001IN                    = _UxGT("0.001in 이동");
  LSTR MSG_MOVE_001IN                     = _UxGT("0.01in 이동");
  LSTR MSG_MOVE_01IN                      = _UxGT("0.1in 이동");
  LSTR MSG_MOVE_05IN                      = _UxGT("0.5in 이동");
  LSTR MSG_MOVE_1IN                       = _UxGT("1.0in 이동");
  LSTR MSG_SPEED                          = _UxGT("속도");
  LSTR MSG_BED_Z                          = _UxGT("베드 Z");
  LSTR MSG_NOZZLE                         = _UxGT("노줄");
  LSTR MSG_NOZZLE_N                       = _UxGT("노즐 ~");
  LSTR MSG_NOZZLE_PARKED                  = _UxGT("노즐 주차됨");
  LSTR MSG_NOZZLE_STANDBY                 = _UxGT("노즐 대기중");
  LSTR MSG_BED                            = _UxGT("베드");
  LSTR MSG_CHAMBER                        = _UxGT("챔버");
  //LSTR MSG_COOLER                         = _UxGT("Laser Coolant");
  //LSTR MSG_COOLER_TOGGLE                  = _UxGT("Toggle Cooler");
  //LSTR MSG_FLOWMETER_SAFETY               = _UxGT("Flow Safety");
  //LSTR MSG_CUTTER                         = _UxGT("Cutter");
  //LSTR MSG_LASER                          = _UxGT("Laser");
  LSTR MSG_FAN_SPEED                      = _UxGT("팬 속도");
  LSTR MSG_FAN_SPEED_N                    = _UxGT("팬 속도 ~");
  //LSTR MSG_STORED_FAN_N                   = _UxGT("Stored Fan ~");
  LSTR MSG_EXTRA_FAN_SPEED                = _UxGT("추가 팬 속도");
  LSTR MSG_EXTRA_FAN_SPEED_N              = _UxGT("추가 팬 속도 ~");
  LSTR MSG_CONTROLLER_FAN                 = _UxGT("컨트롤러 팬");
  //LSTR MSG_CONTROLLER_FAN_IDLE_SPEED      = _UxGT("Idle Speed");
  //LSTR MSG_CONTROLLER_FAN_AUTO_ON         = _UxGT("Auto Mode");
  //LSTR MSG_CONTROLLER_FAN_SPEED           = _UxGT("Active Speed");
  //LSTR MSG_CONTROLLER_FAN_DURATION        = _UxGT("Idle Period");
  //LSTR MSG_FLOW                           = _UxGT("Flow");
  //LSTR MSG_FLOW_N                         = _UxGT("Flow ~");
  //LSTR MSG_CONTROL                        = _UxGT("Control");
  LSTR MSG_MIN                            = " " LCD_STR_THERMOMETER _UxGT(" 최저");
  LSTR MSG_MAX                            = " " LCD_STR_THERMOMETER _UxGT(" 최대");
  //LSTR MSG_FACTOR                         = " " LCD_STR_THERMOMETER _UxGT(" Fact");
  //LSTR MSG_AUTOTEMP                       = _UxGT("Autotemp");
  LSTR MSG_LCD_ON                         = _UxGT("켬");
  LSTR MSG_LCD_OFF                        = _UxGT("끔");
  //LSTR MSG_PID_AUTOTUNE                   = _UxGT("PID Autotune");
  //LSTR MSG_PID_AUTOTUNE_E                 = _UxGT("PID Autotune *");
  //LSTR MSG_PID_CYCLE                      = _UxGT("PID Cycles");
  LSTR MSG_PID_AUTOTUNE_DONE              = _UxGT("PID Autotune 완료");
  LSTR MSG_PID_AUTOTUNE_FAILED            = _UxGT("PID Autotune 실패!");
  //LSTR MSG_BAD_EXTRUDER_NUM               = _UxGT("Bad extruder.");
  LSTR MSG_TEMP_TOO_HIGH                  = _UxGT("온도 너무 높음.");
  LSTR MSG_TIMEOUT                        = _UxGT("시간 초과.");
  LSTR MSG_PID_BAD_EXTRUDER_NUM           = _UxGT("Autotune 실패! Bad extruder.");
  LSTR MSG_PID_TEMP_TOO_HIGH              = _UxGT("Autotune 실패! 온도 너무 높음.");
  LSTR MSG_PID_TIMEOUT                    = _UxGT("Autotune 실패! 시간 초과.");
  //LSTR MSG_MPC_MEASURING_AMBIENT          = _UxGT("Testing heat loss");
  //LSTR MSG_MPC_AUTOTUNE                   = _UxGT("MPC Autotune");
  LSTR MSG_MPC_EDIT                       = _UxGT("* MPC 편집");
  //LSTR MSG_MPC_POWER_E                    = _UxGT("Power *");
  //LSTR MSG_MPC_BLOCK_HEAT_CAPACITY_E      = _UxGT("Block C *");
  //LSTR MSG_SENSOR_RESPONSIVENESS_E        = _UxGT("Sensor res *");
  //LSTR MSG_MPC_AMBIENT_XFER_COEFF_E       = _UxGT("Ambient h *");
  //LSTR MSG_MPC_AMBIENT_XFER_COEFF_FAN_E   = _UxGT("Amb. h fan *");
  LSTR MSG_SELECT                         = _UxGT("선택");
  LSTR MSG_SELECT_E                       = _UxGT("* 선택");
  LSTR MSG_ACC                            = _UxGT("가속도");
  //LSTR MSG_JERK                           = _UxGT("Jerk");
  //LSTR MSG_VA_JERK                        = _UxGT("Max ") STR_A _UxGT(" Jerk");
  //LSTR MSG_VB_JERK                        = _UxGT("Max ") STR_B _UxGT(" Jerk");
  //LSTR MSG_VC_JERK                        = _UxGT("Max ") STR_C _UxGT(" Jerk");
  //LSTR MSG_VN_JERK                        = _UxGT("Max @ Jerk");
  //LSTR MSG_VE_JERK                        = _UxGT("Max E Jerk");
  //LSTR MSG_JUNCTION_DEVIATION             = _UxGT("Junction Dev");
  //LSTR MSG_MAX_SPEED                      = _UxGT("Max Speed (mm/s)");
  LSTR MSG_VMAX_A                         = STR_A _UxGT(" 최대 속도");
  LSTR MSG_VMAX_B                         = STR_B _UxGT(" 최대 속도");
  LSTR MSG_VMAX_C                         = STR_C _UxGT(" 최대 속도");
  LSTR MSG_VMAX_N                         = _UxGT("@ 최대 속도");
  LSTR MSG_VMAX_E                         = _UxGT("E 최대 속도");
  LSTR MSG_VMAX_EN                        = _UxGT("* 최대 속도");
  LSTR MSG_VMIN                           = _UxGT("최저 속도");
  LSTR MSG_VTRAV_MIN                      = _UxGT("최저 이동 속도");
  LSTR MSG_ACCELERATION                   = _UxGT("가속도");
  LSTR MSG_AMAX_A                         = STR_A _UxGT(" 최대 가속도");
  LSTR MSG_AMAX_B                         = STR_B _UxGT(" 최대 가속도");
  LSTR MSG_AMAX_C                         = STR_C _UxGT(" 최대 가속도");
  LSTR MSG_AMAX_N                         = _UxGT("@ 최대 가속도");
  LSTR MSG_AMAX_E                         = _UxGT("E 최대 가속도");
  LSTR MSG_AMAX_EN                        = _UxGT("* 최대 가속도");
  LSTR MSG_A_RETRACT                      = _UxGT("리트랙션 최대 가속도");
  LSTR MSG_A_TRAVEL                       = _UxGT("이동 최대 가속도");
  //LSTR MSG_INPUT_SHAPING                  = _UxGT("Input Shaping");
  //LSTR MSG_SHAPING_ENABLE                 = _UxGT("Enable @ shaping");
  //LSTR MSG_SHAPING_DISABLE                = _UxGT("Disable @ shaping");
  //LSTR MSG_SHAPING_FREQ                   = _UxGT("@ frequency");
  //LSTR MSG_SHAPING_ZETA                   = _UxGT("@ damping");
  //LSTR MSG_XY_FREQUENCY_LIMIT             = _UxGT("XY Freq Limit");
  //LSTR MSG_XY_FREQUENCY_FEEDRATE          = _UxGT("Min FR Factor");
  //LSTR MSG_STEPS_PER_MM                   = _UxGT("Steps/mm");
  //LSTR MSG_A_STEPS                        = STR_A _UxGT(" Steps/mm");
  //LSTR MSG_B_STEPS                        = STR_B _UxGT(" Steps/mm");
  //LSTR MSG_C_STEPS                        = STR_C _UxGT(" Steps/mm");
  //LSTR MSG_N_STEPS                        = _UxGT("@ steps/mm");
  //LSTR MSG_E_STEPS                        = _UxGT("E steps/mm");
  //LSTR MSG_EN_STEPS                       = _UxGT("* Steps/mm");
  LSTR MSG_TEMPERATURE                    = _UxGT("온도");
  LSTR MSG_MOTION                         = _UxGT("움직임");
  LSTR MSG_FILAMENT                       = _UxGT("필라멘트");
  //LSTR MSG_VOLUMETRIC_ENABLED             = _UxGT("E in mm") SUPERSCRIPT_THREE;
  //LSTR MSG_VOLUMETRIC_LIMIT               = _UxGT("E Limit in mm") SUPERSCRIPT_THREE;
  //LSTR MSG_VOLUMETRIC_LIMIT_E             = _UxGT("E Limit *");
  LSTR MSG_FILAMENT_DIAM                  = _UxGT("필라멘트 직경");
  LSTR MSG_FILAMENT_DIAM_E                = _UxGT("필라멘트 직경 *");
  LSTR MSG_FILAMENT_UNLOAD                = _UxGT("언로드 mm");
  LSTR MSG_FILAMENT_LOAD                  = _UxGT("로드 mm");
  //LSTR MSG_SEGMENTS_PER_SECOND            = _UxGT("Segments/Sec");
  //LSTR MSG_DRAW_MIN_X                     = _UxGT("Draw Min X");
  //LSTR MSG_DRAW_MAX_X                     = _UxGT("Draw Max X");
  //LSTR MSG_DRAW_MIN_Y                     = _UxGT("Draw Min Y");
  //LSTR MSG_DRAW_MAX_Y                     = _UxGT("Draw Max Y");
  //LSTR MSG_MAX_BELT_LEN                   = _UxGT("Max Belt Len");
  //LSTR MSG_ADVANCE_K                      = _UxGT("Advance K");
  //LSTR MSG_ADVANCE_K_E                    = _UxGT("Advance K *");
  //LSTR MSG_CONTRAST                       = _UxGT("LCD Contrast");
  LSTR MSG_BRIGHTNESS                     = _UxGT("LCD 밝기");
  LSTR MSG_SCREEN_TIMEOUT                 = _UxGT("LCD 꺼짐 시간 (m)");
  LSTR MSG_BRIGHTNESS_OFF                 = _UxGT("백라이트 끄기");
  LSTR MSG_STORE_EEPROM                   = _UxGT("설정 저장하기");
  LSTR MSG_LOAD_EEPROM                    = _UxGT("설정 불러오기");
  LSTR MSG_RESTORE_DEFAULTS               = _UxGT("설정 되돌리기");
  //LSTR MSG_INIT_EEPROM                    = _UxGT("Initialize EEPROM");
  //LSTR MSG_ERR_EEPROM_CRC                 = _UxGT("EEPROM CRC Error");
  //LSTR MSG_ERR_EEPROM_INDEX               = _UxGT("EEPROM Index Error");
  //LSTR MSG_ERR_EEPROM_VERSION             = _UxGT("EEPROM Version Error");
  LSTR MSG_SETTINGS_STORED                = _UxGT("설정 저장됨");
  LSTR MSG_MEDIA_UPDATE                   = MEDIA_TYPE_KR _UxGT(" 업데이트");
  LSTR MSG_RESET_PRINTER                  = _UxGT("프린터 재시작");
  LSTR MSG_REFRESH                        = LCD_STR_REFRESH _UxGT("새로고침");
  LSTR MSG_INFO_SCREEN                    = _UxGT("정보 화면");
  LSTR MSG_INFO_MACHINENAME               = _UxGT("기계 이름");
  LSTR MSG_INFO_SIZE                      = _UxGT("크기");
  LSTR MSG_INFO_FWVERSION                 = _UxGT("펌웨어 버전");
  LSTR MSG_INFO_BUILD                     = _UxGT("빌드 일시");
  LSTR MSG_PREPARE                        = _UxGT("준비");
  LSTR MSG_TUNE                           = _UxGT("조정");
  LSTR MSG_POWER_MONITOR                  = _UxGT("전원 모니터링");
  LSTR MSG_CURRENT                        = _UxGT("전류");
  LSTR MSG_VOLTAGE                        = _UxGT("전압");
  LSTR MSG_POWER                          = _UxGT("전원");
  LSTR MSG_START_PRINT                    = _UxGT("출력 시작");
  LSTR MSG_BUTTON_NEXT                    = _UxGT("다음");
  LSTR MSG_BUTTON_INIT                    = _UxGT("Init");
  LSTR MSG_BUTTON_STOP                    = _UxGT("취소");
  LSTR MSG_BUTTON_PRINT                   = _UxGT("출력");
  LSTR MSG_BUTTON_RESET                   = _UxGT("재시작");
  LSTR MSG_BUTTON_IGNORE                  = _UxGT("무시하기");
  LSTR MSG_BUTTON_CANCEL                  = _UxGT("취소");
  LSTR MSG_BUTTON_CONFIRM                 = _UxGT("확인");
  LSTR MSG_BUTTON_CONTINUE                = _UxGT("계속");
  LSTR MSG_BUTTON_DONE                    = _UxGT("완료");
  LSTR MSG_BUTTON_BACK                    = _UxGT("뒤로");
  LSTR MSG_BUTTON_PROCEED                 = _UxGT("계속 진행");
  LSTR MSG_BUTTON_SKIP                    = _UxGT("건너뛰기");
  LSTR MSG_BUTTON_INFO                    = _UxGT("정보");
  LSTR MSG_BUTTON_LEVEL                   = _UxGT("레벨링");
  LSTR MSG_BUTTON_PAUSE                   = _UxGT("일시정지");
  LSTR MSG_BUTTON_RESUME                  = _UxGT("재개");
  LSTR MSG_BUTTON_ADVANCED                = _UxGT("고급");
  LSTR MSG_BUTTON_SAVE                    = _UxGT("저장");
  //LSTR MSG_BUTTON_PURGE                   = _UxGT("Purge");
  LSTR MSG_PAUSING                        = _UxGT("일시정지중...");
  LSTR MSG_PAUSE_PRINT                    = _UxGT("출력 일시정지");
  LSTR MSG_ADVANCED_PAUSE                 = _UxGT("고급 일시정지");
  LSTR MSG_RESUME_PRINT                   = _UxGT("출력 재개");
  LSTR MSG_STOP_PRINT                     = _UxGT("출력 취소");
  //LSTR MSG_OUTAGE_RECOVERY                = _UxGT("Power Outage");
  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    //LSTR MSG_HOST_START_PRINT             = _UxGT("Start Host Print");
    //LSTR MSG_PRINTING_OBJECT              = _UxGT("Printing Object");
    //LSTR MSG_CANCEL_OBJECT                = _UxGT("Cancel Object");
    //LSTR MSG_CANCEL_OBJECT_N              = _UxGT("Cancel Object =");
    //LSTR MSG_CONTINUE_PRINT_JOB           = _UxGT("Continue Print Job");
    //LSTR MSG_MEDIA_MENU                   = _UxGT("Print from ") MEDIA_TYPE_KR;
    //LSTR MSG_TURN_OFF                     = _UxGT("Turn off the printer");
    //LSTR MSG_END_LOOPS                    = _UxGT("End Repeat Loops");
  #else
    LSTR MSG_HOST_START_PRINT             = _UxGT("호스트 시작");
    //LSTR MSG_PRINTING_OBJECT              = _UxGT("Print Obj");
    //LSTR MSG_CANCEL_OBJECT                = _UxGT("Cancel Obj");
    //LSTR MSG_CANCEL_OBJECT_N              = _UxGT("Cancel Obj =");
    //LSTR MSG_CONTINUE_PRINT_JOB           = _UxGT("Continue Job");
    LSTR MSG_MEDIA_MENU                   = MEDIA_TYPE_KR _UxGT(" 출력");
    //LSTR MSG_TURN_OFF                     = _UxGT("Turn off now");
    //LSTR MSG_END_LOOPS                    = _UxGT("End Loops");
  #endif
  LSTR MSG_NO_MEDIA                       = MEDIA_TYPE_KR _UxGT(" 없음");
  LSTR MSG_DWELL                          = _UxGT("절전...");
  LSTR MSG_USERWAIT                       = _UxGT("눌러서 재개...");
  LSTR MSG_PRINT_PAUSED                   = _UxGT("출력 일시중지됨");
  LSTR MSG_PRINTING                       = _UxGT("출력중...");
  LSTR MSG_STOPPING                       = _UxGT("취소중...");
  LSTR MSG_REMAINING_TIME                 = _UxGT("남은 시간");
  LSTR MSG_PRINT_ABORTED                  = _UxGT("출력 취소됨");
  LSTR MSG_PRINT_DONE                     = _UxGT("출력 완료됨");
  //LSTR MSG_PRINTER_KILLED                 = _UxGT("Printer killed!");
  LSTR MSG_NO_MOVE                        = _UxGT("움직임 없음.");
  //LSTR MSG_KILLED                         = _UxGT("KILLED. ");
  //LSTR MSG_STOPPED                        = _UxGT("STOPPED. ");
  LSTR MSG_FWRETRACT                      = _UxGT("펌웨어 리트랙션");
  /*LSTR MSG_CONTROL_RETRACT                = _UxGT("Retract mm");
  LSTR MSG_CONTROL_RETRACT_SWAP           = _UxGT("Swap Re.mm");
  LSTR MSG_CONTROL_RETRACTF               = _UxGT("Retract V");
  LSTR MSG_CONTROL_RETRACT_ZHOP           = _UxGT("Hop mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER        = _UxGT("Unretr. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAP   = _UxGT("S Unretr. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVERF       = _UxGT("Unretract V");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAPF  = _UxGT("S UnRet V");
  LSTR MSG_AUTORETRACT                    = _UxGT("Auto-Retract");
  LSTR MSG_FILAMENT_SWAP_LENGTH           = _UxGT("Swap Length");
  LSTR MSG_FILAMENT_SWAP_EXTRA            = _UxGT("Swap Extra");
  LSTR MSG_FILAMENT_PURGE_LENGTH          = _UxGT("Purge Length");
  LSTR MSG_TOOL_CHANGE                    = _UxGT("Tool Change");
  LSTR MSG_TOOL_CHANGE_ZLIFT              = _UxGT("Z Raise");
  LSTR MSG_SINGLENOZZLE_PRIME_SPEED       = _UxGT("Prime Speed");
  LSTR MSG_SINGLENOZZLE_WIPE_RETRACT      = _UxGT("Wipe Retract");
  LSTR MSG_SINGLENOZZLE_RETRACT_SPEED     = _UxGT("Retract Speed");
  LSTR MSG_FILAMENT_PARK_ENABLED          = _UxGT("Park Head");
  LSTR MSG_SINGLENOZZLE_UNRETRACT_SPEED   = _UxGT("Recover Speed");
  LSTR MSG_SINGLENOZZLE_FAN_SPEED         = _UxGT("Fan Speed");
  LSTR MSG_SINGLENOZZLE_FAN_TIME          = _UxGT("Fan Time");
  LSTR MSG_TOOL_MIGRATION_ON              = _UxGT("Auto ON");
  LSTR MSG_TOOL_MIGRATION_OFF             = _UxGT("Auto OFF");
  LSTR MSG_TOOL_MIGRATION                 = _UxGT("Tool Migration");
  LSTR MSG_TOOL_MIGRATION_AUTO            = _UxGT("Auto-migration");
  LSTR MSG_TOOL_MIGRATION_END             = _UxGT("Last Extruder");
  LSTR MSG_TOOL_MIGRATION_SWAP            = _UxGT("Migrate to *");
  */
  LSTR MSG_FILAMENTCHANGE                 = _UxGT("필라멘트 교체");
  LSTR MSG_FILAMENTCHANGE_E               = _UxGT("필라멘트 교체 *");
  LSTR MSG_FILAMENTLOAD                   = _UxGT("필라멘트 로드");
  LSTR MSG_FILAMENTLOAD_E                 = _UxGT("로드 *");
  LSTR MSG_FILAMENTUNLOAD                 = _UxGT("필라멘트 언로드");
  LSTR MSG_FILAMENTUNLOAD_E               = _UxGT("언로드 *");
  LSTR MSG_FILAMENTUNLOAD_ALL             = _UxGT("전부 언로드");
  //LSTR MSG_ATTACH_MEDIA                   = _UxGT("Attach ") MEDIA_TYPE_KR;
  //LSTR MSG_CHANGE_MEDIA                   = _UxGT("Change ") MEDIA_TYPE_KR;
  //LSTR MSG_RELEASE_MEDIA                  = _UxGT("Release ") MEDIA_TYPE_KR;
  //LSTR MSG_ZPROBE_OUT                     = _UxGT("Z Probe Past Bed");
  //LSTR MSG_SKEW_FACTOR                    = _UxGT("Skew Factor");
  //LSTR MSG_BLTOUCH                        = _UxGT("BLTouch");
  LSTR MSG_BLTOUCH_SELFTEST               = _UxGT("테스트");
  LSTR MSG_BLTOUCH_RESET                  = _UxGT("재시작");
  LSTR MSG_BLTOUCH_STOW                   = _UxGT("올림");
  LSTR MSG_BLTOUCH_DEPLOY                 = _UxGT("내림");
  LSTR MSG_BLTOUCH_SW_MODE                = _UxGT("SW-모드");
  LSTR MSG_BLTOUCH_SPEED_MODE             = _UxGT("고속 모드");
  LSTR MSG_BLTOUCH_5V_MODE                = _UxGT("5V-모드");
  LSTR MSG_BLTOUCH_OD_MODE                = _UxGT("OD-모드");
  LSTR MSG_BLTOUCH_MODE_STORE             = _UxGT("Mode-Store");
  LSTR MSG_BLTOUCH_MODE_STORE_5V          = _UxGT("BLTouch 5V로 설정");
  LSTR MSG_BLTOUCH_MODE_STORE_OD          = _UxGT("BLTouch OD로 설정");
  /*LSTR MSG_BLTOUCH_MODE_ECHO              = _UxGT("Report Drain");
  LSTR MSG_BLTOUCH_MODE_CHANGE            = _UxGT("DANGER: Bad settings can cause damage! Proceed anyway?");
  LSTR MSG_TOUCHMI_PROBE                  = _UxGT("TouchMI");
  LSTR MSG_TOUCHMI_INIT                   = _UxGT("Init TouchMI");
  LSTR MSG_TOUCHMI_ZTEST                  = _UxGT("Z Offset Test");
  LSTR MSG_TOUCHMI_SAVE                   = _UxGT("Save");
  LSTR MSG_MANUAL_DEPLOY_TOUCHMI          = _UxGT("Deploy TouchMI");
  LSTR MSG_MANUAL_DEPLOY                  = _UxGT("Deploy Z-Probe");
  LSTR MSG_MANUAL_STOW                    = _UxGT("Stow Z-Probe");
  */
  LSTR MSG_HOME_FIRST                     = _UxGT("%s%s%s 먼저 홈 할 것");
  LSTR MSG_ZPROBE_SETTINGS                = _UxGT("Probe 설정");
  LSTR MSG_ZPROBE_OFFSETS                 = _UxGT("Probe 오프셋");
  LSTR MSG_ZPROBE_XOFFSET                 = _UxGT("X Probe 오프셋");
  LSTR MSG_ZPROBE_YOFFSET                 = _UxGT("Y Probe 오프셋");
  LSTR MSG_ZPROBE_ZOFFSET                 = _UxGT("Z Probe 오프셋");
  //LSTR MSG_ZPROBE_MARGIN                  = _UxGT("Probe Margin");
  //LSTR MSG_Z_FEED_RATE                    = _UxGT("Z Feed Rate");
  LSTR MSG_ENABLE_HS_MODE                 = _UxGT("고속 모드 활성화");
  LSTR MSG_MOVE_NOZZLE_TO_BED             = _UxGT("노즐을 베드로 이동");
  //LSTR MSG_BABYSTEP_X                     = _UxGT("Babystep X");
  //LSTR MSG_BABYSTEP_Y                     = _UxGT("Babystep Y");
  //LSTR MSG_BABYSTEP_Z                     = _UxGT("Babystep Z");
  //LSTR MSG_BABYSTEP_N                     = _UxGT("Babystep @");
  //LSTR MSG_BABYSTEP_TOTAL                 = _UxGT("Total");
  //LSTR MSG_ENDSTOP_ABORT                  = _UxGT("Endstop Abort");
  LSTR MSG_HEATING_FAILED_LCD             = _UxGT("히팅 실패");
  LSTR MSG_ERR_REDUNDANT_TEMP             = _UxGT("Err: REDUNDANT TEMP");
  //LSTR MSG_THERMAL_RUNAWAY                = _UxGT("THERMAL RUNAWAY");
  //LSTR MSG_TEMP_MALFUNCTION               = _UxGT("TEMP MALFUNCTION");
  LSTR MSG_THERMAL_RUNAWAY_BED            = _UxGT("베드 THERMAL RUNAWAY");
  LSTR MSG_THERMAL_RUNAWAY_CHAMBER        = _UxGT("챔버 THERMAL RUNAWAY");
  //LSTR MSG_THERMAL_RUNAWAY_COOLER         = _UxGT("Cooler Runaway");
  //LSTR MSG_COOLING_FAILED                 = _UxGT("Cooling Failed");
  LSTR MSG_ERR_MAXTEMP                    = _UxGT("Err: 온도 너무 높음");
  LSTR MSG_ERR_MINTEMP                    = _UxGT("Err: 온도 너무 낮음");
  LSTR MSG_HALTED                         = _UxGT("프린터 강제종료됨");
  LSTR MSG_PLEASE_WAIT                    = _UxGT("기다려 주세요...");
  LSTR MSG_PLEASE_RESET                   = _UxGT("재시작 필요함");
  LSTR MSG_PREHEATING                     = _UxGT("예열중...");
  LSTR MSG_HEATING                        = _UxGT("가열중...");
  LSTR MSG_COOLING                        = _UxGT("냉각중...");
  LSTR MSG_BED_HEATING                    = _UxGT("베드 가열중...");
  LSTR MSG_BED_COOLING                    = _UxGT("베드 냉각중...");
  LSTR MSG_PROBE_HEATING                  = _UxGT("Probe 가열중...");
  LSTR MSG_PROBE_COOLING                  = _UxGT("Probe 냉각중...");
  LSTR MSG_CHAMBER_HEATING                = _UxGT("챔버 가열중...");
  LSTR MSG_CHAMBER_COOLING                = _UxGT("챔버 냉각중...");
  LSTR MSG_LASER_COOLING                  = _UxGT("레이저 냉각중...");
  //LSTR MSG_DELTA_CALIBRATE                = _UxGT("Delta Calibration");
  //LSTR MSG_DELTA_CALIBRATE_X              = _UxGT("Calibrate X");
  //LSTR MSG_DELTA_CALIBRATE_Y              = _UxGT("Calibrate Y");
  //LSTR MSG_DELTA_CALIBRATE_Z              = _UxGT("Calibrate Z");
  //LSTR MSG_DELTA_CALIBRATE_CENTER         = _UxGT("Calibrate Center");
  //LSTR MSG_DELTA_SETTINGS                 = _UxGT("Delta Settings");
  //LSTR MSG_DELTA_AUTO_CALIBRATE           = _UxGT("Auto Calibration");
  //LSTR MSG_DELTA_DIAG_ROD                 = _UxGT("Diag Rod");
  //LSTR MSG_DELTA_HEIGHT                   = _UxGT("Height");
  //LSTR MSG_DELTA_RADIUS                   = _UxGT("Radius");
  LSTR MSG_INFO_MENU                      = _UxGT("프린터에 관하여");
  LSTR MSG_INFO_PRINTER_MENU              = _UxGT("프린터 정보");
  LSTR MSG_3POINT_LEVELING                = _UxGT("3-Point 레벨링");
  LSTR MSG_LINEAR_LEVELING                = _UxGT("Linear 레벨링");
  LSTR MSG_BILINEAR_LEVELING              = _UxGT("Bilinear 레벨링");
  LSTR MSG_UBL_LEVELING                   = _UxGT("UBL 레벨링");
  LSTR MSG_MESH_LEVELING                  = _UxGT("메쉬 레벨링");
  LSTR MSG_MESH_DONE                      = _UxGT("메쉬 프로빙 완료");
  LSTR MSG_INFO_STATS_MENU                = _UxGT("프린터 상태");
  LSTR MSG_INFO_BOARD_MENU                = _UxGT("보드 정보");
  LSTR MSG_INFO_THERMISTOR_MENU           = _UxGT("온도계 정보");
  LSTR MSG_INFO_EXTRUDERS                 = _UxGT("익스트루더 정보");
  LSTR MSG_INFO_BAUDRATE                  = _UxGT("통신 속도");
  LSTR MSG_INFO_PROTOCOL                  = _UxGT("프로토콜");
  //LSTR MSG_INFO_RUNAWAY_OFF               = _UxGT("Runaway Watch: OFF");
  //LSTR MSG_INFO_RUNAWAY_ON                = _UxGT("Runaway Watch: ON");
  //LSTR MSG_HOTEND_IDLE_TIMEOUT            = _UxGT("Hotend Idle Timeout");
  //LSTR MSG_FAN_SPEED_FAULT                = _UxGT("Fan speed fault");

  //LSTR MSG_CASE_LIGHT                     = _UxGT("Case Light");
  //LSTR MSG_CASE_LIGHT_BRIGHTNESS          = _UxGT("Light Brightness");
  //LSTR MSG_KILL_EXPECTED_PRINTER          = _UxGT("INCORRECT PRINTER");

  //LSTR MSG_COLORS_GET                     = _UxGT("Get Color");
  //LSTR MSG_COLORS_SELECT                  = _UxGT("Select Colors");
  //LSTR MSG_COLORS_APPLIED                 = _UxGT("Colors applied");
  //LSTR MSG_COLORS_RED                     = _UxGT("Red");
  //LSTR MSG_COLORS_GREEN                   = _UxGT("Green");
  //LSTR MSG_COLORS_BLUE                    = _UxGT("Blue");
  //LSTR MSG_COLORS_WHITE                   = _UxGT("White");
  LSTR MSG_UI_LANGUAGE                    = _UxGT("UI 언어");
  LSTR MSG_SOUND_ENABLE                   = _UxGT("소리 활성화");
  LSTR MSG_LOCKSCREEN                     = _UxGT("스크린 잠금");
  //LSTR MSG_LOCKSCREEN_LOCKED              = _UxGT("Printer is Locked,");
  //LSTR MSG_LOCKSCREEN_UNLOCK              = _UxGT("Scroll to unlock.");
  //LSTR MSG_PLEASE_WAIT_REBOOT             = _UxGT("Please wait until reboot.");

  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_MEDIA_NOT_INSERTED           = _UxGT("No media inserted.");
    LSTR MSG_PLEASE_PREHEAT               = _UxGT("Please preheat the hot end.");
    LSTR MSG_INFO_PRINT_COUNT_RESET       = _UxGT("Reset Print Count");
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Print Count");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Print Time");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Longest Job Time");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("Extruded Total");
  #else
    LSTR MSG_MEDIA_NOT_INSERTED           = _UxGT("미디어 없음");
    LSTR MSG_PLEASE_PREHEAT               = _UxGT("예열 바람");
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("출력 횟수");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("출력 시간");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("최장 시간");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("압출 길이");
  #endif

  LSTR MSG_INFO_COMPLETED_PRINTS          = _UxGT("출력 완료");
  LSTR MSG_INFO_MIN_TEMP                  = _UxGT("최저 온도");
  LSTR MSG_INFO_MAX_TEMP                  = _UxGT("최고 온도");
  LSTR MSG_INFO_PSU                       = _UxGT("파워 서플라이");
  //LSTR MSG_DRIVE_STRENGTH                 = _UxGT("Drive Strength");
  LSTR MSG_DAC_PERCENT_N                  = _UxGT("@ 드라이버 %");
  LSTR MSG_ERROR_TMC                      = _UxGT("TMC 연결 오류");
  LSTR MSG_DAC_EEPROM_WRITE               = _UxGT("DAC EEPROM 쓰기");
  LSTR MSG_FILAMENT_CHANGE_HEADER         = _UxGT("필라멘트 교체");
  LSTR MSG_FILAMENT_CHANGE_HEADER_PAUSE   = _UxGT("출력 중단됨");
  LSTR MSG_FILAMENT_CHANGE_HEADER_LOAD    = _UxGT("필라멘트 로딩하기");
  LSTR MSG_FILAMENT_CHANGE_HEADER_UNLOAD  = _UxGT("필라멘트 내보내기");
  LSTR MSG_FILAMENT_CHANGE_OPTION_HEADER  = _UxGT("출력 재개 옵션:");
  LSTR MSG_FILAMENT_CHANGE_OPTION_PURGE   = _UxGT("더 압출");
  LSTR MSG_FILAMENT_CHANGE_OPTION_RESUME  = _UxGT("출력 재개");
  //LSTR MSG_FILAMENT_CHANGE_PURGE_CONTINUE = _UxGT("Purge or Continue?");
  LSTR MSG_FILAMENT_CHANGE_NOZZLE         = _UxGT("  노즐: ");
  //LSTR MSG_RUNOUT_SENSOR                  = _UxGT("Runout Sensor");
  //LSTR MSG_RUNOUT_DISTANCE_MM             = _UxGT("Runout Dist mm");
  //LSTR MSG_RUNOUT_ENABLE                  = _UxGT("Enable Runout");
  //LSTR MSG_RUNOUT_ACTIVE                  = _UxGT("Runout Active");
  //LSTR MSG_INVERT_EXTRUDER                = _UxGT("Invert Extruder");
  LSTR MSG_EXTRUDER_MIN_TEMP              = _UxGT("노즐 최저 온도.");
  //LSTR MSG_FANCHECK                       = _UxGT("Fan Tacho Check");
  LSTR MSG_KILL_HOMING_FAILED             = _UxGT("홈 실패");
  LSTR MSG_LCD_PROBING_FAILED             = _UxGT("Probing 실패");
  /*
  LSTR MSG_MMU2_CHOOSE_FILAMENT_HEADER    = _UxGT("CHOOSE FILAMENT");
  LSTR MSG_MMU2_MENU                      = _UxGT("MMU");
  LSTR MSG_KILL_MMU2_FIRMWARE             = _UxGT("Update MMU Firmware!");
  LSTR MSG_MMU2_NOT_RESPONDING            = _UxGT("MMU Needs Attention.");
  LSTR MSG_MMU2_RESUME                    = _UxGT("MMU Resume");
  LSTR MSG_MMU2_RESUMING                  = _UxGT("MMU Resuming...");
  LSTR MSG_MMU2_LOAD_FILAMENT             = _UxGT("MMU Load");
  LSTR MSG_MMU2_LOAD_ALL                  = _UxGT("MMU Load All");
  LSTR MSG_MMU2_LOAD_TO_NOZZLE            = _UxGT("MMU Load to Nozzle");
  LSTR MSG_MMU2_EJECT_FILAMENT            = _UxGT("MMU Eject");
  LSTR MSG_MMU2_EJECT_FILAMENT_N          = _UxGT("MMU Eject ~");
  LSTR MSG_MMU2_UNLOAD_FILAMENT           = _UxGT("MMU Unload");
  LSTR MSG_MMU2_LOADING_FILAMENT          = _UxGT("Loading Fil. %i...");
  LSTR MSG_MMU2_EJECTING_FILAMENT         = _UxGT("Ejecting Fil. ...");
  LSTR MSG_MMU2_UNLOADING_FILAMENT        = _UxGT("Unloading Fil....");
  LSTR MSG_MMU2_ALL                       = _UxGT("All");
  LSTR MSG_MMU2_FILAMENT_N                = _UxGT("Filament ~");
  LSTR MSG_MMU2_RESET                     = _UxGT("Reset MMU");
  LSTR MSG_MMU2_RESETTING                 = _UxGT("MMU Resetting...");
  LSTR MSG_MMU2_EJECT_RECOVER             = _UxGT("Remove, click");
  
  LSTR MSG_MIX                            = _UxGT("Mix");
  LSTR MSG_MIX_COMPONENT_N                = _UxGT("Component =");
  LSTR MSG_MIXER                          = _UxGT("Mixer");
  LSTR MSG_GRADIENT                       = _UxGT("Gradient");
  LSTR MSG_FULL_GRADIENT                  = _UxGT("Full Gradient");
  LSTR MSG_TOGGLE_MIX                     = _UxGT("Toggle Mix");
  LSTR MSG_CYCLE_MIX                      = _UxGT("Cycle Mix");
  LSTR MSG_GRADIENT_MIX                   = _UxGT("Gradient Mix");
  LSTR MSG_REVERSE_GRADIENT               = _UxGT("Reverse Gradient");
  LSTR MSG_ACTIVE_VTOOL                   = _UxGT("Active V-tool");
  LSTR MSG_START_VTOOL                    = _UxGT("Start V-tool");
  LSTR MSG_END_VTOOL                      = _UxGT("  End V-tool");
  LSTR MSG_GRADIENT_ALIAS                 = _UxGT("Alias V-tool");
  LSTR MSG_RESET_VTOOLS                   = _UxGT("Reset V-tools");
  LSTR MSG_COMMIT_VTOOL                   = _UxGT("Commit V-tool Mix");
  LSTR MSG_VTOOLS_RESET                   = _UxGT("V-tools Were Reset");
  LSTR MSG_START_Z                        = _UxGT("Start Z:");
  LSTR MSG_END_Z                          = _UxGT("  End Z:");

  LSTR MSG_GAMES                          = _UxGT("Games");
  LSTR MSG_BRICKOUT                       = _UxGT("Brickout");
  LSTR MSG_INVADERS                       = _UxGT("Invaders");
  LSTR MSG_SNAKE                          = _UxGT("Sn4k3");
  LSTR MSG_MAZE                           = _UxGT("Maze");

  LSTR MSG_BAD_PAGE                       = _UxGT("Bad page index");
  LSTR MSG_BAD_PAGE_SPEED                 = _UxGT("Bad page speed");

  LSTR MSG_EDIT_PASSWORD                  = _UxGT("Edit Password");
  LSTR MSG_LOGIN_REQUIRED                 = _UxGT("Login Required");
  LSTR MSG_PASSWORD_SETTINGS              = _UxGT("Password Settings");
  LSTR MSG_ENTER_DIGIT                    = _UxGT("Enter Digit");
  LSTR MSG_CHANGE_PASSWORD                = _UxGT("Set/Edit Password");
  LSTR MSG_REMOVE_PASSWORD                = _UxGT("Remove Password");
  LSTR MSG_PASSWORD_SET                   = _UxGT("Password is ");
  LSTR MSG_START_OVER                     = _UxGT("Start Over");
  LSTR MSG_REMINDER_SAVE_SETTINGS         = _UxGT("Remember to Save!");
  LSTR MSG_PASSWORD_REMOVED               = _UxGT("Password Removed");
  */
  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display
  //
  #if LCD_HEIGHT >= 4
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_2_LINE("Press Button", "to resume print"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Parking..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_3_LINE("Wait for", "filament change", "to start"));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_3_LINE("Insert filament", "and press button", "to continue"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_2_LINE("Press button", "to heat nozzle"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_2_LINE("Nozzle heating", "Please wait..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_2_LINE("Wait for", "filament unload"));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_2_LINE("Wait for", "filament load"));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_2_LINE("Wait for", "filament purge"));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_2_LINE("Click to finish", "filament purge"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_2_LINE("Wait for print", "to resume..."));
  #else
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_1_LINE("눌러서 계속"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("파킹중..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_1_LINE("잠시 기다려 주세요..."));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_1_LINE("삽입 후 클릭"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_1_LINE("클릭해서 가열"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_1_LINE("가열중..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_1_LINE("내보내는 중..."));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_1_LINE("압출 중..."));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_1_LINE("청소 중..."));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_1_LINE("클릭해서 종료"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_1_LINE("재개중..."));
  #endif
  LSTR MSG_TMC_DRIVERS                    = _UxGT("TMC 드라이버");
  LSTR MSG_TMC_CURRENT                    = _UxGT("드라이버 전류값");
  //LSTR MSG_TMC_HYBRID_THRS                = _UxGT("Hybrid Threshold");
  LSTR MSG_TMC_HOMING_THRS                = _UxGT("센서리스 호밍");
  //LSTR MSG_TMC_STEPPING_MODE              = _UxGT("Stepping Mode");
  LSTR MSG_TMC_STEALTH_ENABLED            = _UxGT("저소음 모드 활성화");
  LSTR MSG_SERVICE_RESET                  = _UxGT("재시작");
  //LSTR MSG_SERVICE_IN                     = _UxGT(" in:");
  //LSTR MSG_BACKLASH                       = _UxGT("Backlash");
  //LSTR MSG_BACKLASH_CORRECTION            = _UxGT("Correction");
  //LSTR MSG_BACKLASH_SMOOTHING             = _UxGT("Smoothing");

  //LSTR MSG_LEVEL_X_AXIS                   = _UxGT("Level X Axis");
  //LSTR MSG_AUTO_CALIBRATE                 = _UxGT("Auto Calibrate");
  #if ENABLED(TOUCH_UI_FTDI_EVE)
    LSTR MSG_HEATER_TIMEOUT               = _UxGT("Idle timeout, temperature decreased. Press Okay to reheat and again to resume.");
  #else
    LSTR MSG_HEATER_TIMEOUT               = _UxGT("히터 Timeout");
  #endif
  LSTR MSG_REHEAT                         = _UxGT("재가열");
  LSTR MSG_REHEATING                      = _UxGT("재가열중...");
  LSTR MSG_REHEATDONE                     = _UxGT("재가열 완료");

  LSTR MSG_PROBE_WIZARD                   = _UxGT("Z Probe 마법사");
  //LSTR MSG_PROBE_WIZARD_PROBING           = _UxGT("Probing Z Reference");
  //LSTR MSG_PROBE_WIZARD_MOVING            = _UxGT("Moving to Probing Pos");

  //LSTR MSG_XATC                           = _UxGT("X-Twist Wizard");
  //LSTR MSG_XATC_DONE                      = _UxGT("X-Twist Wizard Done!");
  //LSTR MSG_XATC_UPDATE_Z_OFFSET           = _UxGT("Update Probe Z-Offset to ");

  LSTR MSG_SOUND                          = _UxGT("소리");

  LSTR MSG_TOP_LEFT                       = _UxGT("상단 좌측");
  LSTR MSG_BOTTOM_LEFT                    = _UxGT("하단 좌측");
  LSTR MSG_TOP_RIGHT                      = _UxGT("상단 우측");
  LSTR MSG_BOTTOM_RIGHT                   = _UxGT("하단 우측");
  LSTR MSG_CALIBRATION_COMPLETED          = _UxGT("영점 조절 완료");
  LSTR MSG_CALIBRATION_FAILED             = _UxGT("영점 조절 실패");

  //LSTR MSG_DRIVER_BACKWARD                = _UxGT(" driver backward");

  LSTR MSG_SD_CARD                        = _UxGT("SD 카드");
  LSTR MSG_USB_DISK                       = _UxGT("USB 저장소");

  LSTR MSG_HOST_SHUTDOWN                  = _UxGT("호스트 종료됨");

  // These strings can be the same in all languages
  LSTR MSG_MARLIN                         = _UxGT("마를린");
  /*LSTR MSG_SHORT_DAY                      = _UxGT("d"); // One character only
  LSTR MSG_SHORT_HOUR                     = _UxGT("h"); // One character only
  LSTR MSG_SHORT_MINUTE                   = _UxGT("m"); // One character only
  LSTR MSG_PID_P                          = _UxGT("PID-P");
  LSTR MSG_PID_P_E                        = _UxGT("PID-P *");
  LSTR MSG_PID_I                          = _UxGT("PID-I");
  LSTR MSG_PID_I_E                        = _UxGT("PID-I *");
  LSTR MSG_PID_D                          = _UxGT("PID-D");
  LSTR MSG_PID_D_E                        = _UxGT("PID-D *");
  LSTR MSG_PID_C                          = _UxGT("PID-C");
  LSTR MSG_PID_C_E                        = _UxGT("PID-C *");
  LSTR MSG_PID_F                          = _UxGT("PID-F");
  LSTR MSG_PID_F_E                        = _UxGT("PID-F *");
  LSTR MSG_BACKLASH_N                     = _UxGT("@");
  */
}

#if FAN_COUNT == 1
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED
#else
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED_N
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED_N
#endif
