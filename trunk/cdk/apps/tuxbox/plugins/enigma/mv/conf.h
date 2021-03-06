/***************************************************************/
/*
    * Copyright (C) 2004 Lee Wilmot <lee@dinglisch.net>

    This file is part of MV.

    MV is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    MV is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You can find a copy of the GNU General Public License in the
    file gpl.txt distributed with this file.
*/
/*************************************************************/

#ifndef __CONF_H__
#define __CONF_H__

#define CONFIG_DIR			"/var/tuxbox/config/mv"
#define SKIN_NAME			"skin.esml"
#define LOG_PATH			"/var/tmp/mv.log"
#define NO_VIEWS			10
#define FIRST_LIST_VIEW			6
#define CONFIG_FILENAME			"conf.bin"
#define MAP_FILENAME			"map.txt"
#define FAVOURITES_FILENAME		"fav.txt"
#define	TEXTS_FILENAME			"lang.txt"
#define OTVEPG_PATH_FIRST_TRY		"/var/bin/otvepg"
#define OTVEPG_PATH_SECOND_TRY		"/bin/otvepg"
#define OTVEPG_LOG_PATH			"/var/tmp/otvepg.out"
#define STAR_ICON_NAME			"mv.star"
#define ESKIN_LOADED_VALUE_NAME		"mvSkinLoadedFlag"
#define ICON_ESKIN_LOADED_VALUE_NAME	"mvIconsLoadedFlag"
#define POST_DOWNLOAD_SCRIPT_NAME	"postdownload.run"

// This should be something that's unlikely to be a file
// affix
#define XMLTV_TO_EPGUI_CONVERTED_AFFIX  ".cfe"

// So that icons line up for each channel,
// also when some channels don't have an icon
#define CHANNEL_ICON_MAX_WIDTH		40
#define CHANNEL_ICON_MAX_HEIGHT		32

#define ARG1_KEY			"/elitedvb/mv/arg1"
#define PIN8_KEY 			"/elitedvb/video/pin8"
#define LANGUAGE_KEY			"/elitedvb/language"
#define NETWORK_SETUP_KEY             "/elitedvb/network/dosetup"

#define DAYBAR_FONT                   		"epg.title"
#define TIMEPICKER_FONT                       "epg.time"
#define TIME_LABEL_FONT_FAMILY                DAYBAR_FONT

#define USER_AGENT_STRING			"Dreambox/MV"

#define DEFAULT_MAX_WAIT_FOR_EPG_SECONDS	25

#define INDICATOR_COLOUR		"std_dgreen"
#define PROGLISTDIVIDELINE_COLOUR       "std_dyellow"
#define DOWNLOAD_CACHE_MAX_OLD_FILE_AGE  ( SECONDS_IN_A_DAY * 5 )

#define TIME_LABEL_FONT_SIZE		20	
#define EXTINFO_X			90
#define EXTINFO_Y			90
#define EXTINFO_WIDTH			550
#define EXTINFO_HEIGHT			410
#define EXTINFO_FONT			"epg.title"
#define EXTINFO_FONTSIZE		22

#define INDICATORS_WIDTH        15

#define IMDB_DOWNLOAD_BASE_URL		"http://imdb-dreambox.hijmans.nl/scripts/lookup_xml.php?query="

// Time since last channel change must be at least this
// before an EPGcache signal will cause indicator to come
// up (and reload if configurdd)
#define CACHE_IND_MIN_SECONDS_ACTIVATE	3

#define FORE_COLOUR			"std_white"
//#define FORE_COLOUR			"textinput_white"

#define DEFAULT_CONF_1_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_1_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_1_GEOM_WIDTH_SECONDS		3600 * 2
#define DEFAULT_CONF_1_GEOM_TOP_LEFT_X		DEFAULT_CONF_1_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_1_GEOM_TOP_LEFT_Y		55
#define DEFAULT_CONF_1_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_1_GEOM_HEIGHT_PIXELS		483
#define DEFAULT_CONF_1_GEOM_HEADER_WIDTH_PIXELS	100
#define DEFAULT_CONF_1_GEOM_CHANNEL_HEIGHT_PIXELS	47
#define DEFAULT_CONF_1_GEOM_CHANNEL_BAR_WIDTH_PIXELS	10
#define DEFAULT_CONF_1_GEOM_STATUS_BAR_X		80
#define DEFAULT_CONF_1_GEOM_STATUS_BAR_Y		480
#define DEFAULT_CONF_1_GEOM_STATUS_BAR_WIDTH_PIXELS	200
#define DEFAULT_CONF_1_GEOM_STATUS_BAR_HEIGHT_PIXELS	80
#define DEFAULT_CONF_1_FEAT_SHOW_TITLE_BAR		0
#define DEFAULT_CONF_1_FEAT_SHOW_STATUS_BAR	0
#define DEFAULT_CONF_1_FEAT_NO_COLUMNS		3
#define DEFAULT_CONF_1_FEAT_TIMEBAR_PERIOD_SECONDS	900
#define DEFAULT_CONF_1_FEAT_ENTRIES_PER_COLUMN	1
#define DEFAULT_CONF_1_FEAT_CHANNEL_SHIFT_TYPE	FM_SHIFT_TYPE_HALFPAGE
#define DEFAULT_CONF_1_FEAT_PROGRAM_SHIFT_TYPE	FM_SHIFT_TYPE_HALFPAGE
#define DEFAULT_CONF_1_FEAT_HORIZONTAL_SEP	0
#define DEFAULT_CONF_1_FEAT_VERTICAL_SEP        1
#define DEFAULT_CONF_1_FEAT_HEADER_FLAGS		0
#define DEFAULT_CONF_1_FEAT_STATUS_BAR_FLAGS    	sBarFlagChannelName | sBarFlagTime | sBarFlagProgramName |  sBarFlagDescr
#define DEFAULT_CONF_1_FEAT_PROGRAM_BOX_FLAGS   	pBoxFlagChannel | pBoxFlagTime 
#define DEFAULT_CONF_1_FEAT_NEXT_VIEW			1
#define DEFAULT_CONF_1_FEAT_FIRST_CHANNEL		initialPositionTop
#define DEFAULT_CONF_1_FEAT_SHOW_ELAPSED_BARS		1
#define DEFAULT_CONF_1_FEAT_SHOW_CHANNEL_BAR		1
#define DEFAULT_CONF_1_FEAT_DAY_BAR_MODE		dayBarModeOff
#define DEFAULT_CONF_1_FEAT_SHOW_EMPTY_CHANNELS		1
#define DEFAULT_CONF_1_FEAT_FORCE_CURSOR		1
#define DEFAULT_CONF_1_FEAT_SORT			sortTypeGraphicalBouquet
#define DEFAULT_CONF_1_PRES_BACK_COLOUR  		PM_COLOUR_GLOBAL_NORMAL_BACKGROUND
#define DEFAULT_CONF_1_PRES_PROGRAM_ONE_BACK_COLOUR  PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_1_PRES_PROGRAM_TWO_BACK_COLOUR  PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_1_PRES_FILM_BACK_COLOUR  		PM_COLOUR_EPG_ENTRY_BACKGROUND_SELECTED
#define DEFAULT_CONF_1_PRES_FAV_BACK_COLOUR  		PM_COLOUR_STD_DYELLOW
#define DEFAULT_CONF_1_PRES_PROGRAM_TIME_FONT_SIZE	14
#define DEFAULT_CONF_1_PRES_PROGRAM_TIME_FONT_FAMILY	PM_FONT_EPG_TIME	
#define DEFAULT_CONF_1_PRES_PROGRAM_TITLE_FONT_SIZE	18
#define DEFAULT_CONF_1_PRES_PROGRAM_TITLE_FONT_FAMILY	PM_FONT_EPG_TITLE
#define DEFAULT_CONF_1_PRES_PROGRAM_DESCR_FONT_SIZE	16
#define DEFAULT_CONF_1_PRES_PROGRAM_DESCR_FONT_FAMILY	PM_FONT_EPG_DESCR	
#define DEFAULT_CONF_1_PRES_PROGRAM_CHANNEL_FONT_SIZE	14
#define DEFAULT_CONF_1_PRES_PROGRAM_CHANNEL_FONT_FAMILY	PM_FONT_EPG_DESCR	
#define DEFAULT_CONF_1_PRES_CHANNEL_HEADER_BACK_COLOUR  PM_COLOUR_BLUE_NONTRANS
 #define DEFAULT_CONF_1_PRES_CHANNEL_HEADER_FONT_SIZE  18
#define DEFAULT_CONF_1_PRES_CHANNEL_HEADER_FONT_FAMILY  0
#define DEFAULT_CONF_1_PRES_PLAYING_BACK_COLOUR  PM_COLOUR_STD_DRED

#define DEFAULT_CONF_2_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_2_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_2_GEOM_WIDTH_SECONDS		2700
#define DEFAULT_CONF_2_GEOM_TOP_LEFT_X			DEFAULT_CONF_2_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_2_GEOM_TOP_LEFT_Y			55
#define DEFAULT_CONF_2_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_2_GEOM_HEIGHT_PIXELS		487
#define DEFAULT_CONF_2_GEOM_HEADER_WIDTH_PIXELS		135
#define DEFAULT_CONF_2_GEOM_CHANNEL_HEIGHT_PIXELS	43
#define DEFAULT_CONF_2_GEOM_CHANNEL_BAR_WIDTH_PIXELS 	10	
#define DEFAULT_CONF_2_GEOM_STATUS_BAR_X		80
#define DEFAULT_CONF_2_GEOM_STATUS_BAR_Y		480
#define DEFAULT_CONF_2_GEOM_STATUS_BAR_WIDTH_PIXELS	200
#define DEFAULT_CONF_2_GEOM_STATUS_BAR_HEIGHT_PIXELS	80
#define DEFAULT_CONF_2_FEAT_SHOW_TITLE_BAR		1
#define DEFAULT_CONF_2_FEAT_SHOW_STATUS_BAR		0
#define DEFAULT_CONF_2_FEAT_NO_COLUMNS			1
#define DEFAULT_CONF_2_FEAT_TIMEBAR_PERIOD_SECONDS	0
#define DEFAULT_CONF_2_FEAT_ENTRIES_PER_COLUMN		2
#define DEFAULT_CONF_2_FEAT_CHANNEL_SHIFT_TYPE		FM_SHIFT_TYPE_HALFPAGE
#define DEFAULT_CONF_2_FEAT_PROGRAM_SHIFT_TYPE		FM_SHIFT_TYPE_SCROLL
#define DEFAULT_CONF_2_FEAT_HORIZONTAL_SEP		1
#define DEFAULT_CONF_2_FEAT_VERTICAL_SEP        	1
#define DEFAULT_CONF_2_FEAT_HEADER_FLAGS		channelHeaderFlagShowNumber | channelHeaderFlagShowIcon | channelHeaderFlagShowName
#define DEFAULT_CONF_2_FEAT_STATUS_BAR_FLAGS    	0
#define DEFAULT_CONF_2_FEAT_PROGRAM_BOX_FLAGS   	pBoxFlagTime | pBoxFlagTimeDiff 
#define DEFAULT_CONF_2_FEAT_NEXT_VIEW			2
#define DEFAULT_CONF_2_FEAT_FIRST_CHANNEL		initialPositionPlayingMid
#define DEFAULT_CONF_2_FEAT_SHOW_ELAPSED_BARS		1
#define DEFAULT_CONF_2_FEAT_SHOW_CHANNEL_BAR		1
#define DEFAULT_CONF_2_FEAT_DAY_BAR_MODE		dayBarModeOff
#define DEFAULT_CONF_2_FEAT_SHOW_EMPTY_CHANNELS		1
#define DEFAULT_CONF_2_FEAT_FORCE_CURSOR		1
#define DEFAULT_CONF_2_FEAT_SORT			sortTypeGraphicalBouquet
#define DEFAULT_CONF_2_PRES_BACK_COLOUR  		PM_COLOUR_GLOBAL_NORMAL_BACKGROUND
#define DEFAULT_CONF_2_PRES_PROGRAM_ONE_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_2_PRES_PROGRAM_TWO_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_2_PRES_FILM_BACK_COLOUR  		 PM_COLOUR_EPG_ENTRY_BACKGROUND_SELECTED
#define DEFAULT_CONF_2_PRES_FAV_BACK_COLOUR  		PM_COLOUR_STD_DYELLOW
#define DEFAULT_CONF_2_PRES_PROGRAM_TIME_FONT_SIZE	14
#define DEFAULT_CONF_2_PRES_PROGRAM_TIME_FONT_FAMILY	PM_FONT_EPG_TIME
#define DEFAULT_CONF_2_PRES_PROGRAM_TITLE_FONT_SIZE	18
#define DEFAULT_CONF_2_PRES_PROGRAM_TITLE_FONT_FAMILY	PM_FONT_EPG_TITLE
#define DEFAULT_CONF_2_PRES_PROGRAM_DESCR_FONT_SIZE	12
#define DEFAULT_CONF_2_PRES_PROGRAM_DESCR_FONT_FAMILY	PM_FONT_EPG_DESCR
#define DEFAULT_CONF_2_PRES_PROGRAM_CHANNEL_FONT_SIZE	16
#define DEFAULT_CONF_2_PRES_PROGRAM_CHANNEL_FONT_FAMILY	PM_FONT_EPG_DESCR	
#define DEFAULT_CONF_2_PRES_CHANNEL_HEADER_BACK_COLOUR  PM_COLOUR_BLUE_NONTRANS
#define DEFAULT_CONF_2_PRES_CHANNEL_HEADER_FONT_SIZE  	18
#define DEFAULT_CONF_2_PRES_CHANNEL_HEADER_FONT_FAMILY  0
#define DEFAULT_CONF_2_PRES_PLAYING_BACK_COLOUR  	PM_COLOUR_STD_DRED

#define DEFAULT_CONF_3_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_3_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_3_GEOM_WIDTH_SECONDS		3600 * 1
#define DEFAULT_CONF_3_GEOM_TOP_LEFT_X			48
#define DEFAULT_CONF_3_GEOM_TOP_LEFT_Y			44
#define DEFAULT_CONF_3_GEOM_WIDTH_PIXELS		620
#define DEFAULT_CONF_3_GEOM_HEIGHT_PIXELS		CHANNEL_ICON_MAX_HEIGHT + 2
#define DEFAULT_CONF_3_GEOM_HEADER_WIDTH_PIXELS		100
#define DEFAULT_CONF_3_GEOM_CHANNEL_HEIGHT_PIXELS	CHANNEL_ICON_MAX_HEIGHT	
#define DEFAULT_CONF_3_GEOM_CHANNEL_BAR_WIDTH_PIXELS	10
#define DEFAULT_CONF_3_GEOM_STATUS_BAR_X		464
#define DEFAULT_CONF_3_GEOM_STATUS_BAR_Y		72
#define DEFAULT_CONF_3_GEOM_STATUS_BAR_WIDTH_PIXELS	200
#define DEFAULT_CONF_3_GEOM_STATUS_BAR_HEIGHT_PIXELS	224
#define DEFAULT_CONF_3_FEAT_SHOW_TITLE_BAR		0
#define DEFAULT_CONF_3_FEAT_SHOW_STATUS_BAR		1
#define DEFAULT_CONF_3_FEAT_NO_COLUMNS			3
#define DEFAULT_CONF_3_FEAT_TIMEBAR_PERIOD_SECONDS	900
#define DEFAULT_CONF_3_FEAT_ENTRIES_PER_COLUMN		1
#define DEFAULT_CONF_3_FEAT_CHANNEL_SHIFT_TYPE		FM_SHIFT_TYPE_PAGE
#define DEFAULT_CONF_3_FEAT_PROGRAM_SHIFT_TYPE		FM_SHIFT_TYPE_PAGE
#define DEFAULT_CONF_3_FEAT_HORIZONTAL_SEP		1
#define DEFAULT_CONF_3_FEAT_VERTICAL_SEP        	1
#define DEFAULT_CONF_3_FEAT_HEADER_FLAGS		0
#define DEFAULT_CONF_3_FEAT_STATUS_BAR_FLAGS    	sBarFlagChannelName | sBarFlagTime |  sBarFlagDescr
#define DEFAULT_CONF_3_FEAT_PROGRAM_BOX_FLAGS   	pBoxFlagChannelIcon 
#define DEFAULT_CONF_3_FEAT_NEXT_VIEW			3
#define DEFAULT_CONF_3_FEAT_FIRST_CHANNEL		initialPositionPlayingMid
#define DEFAULT_CONF_3_FEAT_SHOW_ELAPSED_BARS		1
#define DEFAULT_CONF_3_FEAT_SHOW_CHANNEL_BAR		0
#define DEFAULT_CONF_3_FEAT_DAY_BAR_MODE		dayBarModeOff
#define DEFAULT_CONF_3_FEAT_SHOW_EMPTY_CHANNELS		0
#define DEFAULT_CONF_3_FEAT_FORCE_CURSOR		0
#define DEFAULT_CONF_3_FEAT_SORT			sortTypeGraphicalBouquet
#define DEFAULT_CONF_3_PRES_BACK_COLOUR  		PM_COLOUR_GLOBAL_NORMAL_BACKGROUND
#define DEFAULT_CONF_3_PRES_PROGRAM_ONE_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_3_PRES_PROGRAM_TWO_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_3_PRES_FILM_BACK_COLOUR  		 PM_COLOUR_EPG_ENTRY_BACKGROUND_SELECTED
#define DEFAULT_CONF_3_PRES_FAV_BACK_COLOUR  		PM_COLOUR_STD_DYELLOW
#define DEFAULT_CONF_3_PRES_PROGRAM_TIME_FONT_SIZE	14
#define DEFAULT_CONF_3_PRES_PROGRAM_TIME_FONT_FAMILY	PM_FONT_EPG_TIME
#define DEFAULT_CONF_3_PRES_PROGRAM_TITLE_FONT_SIZE	18
#define DEFAULT_CONF_3_PRES_PROGRAM_TITLE_FONT_FAMILY	PM_FONT_EPG_TITLE
#define DEFAULT_CONF_3_PRES_PROGRAM_DESCR_FONT_SIZE	12
#define DEFAULT_CONF_3_PRES_PROGRAM_DESCR_FONT_FAMILY	PM_FONT_EPG_DESCR
#define DEFAULT_CONF_3_PRES_PROGRAM_CHANNEL_FONT_SIZE	14
#define DEFAULT_CONF_3_PRES_PROGRAM_CHANNEL_FONT_FAMILY	PM_FONT_EPG_DESCR	
#define DEFAULT_CONF_3_PRES_CHANNEL_HEADER_BACK_COLOUR  PM_COLOUR_BLUE_NONTRANS
#define DEFAULT_CONF_3_PRES_CHANNEL_HEADER_FONT_SIZE  	18
#define DEFAULT_CONF_3_PRES_CHANNEL_HEADER_FONT_FAMILY  0
#define DEFAULT_CONF_3_PRES_PLAYING_BACK_COLOUR  	PM_COLOUR_STD_DRED

#define DEFAULT_CONF_4_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_4_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_4_GEOM_WIDTH_SECONDS		4000
#define DEFAULT_CONF_4_GEOM_TOP_LEFT_X			DEFAULT_CONF_4_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_4_GEOM_TOP_LEFT_Y			45
#define DEFAULT_CONF_4_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_4_GEOM_HEIGHT_PIXELS		445
#define DEFAULT_CONF_4_GEOM_HEADER_WIDTH_PIXELS		90
#define DEFAULT_CONF_4_GEOM_CHANNEL_HEIGHT_PIXELS	42
#define DEFAULT_CONF_4_GEOM_CHANNEL_BAR_WIDTH_PIXELS 	10	
#define DEFAULT_CONF_4_GEOM_STATUS_BAR_X		DEFAULT_CONF_4_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_4_GEOM_STATUS_BAR_Y		492
#define DEFAULT_CONF_4_GEOM_STATUS_BAR_WIDTH_PIXELS	608
#define DEFAULT_CONF_4_GEOM_STATUS_BAR_HEIGHT_PIXELS	64
#define DEFAULT_CONF_4_FEAT_SHOW_TITLE_BAR		1
#define DEFAULT_CONF_4_FEAT_SHOW_STATUS_BAR		1
#define DEFAULT_CONF_4_FEAT_NO_COLUMNS			1
#define DEFAULT_CONF_4_FEAT_TIMEBAR_PERIOD_SECONDS	1800
#define DEFAULT_CONF_4_FEAT_ENTRIES_PER_COLUMN		0
#define DEFAULT_CONF_4_FEAT_CHANNEL_SHIFT_TYPE		FM_SHIFT_TYPE_HALFPAGE
#define DEFAULT_CONF_4_FEAT_PROGRAM_SHIFT_TYPE		FM_SHIFT_TYPE_SCROLL
#define DEFAULT_CONF_4_FEAT_HORIZONTAL_SEP		1
#define DEFAULT_CONF_4_FEAT_VERTICAL_SEP        	1
#define DEFAULT_CONF_4_FEAT_HEADER_FLAGS		channelHeaderFlagShowOrbital | channelHeaderFlagShowNumber | channelHeaderFlagShowIcon
#define DEFAULT_CONF_4_FEAT_STATUS_BAR_FLAGS    	sBarFlagDate | sBarFlagTime | sBarFlagEndTime | sBarFlagDuration | sBarFlagDescr
#define DEFAULT_CONF_4_FEAT_PROGRAM_BOX_FLAGS   	pBoxFlagTime
#define DEFAULT_CONF_4_FEAT_NEXT_VIEW			4
#define DEFAULT_CONF_4_FEAT_FIRST_CHANNEL		initialPositionPlayingMid
#define DEFAULT_CONF_4_FEAT_SHOW_ELAPSED_BARS		0
#define DEFAULT_CONF_4_FEAT_SHOW_CHANNEL_BAR		1
#define DEFAULT_CONF_4_FEAT_DAY_BAR_MODE		dayBarModeFixed
#define DEFAULT_CONF_4_FEAT_SHOW_EMPTY_CHANNELS		1
#define DEFAULT_CONF_4_FEAT_FORCE_CURSOR		1
#define DEFAULT_CONF_4_FEAT_SORT			sortTypeGraphicalBouquet
#define DEFAULT_CONF_4_PRES_BACK_COLOUR  		PM_COLOUR_GLOBAL_NORMAL_BACKGROUND
#define DEFAULT_CONF_4_PRES_PROGRAM_ONE_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_4_PRES_PROGRAM_TWO_BACK_COLOUR  	PM_COLOUR_EPG_ENTRY_BACKGROUND
#define DEFAULT_CONF_4_PRES_FILM_BACK_COLOUR  		 PM_COLOUR_EPG_ENTRY_BACKGROUND_SELECTED
#define DEFAULT_CONF_4_PRES_FAV_BACK_COLOUR  		PM_COLOUR_STD_DYELLOW
#define DEFAULT_CONF_4_PRES_PROGRAM_TIME_FONT_SIZE	14
#define DEFAULT_CONF_4_PRES_PROGRAM_TIME_FONT_FAMILY	PM_FONT_EPG_TIME
#define DEFAULT_CONF_4_PRES_PROGRAM_TITLE_FONT_SIZE	18
#define DEFAULT_CONF_4_PRES_PROGRAM_TITLE_FONT_FAMILY	PM_FONT_EPG_TITLE
#define DEFAULT_CONF_4_PRES_PROGRAM_DESCR_FONT_SIZE	12
#define DEFAULT_CONF_4_PRES_PROGRAM_DESCR_FONT_FAMILY	PM_FONT_EPG_DESCR
#define DEFAULT_CONF_4_PRES_PROGRAM_CHANNEL_FONT_SIZE	16
#define DEFAULT_CONF_4_PRES_PROGRAM_CHANNEL_FONT_FAMILY	PM_FONT_EPG_DESCR	
#define DEFAULT_CONF_4_PRES_CHANNEL_HEADER_BACK_COLOUR  PM_COLOUR_BLUE_NONTRANS
#define DEFAULT_CONF_4_PRES_CHANNEL_HEADER_FONT_SIZE  	18
#define DEFAULT_CONF_4_PRES_CHANNEL_HEADER_FONT_FAMILY  0
#define DEFAULT_CONF_4_PRES_PLAYING_BACK_COLOUR  	PM_COLOUR_STD_DRED


#define DEFAULT_CONF_5_GEOM_WIDTH_SECONDS		1800 * 5
#define DEFAULT_CONF_5_FEAT_NEXT_VIEW			5
#define DEFAULT_CONF_5_PRES_PROGRAM_TITLE_FONT_SIZE	19
#define DEFAULT_CONF_5_FEAT_HEADER_FLAGS		channelHeaderFlagShowIcon
#define DEFAULT_CONF_5_FEAT_PROGRAM_BOX_FLAGS   	0
#define DEFAULT_CONF_5_GEOM_CHANNEL_HEIGHT_PIXELS	CHANNEL_ICON_MAX_HEIGHT - 2
#define DEFAULT_CONF_5_HEADER_WIDTH_PIXELS		CHANNEL_ICON_MAX_WIDTH + 2

// ------------------------- LIST VIEWS -------------------------- //

#define DEFAULT_CONF_LIST_VIEW_FEAT_STATUS_BAR_FLAGS	sBarFlagChannelName | sBarFlagTime | sBarFlagEndTime | sBarFlagProgramName |  sBarFlagDescr
#define DEFAULT_CONF_LIST_VIEW_FEAT_CHANNEL_HEADERS_FLAGS channelHeaderFlagShowName | channelHeaderFlagShowIcon
#define DEFAULT_CONF_LIST_VIEW_PRES_PROGRAM_FONT_FAMILY PM_FONT_EPG_TITLE
#define DEFAULT_CONF_LIST_VIEW_PRES_PROGRAM_FONT_SIZE	23
#define DEFAULT_CONF_LIST_VIEW_PRES_CHANNEL_FONT_FAMILY PM_FONT_EPG_TITLE
#define DEFAULT_CONF_LIST_VIEW_PRES_CHANNEL_FONT_SIZE	25


#define DEFAULT_CONF_6_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_6_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_6_GEOM_TOP_LEFT_X			DEFAULT_CONF_6_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_6_GEOM_TOP_LEFT_Y			45
#define DEFAULT_CONF_6_GEOM_WIDTH_PIXELS		400
#define DEFAULT_CONF_6_GEOM_HEIGHT_PIXELS		500
#define DEFAULT_CONF_6_GEOM_STATUS_BAR_X		450
#define DEFAULT_CONF_6_GEOM_STATUS_BAR_Y		45
#define DEFAULT_CONF_6_GEOM_STATUS_BAR_WIDTH_PIXELS	215
#define DEFAULT_CONF_6_GEOM_STATUS_BAR_HEIGHT_PIXELS	500
#define DEFAULT_CONF_6_FEAT_SORT			sortTypeListStartTime
#define DEFAULT_CONF_6_FEAT_ENTRIES_PER_COLUMN		0
#define DEFAULT_CONF_6_FEAT_CHANNEL_HEADER_FLAGS	0


#define DEFAULT_CONF_7_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_7_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_7_GEOM_TOP_LEFT_X			DEFAULT_CONF_6_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_7_GEOM_TOP_LEFT_Y			45
#define DEFAULT_CONF_7_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_7_GEOM_HEIGHT_PIXELS		490
#define DEFAULT_CONF_7_GEOM_STATUS_BAR_X		50
#define DEFAULT_CONF_7_GEOM_STATUS_BAR_Y		540
#define DEFAULT_CONF_7_GEOM_STATUS_BAR_WIDTH_PIXELS	630
#define DEFAULT_CONF_7_GEOM_STATUS_BAR_HEIGHT_PIXELS	60
#define DEFAULT_CONF_7_FEAT_SORT			sortTypeListStartTime
#define DEFAULT_CONF_7_FEAT_ENTRIES_PER_COLUMN		0

#define DEFAULT_CONF_8_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_8_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_8_GEOM_TOP_LEFT_X			DEFAULT_CONF_8_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_8_GEOM_TOP_LEFT_Y			45
#define DEFAULT_CONF_8_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_8_GEOM_HEIGHT_PIXELS		345
#define DEFAULT_CONF_8_GEOM_STATUS_BAR_X		DEFAULT_CONF_8_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_8_GEOM_STATUS_BAR_Y		400
#define DEFAULT_CONF_8_GEOM_STATUS_BAR_WIDTH_PIXELS	610
#define DEFAULT_CONF_8_GEOM_STATUS_BAR_HEIGHT_PIXELS	145
#define DEFAULT_CONF_8_FEAT_SORT			sortTypeListStartTime
#define DEFAULT_CONF_8_FEAT_ENTRIES_PER_COLUMN		0

#define DEFAULT_CONF_9_GEOM_TIME_LABEL_X		49
#define DEFAULT_CONF_9_GEOM_TIME_LABEL_Y		23
#define DEFAULT_CONF_9_GEOM_TOP_LEFT_X			DEFAULT_CONF_9_GEOM_TIME_LABEL_X
#define DEFAULT_CONF_9_GEOM_TOP_LEFT_Y			45
#define DEFAULT_CONF_9_GEOM_WIDTH_PIXELS		610
#define DEFAULT_CONF_9_GEOM_HEIGHT_PIXELS		490
#define DEFAULT_CONF_9_GEOM_STATUS_BAR_X		65
#define DEFAULT_CONF_9_GEOM_STATUS_BAR_Y		540
#define DEFAULT_CONF_9_GEOM_STATUS_BAR_WIDTH_PIXELS	595
#define DEFAULT_CONF_9_GEOM_STATUS_BAR_HEIGHT_PIXELS	60
#define DEFAULT_CONF_9_FEAT_SORT			sortTypeListBouquetThenStartTime
#define DEFAULT_CONF_9_FEAT_ENTRIES_PER_COLUMN		3

#define DEFAULT_WIDTH_SECONDS_CHANGE_RATE   	1800
#define DEFAULT_START_TIME_CHANGE_RATE		1800
#define DEFAULT_TIME_BAR_HEIGHT    	        25
#define DEFAULT_DAY_BAR_HEIGHT    	        25
#define DEFAULT_TIME_PICKER_HEIGHT    	        100
#define DEFAULT_WINDOW_INITIAL_START_OFFSET_SECONDS	0
#define DEFAULT_ASPECT_RATIO_MODE		aspectRatioEnigma

#define DEFAULT_INPUTS_PRE		900
#define DEFAULT_INPUTS_POST		86400
#define DEFAULT_INPUT_FLAGS		INPUT_FLAGS_ALL
#define DEFAULT_INPUTS_MAX_CHANNELS	999
#define DEFAULT_INPUTS_AUTO_DATA_DIRS_FLAG		true
#define DEFAULT_INPUTS_AUTO_RELOAD_FLAG	true

#define CHANNEL_MANAGER_LISTBOX_FONT_SIZE 20
#define CHANNEL_PICKER_LISTBOX_FONT_SIZE 20

#endif

