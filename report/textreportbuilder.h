
#ifndef TEXTREPORTBUILDER_H_KBRPEPTZ
#define TEXTREPORTBUILDER_H_KBRPEPTZ

#include "builder.h"
#include <fstream>

class TextReportBuilder : public ReportBuilder
{
public:
	TextReportBuilder();
	virtual ~TextReportBuilder();

	virtual void start(const std::string& filename,
			const TimePoint& start_time, const TimePoint& end_time,
			const std::list<std::string>& tickers);

	virtual void begin_element(const std::string& title);
	virtual void insert_fit_elements(const std::vector<FitElement>& elements);
	virtual void insert_text(const std::string& text);
	virtual void end_element();

	virtual void end();

private:
	std::fstream m_out;
};

#endif /* end of include guard: TEXTREPORTBUILDER_H_KBRPEPTZ */
