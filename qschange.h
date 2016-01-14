#ifndef QSCHANGE_H
#define QSCHANGE_H

#include <QSharedDataPointer>
#include <QVariantMap>

class QSChangeData;

class QSChange
{
public:
    enum Type {
        Insert,
        Remove,
        Update,
        Move
    };

    QSChange();
    QSChange(const QSChange &);
    QSChange &operator=(const QSChange &);
    ~QSChange();

    QSChange::Type type() const;
    void setType(const QSChange::Type &type);

    QVariantMap data() const;

    void setData(const QVariantMap &data);

    bool operator==(const QSChange& rhs) const;

signals:

public slots:

private:
    QSharedDataPointer<QSChangeData> d;

};

Q_DECLARE_METATYPE(QSChange)

#endif // QSCHANGE_H
