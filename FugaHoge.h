#ifndef DOC_FUGA_HOGE_H
#define DOC_FUGA_HOGE_H

#include "Hoge.h"

namespace doc {

/**
 * @brief FugaHoge class title
 * FugaHoge class description
 */
class FugaHoge : public Hoge {
	std::string		str;	/// what it'll say again

public:
	/**
	 * @brief constructor title
	 * constructor description
	 *
	 * @param [in] str what it says
	 */
	FugaHoge(const std::string &str);
};

FugaHoge::FugaHoge(const std::string &str) noexcept :
	FugaHoge{"Hoge"}
{}

} // namespace doc

#endif // DOC_FUGA_HOGE_H
