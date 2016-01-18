/* QSyncable Project
   Author: Ben Lau
   License: Apache-2.0
   Web: https://github.com/benlau/qsyncable
*/

#ifndef QSDIFFRUNNER_H
#define QSDIFFRUNNER_H

#include "qspatch.h"
#include "qspatchable.h"

class QSDiffRunner
{
public:
    QSDiffRunner();

    QString keyField() const;

    void setKeyField(const QString &keyField);

    QList<QSPatch> compare(const QVariantList& previous,
                           const QVariantList& current);

    bool patch(QSPatchable* patchable, const QList<QSPatch>& patches) const;

signals:

public slots:

private:
    QString m_keyField;
};

#endif // QSDIFFRUNNER_H
