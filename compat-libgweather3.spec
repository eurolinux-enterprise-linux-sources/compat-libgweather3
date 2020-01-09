Name:           compat-libgweather3
Version:        3.8.2
Release:        1%{?dist}
Summary:        Compat package with libgweather 3.8 libraries

Group:          System Environment/Libraries
License:        GPLv2+
URL:            http://www.gnome.org
#VCS: git:git://git.gnome.org/libgweather
Source0:        http://download.gnome.org/sources/libgweather/3.8/libgweather-%{version}.tar.xz

BuildRequires:  dbus-devel
BuildRequires:  gtk3-devel >= 2.90.0
BuildRequires:  gtk-doc
BuildRequires:  libsoup-devel >= 2.4
BuildRequires:  libxml2-devel >= 2.6
BuildRequires:  gettext
BuildRequires:  intltool
BuildRequires:  autoconf automake libtool
BuildRequires:  gobject-introspection-devel >= 0.10
BuildRequires:  gnome-common

# Explicitly conflict with older libgweather packages that ship libraries
# with the same soname as this compat package
Conflicts: libgweather < 3.10

# https://bugzilla.gnome.org/show_bug.cgi?id=1030365
# [libgweather] Translations incomplete
Patch0: complete-l10n.patch

# https://bugzilla.redhat.com/show_bug.cgi?id=1139747
# yr.no API changes
Patch1: yr.no-update-to-version-1.9-of-the-online-API.patch

%description
Compatibility package with libgweather 3.8 libraries.


%prep
%setup -q -n libgweather-%{version}
%patch0 -p2 -b .complete-l10n
%patch1 -p1 -b .yr.no-update-to-version-1.9-of-the-online-API

%build
%configure --disable-static --disable-gtk-doc
make %{?_smp_mflags}

%install
make install DESTDIR=$RPM_BUILD_ROOT
find $RPM_BUILD_ROOT -name '*.la' -exec rm -f {} ';'

rm -rf $RPM_BUILD_ROOT%{_includedir}
rm -rf $RPM_BUILD_ROOT%{_libdir}/girepository-1.0/
rm -rf $RPM_BUILD_ROOT%{_libdir}/*.so
rm -rf $RPM_BUILD_ROOT%{_libdir}/pkgconfig/
rm -rf $RPM_BUILD_ROOT%{_datadir}

%post
/sbin/ldconfig

%postun
/sbin/ldconfig

%files
%doc COPYING
%{_libdir}/libgweather-3.so.*


%changelog
* Fri Apr 17 2015 Kalev Lember <kalevlember@gmail.com> - 3.8.2-1
- libgweather compat package for el7-gnome-3-14
