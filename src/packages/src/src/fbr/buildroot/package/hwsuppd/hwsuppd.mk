HWSUPPD_VERSION =
HWSUPPD_SITE = $(FLI4L_SRCDIR)/hwsupp/hwsuppd
HWSUPPD_SITE_METHOD = local
HWSUPPD_SOURCE =
HWSUPPD_DEPENDENCIES = libevdev

HWSUPPD_MAKE_ENV = \
	PKG_CONFIG_SYSROOT_DIR="$(STAGING_DIR)" \
	PKG_CONFIG_PATH="$(STAGING_DIR)/usr/lib/pkgconfig"

define HWSUPPD_BUILD_CMDS
	+$(HOST_MAKE_ENV) $(HWSUPPD_MAKE_ENV) $(MAKE) CC=$(TARGET_CC) \
		CFLAGS="$(TARGET_CFLAGS)" LDFLAGS="$(TARGET_LDFLAGS)" -C $(@D) hwsuppd
endef

define HWSUPPD_INSTALL_TARGET_CMDS
	$(INSTALL) -D $(@D)/hwsuppd $(TARGET_DIR)/usr/bin/hwsuppd
endef

$(eval $(generic-package))