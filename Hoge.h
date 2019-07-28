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
	int val; /// Hoge's value

public:
	/**
	 * @brief constructor title
	 * constructor description
	 *
	 * @param [in] val Hoge's value
	 */
	Hoge(int val) : val(val) {}
};

} // namespace doc

#endif // DOC_HOGE_H
