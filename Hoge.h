#ifndef DOC_HOGE_H
#define DOC_HOGE_H

/**
 * @brief doc namespace title
 * doc name space description
 */
namespace doc {

/**
 * @brief Hoge class title
 * Hoge class description
 */
class Hoge {
	std::string		str;	/// what it'll say

public:
	/**
	 * @brief constructor title
	 * constructor description
	 *
	 * @param [in] str what it says
	 */
	Hoge(const std::string &str);
};

Hoge::Hoge(const std::string &str) noexcept :
	str{str}
{}

} // namespace doc

#endif // DOC_HOGE_H
