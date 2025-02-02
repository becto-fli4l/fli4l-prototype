################################################################################
#
# luaposix
#
################################################################################

LUAPOSIX_VERSION = 34.0.4
LUAPOSIX_SITE = $(call github,luaposix,luaposix,release-v$(LUAPOSIX_VERSION))
LUAPOSIX_LICENSE = MIT
LUAPOSIX_LICENSE_FILES = LICENSE
LUAPOSIX_DEPENDENCIES = luainterpreter host-lua
LUAPOSIX_CONF_ENV = ax_cv_lua_luaexecdir="/usr/lib/lua/$(LUAINTERPRETER_ABIVER)"

define LUAPOSIX_BUILD_CMDS
	(cd $(@D); \
		$(LUA_RUN) build-aux/luke \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS)" \
		LUA_INCDIR=$(STAGING_DIR)/usr/include \
	)
endef

define LUAPOSIX_INSTALL_TARGET_CMDS
	(cd $(@D); \
		$(LUA_RUN) build-aux/luke install \
		INST_LIBDIR="$(TARGET_DIR)/usr/lib/lua/$(LUAINTERPRETER_ABIVER)" \
		INST_LUADIR="$(TARGET_DIR)/usr/share/lua/$(LUAINTERPRETER_ABIVER)" \
	)
endef

$(eval $(generic-package))
