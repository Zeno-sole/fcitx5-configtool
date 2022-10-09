/*
 * SPDX-FileCopyrightText: 2020~2020 CSSlayer <wengxt@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 */
#ifndef _FCITX5_CONFIGTOOL_MIGRATOR_LIB_MIGRATORFACTORY_P_H_
#define _FCITX5_CONFIGTOOL_MIGRATOR_LIB_MIGRATORFACTORY_P_H_

#include "migratorfactoryplugin.h"
#include <QMap>
#include <QString>

namespace fcitx {

class MigratorFactoryPrivate : public QObject {
    Q_OBJECT
public:
    MigratorFactoryPrivate(MigratorFactory *conn);
    virtual ~MigratorFactoryPrivate();
    MigratorFactory *const q_ptr;
    Q_DECLARE_PUBLIC(MigratorFactory);

private:
    void scan();
    std::vector<std::pair<FcitxMigratorFactoryPlugin *, QString>> plugins_;
};
} // namespace fcitx

#endif // _FCITX5_CONFIGTOOL_MIGRATOR_LIB_MIGRATORFACTORY_P_H_
