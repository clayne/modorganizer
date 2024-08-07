/*
Copyright (C) 2014 Sebastian Herbord. All rights reserved.

This file is part of Mod Organizer.

Mod Organizer is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Mod Organizer is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Mod Organizer.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PREVIEWGENERATOR_H
#define PREVIEWGENERATOR_H

#include <QString>
#include <QWidget>
#include <functional>
#include <ipluginpreview.h>
#include <map>

class PluginContainer;

class PreviewGenerator
{
public:
  PreviewGenerator(const PluginContainer& pluginContainer);

  bool previewSupported(const QString& fileExtension, const bool& isArchive) const;

  QWidget* genPreview(const QString& fileName) const;

  QWidget* genArchivePreview(const QByteArray& fileData, const QString& fileName) const;

private:
  const PluginContainer& m_PluginContainer;
  QSize m_MaxSize;
};

#endif  // PREVIEWGENERATOR_H
