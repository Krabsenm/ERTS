#include "differentiate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void differentiate::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"res_V_address0\" :  \"" << res_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_ce0\" :  \"" << res_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_we0\" :  \"" << res_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_d0\" :  \"" << res_V_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_AWVALID\" :  \"" << s_axi_diff_io_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_AWREADY\" :  \"" << s_axi_diff_io_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_AWADDR\" :  \"" << s_axi_diff_io_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_WVALID\" :  \"" << s_axi_diff_io_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_WREADY\" :  \"" << s_axi_diff_io_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_WDATA\" :  \"" << s_axi_diff_io_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_WSTRB\" :  \"" << s_axi_diff_io_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_ARVALID\" :  \"" << s_axi_diff_io_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_ARREADY\" :  \"" << s_axi_diff_io_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_ARADDR\" :  \"" << s_axi_diff_io_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_RVALID\" :  \"" << s_axi_diff_io_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_RREADY\" :  \"" << s_axi_diff_io_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_RDATA\" :  \"" << s_axi_diff_io_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_RRESP\" :  \"" << s_axi_diff_io_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_BVALID\" :  \"" << s_axi_diff_io_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_diff_io_BREADY\" :  \"" << s_axi_diff_io_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_diff_io_BRESP\" :  \"" << s_axi_diff_io_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

