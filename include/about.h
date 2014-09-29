/* Webcamoid, webcam capture application.
 * Copyright (C) 2011-2014  Gonzalo Exequiel Pedone
 *
 * Webcamod is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Webcamod is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Webcamod. If not, see <http://www.gnu.org/licenses/>.
 *
 * Email     : hipersayan DOT x AT gmail DOT com
 * Web-Site 1: http://github.com/hipersayanX/Webcamoid
 * Web-Site 2: http://kde-apps.org/content/show.php/Webcamoid?content=144796
 */

#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QDesktopServices>
#include <QIcon>
#include <QUrl>

#include "commons.h"
#include "appenvironment.h"

namespace Ui
{
    class About;
}

class COMMONSSHARED_EXPORT About: public QDialog
{
    Q_OBJECT

    public:
        explicit About(QWidget *parent = NULL);
        ~About();

    private:
        QIcon m_icon;
        QString m_websiteLink;
        QString m_websiteLicense;

        QSharedPointer<Ui::About> ui;

        AppEnvironment *m_appEnvironment;

    public slots:
        void setIcon(const QIcon &icon);
        void setAppName(const QString &appName);
        void setVersion(const QString &version);
        void setShortDescription(const QString &shortDescription);
        void setDescription(const QString &description);
        void setCopyrightNotice(const QString &copyrightNotice);
        void setWebsiteLink(const QString &websiteLink);
        void setWebsiteLicense(const QString &websiteLicense);

    private slots:
        void on_btnLicense_clicked();
        void on_btnWebsite_clicked();
};

#endif // ABOUT_H