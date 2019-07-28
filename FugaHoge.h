#ifndef DOC_FUGA_HOGE_H
#define DOC_FUGA_HOGE_H

#include <string>

#include "Hoge.h"

namespace doc {

/**
 * @brief FugaHoge class title
 *
 * FugaHoge class description
 */
class FugaHoge : public Hoge {
protected:
	int val; ///< #FugaHoge's internal

public:
	/**
	 * @brief constructor title
	 *
	 * constructor description
	 *
	 * @param [in] val FugaHoge's value
	 */
	FugaHoge(int val) : Hoge(0), val(val) {}
};

} // namespace doc

#endif // DOC_FUGA_HOGE_H
