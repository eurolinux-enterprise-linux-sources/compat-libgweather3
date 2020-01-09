
/* Generated data (by glib-mkenums) */

#define GWEATHER_I_KNOW_THIS_IS_UNSTABLE
#include "gweather-enum-types.h"
#include "gweather-location.h"
#include "gweather-enums.h"
#include "gweather-weather.h"
/* enumerations from "gweather-location.h" */
GType
gweather_location_level_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_LOCATION_WORLD, "GWEATHER_LOCATION_WORLD", "world" },
			{ GWEATHER_LOCATION_REGION, "GWEATHER_LOCATION_REGION", "region" },
			{ GWEATHER_LOCATION_COUNTRY, "GWEATHER_LOCATION_COUNTRY", "country" },
			{ GWEATHER_LOCATION_ADM1, "GWEATHER_LOCATION_ADM1", "adm1" },
			{ GWEATHER_LOCATION_ADM2, "GWEATHER_LOCATION_ADM2", "adm2" },
			{ GWEATHER_LOCATION_CITY, "GWEATHER_LOCATION_CITY", "city" },
			{ GWEATHER_LOCATION_WEATHER_STATION, "GWEATHER_LOCATION_WEATHER_STATION", "weather-station" },
			{ GWEATHER_LOCATION_DETACHED, "GWEATHER_LOCATION_DETACHED", "detached" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherLocationLevel"), values);
	}
	return etype;
}

/* enumerations from "gweather-weather.h" */
GType
gweather_provider_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GFlagsValue values[] = {
			{ GWEATHER_PROVIDER_NONE, "GWEATHER_PROVIDER_NONE", "none" },
			{ GWEATHER_PROVIDER_METAR, "GWEATHER_PROVIDER_METAR", "metar" },
			{ GWEATHER_PROVIDER_IWIN, "GWEATHER_PROVIDER_IWIN", "iwin" },
			{ GWEATHER_PROVIDER_YAHOO, "GWEATHER_PROVIDER_YAHOO", "yahoo" },
			{ GWEATHER_PROVIDER_YR_NO, "GWEATHER_PROVIDER_YR_NO", "yr-no" },
			{ GWEATHER_PROVIDER_ALL, "GWEATHER_PROVIDER_ALL", "all" },
			{ 0, NULL, NULL }
		};
		etype = g_flags_register_static (g_intern_static_string ("GWeatherProvider"), values);
	}
	return etype;
}

GType
gweather_wind_direction_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_WIND_INVALID, "GWEATHER_WIND_INVALID", "invalid" },
			{ GWEATHER_WIND_VARIABLE, "GWEATHER_WIND_VARIABLE", "variable" },
			{ GWEATHER_WIND_N, "GWEATHER_WIND_N", "n" },
			{ GWEATHER_WIND_NNE, "GWEATHER_WIND_NNE", "nne" },
			{ GWEATHER_WIND_NE, "GWEATHER_WIND_NE", "ne" },
			{ GWEATHER_WIND_ENE, "GWEATHER_WIND_ENE", "ene" },
			{ GWEATHER_WIND_E, "GWEATHER_WIND_E", "e" },
			{ GWEATHER_WIND_ESE, "GWEATHER_WIND_ESE", "ese" },
			{ GWEATHER_WIND_SE, "GWEATHER_WIND_SE", "se" },
			{ GWEATHER_WIND_SSE, "GWEATHER_WIND_SSE", "sse" },
			{ GWEATHER_WIND_S, "GWEATHER_WIND_S", "s" },
			{ GWEATHER_WIND_SSW, "GWEATHER_WIND_SSW", "ssw" },
			{ GWEATHER_WIND_SW, "GWEATHER_WIND_SW", "sw" },
			{ GWEATHER_WIND_WSW, "GWEATHER_WIND_WSW", "wsw" },
			{ GWEATHER_WIND_W, "GWEATHER_WIND_W", "w" },
			{ GWEATHER_WIND_WNW, "GWEATHER_WIND_WNW", "wnw" },
			{ GWEATHER_WIND_NW, "GWEATHER_WIND_NW", "nw" },
			{ GWEATHER_WIND_NNW, "GWEATHER_WIND_NNW", "nnw" },
			{ GWEATHER_WIND_LAST, "GWEATHER_WIND_LAST", "last" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherWindDirection"), values);
	}
	return etype;
}

GType
gweather_sky_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_SKY_INVALID, "GWEATHER_SKY_INVALID", "invalid" },
			{ GWEATHER_SKY_CLEAR, "GWEATHER_SKY_CLEAR", "clear" },
			{ GWEATHER_SKY_BROKEN, "GWEATHER_SKY_BROKEN", "broken" },
			{ GWEATHER_SKY_SCATTERED, "GWEATHER_SKY_SCATTERED", "scattered" },
			{ GWEATHER_SKY_FEW, "GWEATHER_SKY_FEW", "few" },
			{ GWEATHER_SKY_OVERCAST, "GWEATHER_SKY_OVERCAST", "overcast" },
			{ GWEATHER_SKY_LAST, "GWEATHER_SKY_LAST", "last" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherSky"), values);
	}
	return etype;
}

GType
gweather_phenomenon_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_PHENOMENON_INVALID, "GWEATHER_PHENOMENON_INVALID", "invalid" },
			{ GWEATHER_PHENOMENON_NONE, "GWEATHER_PHENOMENON_NONE", "none" },
			{ GWEATHER_PHENOMENON_DRIZZLE, "GWEATHER_PHENOMENON_DRIZZLE", "drizzle" },
			{ GWEATHER_PHENOMENON_RAIN, "GWEATHER_PHENOMENON_RAIN", "rain" },
			{ GWEATHER_PHENOMENON_SNOW, "GWEATHER_PHENOMENON_SNOW", "snow" },
			{ GWEATHER_PHENOMENON_SNOW_GRAINS, "GWEATHER_PHENOMENON_SNOW_GRAINS", "snow-grains" },
			{ GWEATHER_PHENOMENON_ICE_CRYSTALS, "GWEATHER_PHENOMENON_ICE_CRYSTALS", "ice-crystals" },
			{ GWEATHER_PHENOMENON_ICE_PELLETS, "GWEATHER_PHENOMENON_ICE_PELLETS", "ice-pellets" },
			{ GWEATHER_PHENOMENON_HAIL, "GWEATHER_PHENOMENON_HAIL", "hail" },
			{ GWEATHER_PHENOMENON_SMALL_HAIL, "GWEATHER_PHENOMENON_SMALL_HAIL", "small-hail" },
			{ GWEATHER_PHENOMENON_UNKNOWN_PRECIPITATION, "GWEATHER_PHENOMENON_UNKNOWN_PRECIPITATION", "unknown-precipitation" },
			{ GWEATHER_PHENOMENON_MIST, "GWEATHER_PHENOMENON_MIST", "mist" },
			{ GWEATHER_PHENOMENON_FOG, "GWEATHER_PHENOMENON_FOG", "fog" },
			{ GWEATHER_PHENOMENON_SMOKE, "GWEATHER_PHENOMENON_SMOKE", "smoke" },
			{ GWEATHER_PHENOMENON_VOLCANIC_ASH, "GWEATHER_PHENOMENON_VOLCANIC_ASH", "volcanic-ash" },
			{ GWEATHER_PHENOMENON_SAND, "GWEATHER_PHENOMENON_SAND", "sand" },
			{ GWEATHER_PHENOMENON_HAZE, "GWEATHER_PHENOMENON_HAZE", "haze" },
			{ GWEATHER_PHENOMENON_SPRAY, "GWEATHER_PHENOMENON_SPRAY", "spray" },
			{ GWEATHER_PHENOMENON_DUST, "GWEATHER_PHENOMENON_DUST", "dust" },
			{ GWEATHER_PHENOMENON_SQUALL, "GWEATHER_PHENOMENON_SQUALL", "squall" },
			{ GWEATHER_PHENOMENON_SANDSTORM, "GWEATHER_PHENOMENON_SANDSTORM", "sandstorm" },
			{ GWEATHER_PHENOMENON_DUSTSTORM, "GWEATHER_PHENOMENON_DUSTSTORM", "duststorm" },
			{ GWEATHER_PHENOMENON_FUNNEL_CLOUD, "GWEATHER_PHENOMENON_FUNNEL_CLOUD", "funnel-cloud" },
			{ GWEATHER_PHENOMENON_TORNADO, "GWEATHER_PHENOMENON_TORNADO", "tornado" },
			{ GWEATHER_PHENOMENON_DUST_WHIRLS, "GWEATHER_PHENOMENON_DUST_WHIRLS", "dust-whirls" },
			{ GWEATHER_PHENOMENON_LAST, "GWEATHER_PHENOMENON_LAST", "last" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherConditionPhenomenon"), values);
	}
	return etype;
}

GType
gweather_qualifier_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_QUALIFIER_INVALID, "GWEATHER_QUALIFIER_INVALID", "invalid" },
			{ GWEATHER_QUALIFIER_NONE, "GWEATHER_QUALIFIER_NONE", "none" },
			{ GWEATHER_QUALIFIER_VICINITY, "GWEATHER_QUALIFIER_VICINITY", "vicinity" },
			{ GWEATHER_QUALIFIER_LIGHT, "GWEATHER_QUALIFIER_LIGHT", "light" },
			{ GWEATHER_QUALIFIER_MODERATE, "GWEATHER_QUALIFIER_MODERATE", "moderate" },
			{ GWEATHER_QUALIFIER_HEAVY, "GWEATHER_QUALIFIER_HEAVY", "heavy" },
			{ GWEATHER_QUALIFIER_SHALLOW, "GWEATHER_QUALIFIER_SHALLOW", "shallow" },
			{ GWEATHER_QUALIFIER_PATCHES, "GWEATHER_QUALIFIER_PATCHES", "patches" },
			{ GWEATHER_QUALIFIER_PARTIAL, "GWEATHER_QUALIFIER_PARTIAL", "partial" },
			{ GWEATHER_QUALIFIER_THUNDERSTORM, "GWEATHER_QUALIFIER_THUNDERSTORM", "thunderstorm" },
			{ GWEATHER_QUALIFIER_BLOWING, "GWEATHER_QUALIFIER_BLOWING", "blowing" },
			{ GWEATHER_QUALIFIER_SHOWERS, "GWEATHER_QUALIFIER_SHOWERS", "showers" },
			{ GWEATHER_QUALIFIER_DRIFTING, "GWEATHER_QUALIFIER_DRIFTING", "drifting" },
			{ GWEATHER_QUALIFIER_FREEZING, "GWEATHER_QUALIFIER_FREEZING", "freezing" },
			{ GWEATHER_QUALIFIER_LAST, "GWEATHER_QUALIFIER_LAST", "last" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherConditionQualifier"), values);
	}
	return etype;
}

/* enumerations from "gweather-enums.h" */
GType
gweather_forecast_type_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_FORECAST_STATE, "GWEATHER_FORECAST_STATE", "state" },
			{ GWEATHER_FORECAST_ZONE, "GWEATHER_FORECAST_ZONE", "zone" },
			{ GWEATHER_FORECAST_LIST, "GWEATHER_FORECAST_LIST", "list" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherForecastType"), values);
	}
	return etype;
}

GType
gweather_temperature_unit_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_TEMP_UNIT_INVALID, "GWEATHER_TEMP_UNIT_INVALID", "invalid" },
			{ GWEATHER_TEMP_UNIT_DEFAULT, "GWEATHER_TEMP_UNIT_DEFAULT", "default" },
			{ GWEATHER_TEMP_UNIT_KELVIN, "GWEATHER_TEMP_UNIT_KELVIN", "kelvin" },
			{ GWEATHER_TEMP_UNIT_CENTIGRADE, "GWEATHER_TEMP_UNIT_CENTIGRADE", "centigrade" },
			{ GWEATHER_TEMP_UNIT_FAHRENHEIT, "GWEATHER_TEMP_UNIT_FAHRENHEIT", "fahrenheit" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherTemperatureUnit"), values);
	}
	return etype;
}

GType
gweather_speed_unit_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_SPEED_UNIT_INVALID, "GWEATHER_SPEED_UNIT_INVALID", "invalid" },
			{ GWEATHER_SPEED_UNIT_DEFAULT, "GWEATHER_SPEED_UNIT_DEFAULT", "default" },
			{ GWEATHER_SPEED_UNIT_MS, "GWEATHER_SPEED_UNIT_MS", "ms" },
			{ GWEATHER_SPEED_UNIT_KPH, "GWEATHER_SPEED_UNIT_KPH", "kph" },
			{ GWEATHER_SPEED_UNIT_MPH, "GWEATHER_SPEED_UNIT_MPH", "mph" },
			{ GWEATHER_SPEED_UNIT_KNOTS, "GWEATHER_SPEED_UNIT_KNOTS", "knots" },
			{ GWEATHER_SPEED_UNIT_BFT, "GWEATHER_SPEED_UNIT_BFT", "bft" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherSpeedUnit"), values);
	}
	return etype;
}

GType
gweather_pressure_unit_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_PRESSURE_UNIT_INVALID, "GWEATHER_PRESSURE_UNIT_INVALID", "invalid" },
			{ GWEATHER_PRESSURE_UNIT_DEFAULT, "GWEATHER_PRESSURE_UNIT_DEFAULT", "default" },
			{ GWEATHER_PRESSURE_UNIT_KPA, "GWEATHER_PRESSURE_UNIT_KPA", "kpa" },
			{ GWEATHER_PRESSURE_UNIT_HPA, "GWEATHER_PRESSURE_UNIT_HPA", "hpa" },
			{ GWEATHER_PRESSURE_UNIT_MB, "GWEATHER_PRESSURE_UNIT_MB", "mb" },
			{ GWEATHER_PRESSURE_UNIT_MM_HG, "GWEATHER_PRESSURE_UNIT_MM_HG", "mm-hg" },
			{ GWEATHER_PRESSURE_UNIT_INCH_HG, "GWEATHER_PRESSURE_UNIT_INCH_HG", "inch-hg" },
			{ GWEATHER_PRESSURE_UNIT_ATM, "GWEATHER_PRESSURE_UNIT_ATM", "atm" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherPressureUnit"), values);
	}
	return etype;
}

GType
gweather_distance_unit_get_type (void)
{
	static GType etype = 0;
	if (G_UNLIKELY (etype == 0)) {
		static const GEnumValue values[] = {
			{ GWEATHER_DISTANCE_UNIT_INVALID, "GWEATHER_DISTANCE_UNIT_INVALID", "invalid" },
			{ GWEATHER_DISTANCE_UNIT_DEFAULT, "GWEATHER_DISTANCE_UNIT_DEFAULT", "default" },
			{ GWEATHER_DISTANCE_UNIT_METERS, "GWEATHER_DISTANCE_UNIT_METERS", "meters" },
			{ GWEATHER_DISTANCE_UNIT_KM, "GWEATHER_DISTANCE_UNIT_KM", "km" },
			{ GWEATHER_DISTANCE_UNIT_MILES, "GWEATHER_DISTANCE_UNIT_MILES", "miles" },
			{ 0, NULL, NULL }
		};
		etype = g_enum_register_static (g_intern_static_string ("GWeatherDistanceUnit"), values);
	}
	return etype;
}


/* Generated data ends here */

