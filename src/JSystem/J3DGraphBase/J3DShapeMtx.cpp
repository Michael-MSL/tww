//
// Generated by dtk
// Translation Unit: J3DShapeMtx.cpp
//

#include "JSystem/J3DGraphBase/J3DShapeMtx.h"
#include "JSystem/J3DGraphBase/J3DGD.h"
#include "JSystem/J3DGraphBase/J3DPacket.h"
#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "JSystem/J3DGraphBase/J3DShapeDraw.h"
#include "JSystem/J3DGraphBase/J3DSys.h"

extern void J3DFifoLoadNrmMtxImm(Mtx, u32);
extern void J3DFifoLoadNrmMtxImm3x3(Mtx33, u32);
extern void J3DFifoLoadPosMtxImm(Mtx, u32);
extern void J3DPSMtx33Copy(Mtx33, Mtx33);
extern void J3DScaleNrmMtx(Mtx, Vec const &);
extern void J3DScaleNrmMtx33(Mtx33, Vec const &);
extern void J3DCalcBBoardMtx(Mtx);

u32 J3DShapeMtx::sCurrentPipeline;

/* 802DB9D8-802DBA1C       .text loadMtxIndx_PNGP__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PNGP(int mtxNo, u16 index) const {
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_A, index, 0xB000 | ((u16)(mtxNo * 0x0C)));
    J3DFifoLoadIndx(GX_CMD_LOAD_INDX_B, index, 0x8000 | ((u16)((mtxNo * 0x09) + 0x400)));
}

/* 802DBA1C-802DBA7C       .text loadMtxIndx_PCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    j3dSys.loadNrmMtxIndx(mtxNo, index);
}

/* 802DBA7C-802DBAC8       .text loadMtxIndx_NCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_NCPU(int mtxNo, u16 index) const {
    j3dSys.loadPosMtxIndx(mtxNo, index);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

/* 802DBAC8-802DBB20       .text loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs */
void J3DShapeMtx::loadMtxIndx_PNCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

/* 802DBB20-802DBB94       .text loadMtxImm_PNGP__14J3DShapeMtxImmCFiUs */
void J3DShapeMtxImm::loadMtxImm_PNGP(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(j3dSys.getModelDrawMtx(index), mtxNo * 3);
    loadNrmMtx(mtxNo, index);
}

/* 802DBB94-802DBC00       .text loadMtxImm_PCPU__14J3DShapeMtxImmCFiUs */
void J3DShapeMtxImm::loadMtxImm_PCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    loadNrmMtx(mtxNo, index);
}

/* 802DBC00-802DBC60       .text loadMtxImm_NCPU__14J3DShapeMtxImmCFiUs */
void J3DShapeMtxImm::loadMtxImm_NCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(j3dSys.getModelDrawMtx(index), mtxNo * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

/* 802DBC60-802DBCB8       .text loadMtxImm_PNCPU__14J3DShapeMtxImmCFiUs */
void J3DShapeMtxImm::loadMtxImm_PNCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

/* 802DBCB8-802DBD44       .text loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int mtxNo, u16 index) const {
    Mtx mtx;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(index), mtx);
    J3DFifoLoadPosMtxImm(mtx, mtxNo * 3);
    loadNrmMtx(mtxNo, index, mtx);
}

/* 802DBD44-802DBDD4       .text loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int mtxNo, u16 index) const {
    Mtx mtx;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(index), mtx);
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    loadNrmMtx(mtxNo, index, mtx);
}

/* 802DBDD4-802DBE4C       .text loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int mtxNo, u16 index) const {
    Mtx mtx;
    MTXConcat(*j3dSys.getShapePacket()->getBaseMtxPtr(), j3dSys.getModelDrawMtx(index), mtx);
    J3DFifoLoadPosMtxImm(mtx, mtxNo * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

/* 802DBE4C-802DBEA4       .text loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int mtxNo, u16 index) const {
    J3DFifoLoadPosMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
    J3DFifoLoadNrmMtxImm(*j3dSys.getShapePacket()->getBaseMtxPtr(), mtxNo * 3);
}

J3DShapeMtx::MtxLoadIndx J3DShapeMtx::sMtxLoadPipeline[] = {
    &J3DShapeMtx::loadMtxIndx_PNGP,
    &J3DShapeMtx::loadMtxIndx_PCPU,
    &J3DShapeMtx::loadMtxIndx_NCPU,
    &J3DShapeMtx::loadMtxIndx_PNCPU,
};

/* 802DBEA4-802DBF00       .text load__11J3DShapeMtxCFv */
void J3DShapeMtx::load() const {
    MtxLoadIndx f = sMtxLoadPipeline[sCurrentPipeline];
    (this->*f)(0, mUseMtxIndex);
}

/* 802DBF00-802DBF60       .text calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f */
void J3DShapeMtx::calcNBTScale(const Vec& scale, Mtx33* pSrc, Mtx33* pDst) {
    J3DPSMtx33Copy(pSrc[mUseMtxIndex], pDst[mUseMtxIndex]);
    J3DScaleNrmMtx33(pDst[mUseMtxIndex], scale);
}

J3DShapeMtxImm::MtxLoadImm J3DShapeMtxImm::sMtxLoadPipeline[] = {
    &J3DShapeMtxImm::loadMtxImm_PNGP,
    &J3DShapeMtxImm::loadMtxImm_PCPU,
    &J3DShapeMtxImm::loadMtxImm_NCPU,
    &J3DShapeMtxImm::loadMtxImm_PNCPU,
};

/* 802DBF60-802DBFBC       .text load__14J3DShapeMtxImmCFv */
void J3DShapeMtxImm::load() const {
    MtxLoadImm f = sMtxLoadPipeline[sCurrentPipeline];
    (this->*f)(0, mUseMtxIndex);
}

J3DShapeMtxConcatView::MtxLoadConcatView J3DShapeMtxConcatView::sMtxLoadPipeline[] = {
    &J3DShapeMtxConcatView::loadMtxConcatView_PNGP,
    &J3DShapeMtxConcatView::loadMtxConcatView_PCPU,
    &J3DShapeMtxConcatView::loadMtxConcatView_NCPU,
    &J3DShapeMtxConcatView::loadMtxConcatView_PNCPU,
};

Mtx * J3DShapeMtxConcatView::sMtxPtrTbl[2];

/* 802DBFBC-802DC08C       .text load__21J3DShapeMtxConcatViewCFv */
void J3DShapeMtxConcatView::load() const {
    sMtxPtrTbl[0] = j3dSys.getModel()->mpNodeMtx;
    sMtxPtrTbl[1] = j3dSys.getModel()->mpWeightEnvMtx;

    MtxLoadConcatView f = sMtxLoadPipeline[sCurrentPipeline];
    j3dSys.setModelDrawMtx(sMtxPtrTbl[j3dSys.getModel()->getModelData()->getDrawMtxFlag(mUseMtxIndex)]);
    (this->*f)(0, j3dSys.getModel()->getModelData()->getDrawMtxIndex(mUseMtxIndex));
}

/* 802DC08C-802DC184       .text loadNrmMtx__14J3DShapeMtxImmCFiUs */
void J3DShapeMtxImm::loadNrmMtx(int mtxNo, u16 index) const {
    if (J3DShapeMtx::sCurrentScaleFlag[index] == 1) {
        if (J3DShapeMtx::sNBTFlag == 0) {
            J3DFifoLoadNrmMtxImm(j3dSys.getModelDrawMtx(index), 0);
        } else {
            Mtx33 mtx;
            J3DPSMtx33CopyFrom34(j3dSys.getModelDrawMtx(index), mtx);
            J3DScaleNrmMtx33(mtx, j3dSys.getNBTScale());
            J3DFifoLoadNrmMtxImm3x3(mtx, 0);
        }
    } else {
        Mtx33 mtx;
        J3DPSCalcInverseTranspose(j3dSys.getModelDrawMtx(index), mtx);

        if (J3DShapeMtx::sNBTFlag == 0) {
            J3DFifoLoadNrmMtxImm(j3dSys.getModelDrawMtx(index), 0);
        } else {
            J3DScaleNrmMtx33(mtx, j3dSys.getNBTScale());
            J3DFifoLoadNrmMtxImm3x3(mtx, 0);
        }
    }
}

/* 802DC184-802DC254       .text loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f */
void J3DShapeMtxConcatView::loadNrmMtx(int mtxNo, u16 index, Mtx mtx) const {
}

/* 802DC254-802DC2F4       .text load__16J3DShapeMtxMultiCFv */
void J3DShapeMtxMulti::load() const {
    MtxLoadIndx f = sMtxLoadPipeline[sCurrentPipeline];

    for (s32 i = 0; i < mUseMtxNum; i++) {
        if (mUseMtxIndexTable[i] != 0xFFFF) {
            (this->*f)(i, mUseMtxIndexTable[i]);
        }
    }
}

/* 802DC2F4-802DC388       .text calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f */
void J3DShapeMtxMulti::calcNBTScale(const Vec&, Mtx33*, Mtx33*) {
    /* Nonmatching */
}

/* 802DC388-802DC428       .text load__19J3DShapeMtxMultiImmCFv */
void J3DShapeMtxMultiImm::load() const {
    MtxLoadImm f = sMtxLoadPipeline[sCurrentPipeline];

    for (s32 i = 0; i < mUseMtxNum; i++) {
        if (mUseMtxIndexTable[i] != 0xFFFF) {
            (this->*f)(i, mUseMtxIndexTable[i]);
        }
    }
}

/* 802DC428-802DC524       .text load__26J3DShapeMtxMultiConcatViewCFv */
void J3DShapeMtxMultiConcatView::load() const {
    sMtxPtrTbl[0] = j3dSys.getModel()->mpNodeMtx;
    sMtxPtrTbl[1] = j3dSys.getModel()->mpWeightEnvMtx;

    MtxLoadConcatView f = sMtxLoadPipeline[sCurrentPipeline];

    for (s32 i = 0; i < mUseMtxNum; i++) {
        u16 useMtxIndex = mUseMtxIndexTable[i];
        if (useMtxIndex != 0xFFFF) {
            u16 drawMtxIndex = j3dSys.getModel()->getModelData()->getDrawMtxIndex(useMtxIndex);
            j3dSys.setModelDrawMtx(sMtxPtrTbl[j3dSys.getModel()->getModelData()->getDrawMtxFlag(useMtxIndex)]);
            (this->*f)(i, drawMtxIndex);
        }
    }
}

/* 802DC524-802DC620       .text loadNrmMtx__19J3DShapeMtxMultiImmCFiUs */
void J3DShapeMtxMultiImm::loadNrmMtx(int mtxNo, u16 index) const {
    /* Nonmatching */
}

/* 802DC620-802DC6F4       .text loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int, u16, Mtx) const {
    /* Nonmatching */
}

/* 802DC6F4-802DC7B8       .text load__20J3DShapeMtxBBoardImmCFv */
void J3DShapeMtxBBoardImm::load() const {
    Mtx mtx;
    MTXCopy(j3dSys.getModelDrawMtx(mUseMtxIndex), mtx);
    J3DCalcBBoardMtx(mtx);
    J3DFifoLoadPosMtxImm(mtx, 0);

    mtx[0][0] = 1.0f / mtx[0][0];
    mtx[1][1] = 1.0f / mtx[1][1];
    mtx[2][2] = 1.0f / mtx[2][2];
    mtx[0][3] = 0.0f;
    mtx[1][3] = 0.0f;
    mtx[2][3] = 0.0f;

    if (sNBTFlag == 0) {
        J3DFifoLoadNrmMtxImm(mtx, 0);
    } else {
        J3DScaleNrmMtx(mtx, j3dSys.getNBTScale());
        J3DFifoLoadNrmMtxImm(mtx, 0);
    }
}

/* 802DC7B8-802DC8C0       .text load__27J3DShapeMtxBBoardConcatViewCFv */
void J3DShapeMtxBBoardConcatView::load() const {
    u16 drawMtxIndex = j3dSys.getModel()->getModelData()->getDrawMtxIndex(mUseMtxIndex);

    Mtx mtx;
    if (j3dSys.getModel()->getModelData()->getDrawMtxFlag(mUseMtxIndex) == 0) {
        MTXConcat(j3dSys.getViewMtx(), j3dSys.getModel()->mpNodeMtx[drawMtxIndex], mtx);
    } else {
        MTXConcat(j3dSys.getViewMtx(), j3dSys.getModel()->mpWeightEnvMtx[drawMtxIndex], mtx);
    }

    J3DCalcBBoardMtx(mtx);
    J3DFifoLoadPosMtxImm(mtx, 0);

    mtx[0][0] = 1.0f / mtx[0][0];
    mtx[1][1] = 1.0f / mtx[1][1];
    mtx[2][2] = 1.0f / mtx[2][2];
    mtx[0][3] = 0.0f;
    mtx[1][3] = 0.0f;
    mtx[2][3] = 0.0f;

    if (sNBTFlag == 0) {
        J3DFifoLoadNrmMtxImm(mtx, 0);
    } else {
        J3DScaleNrmMtx(mtx, j3dSys.getNBTScale());
        J3DFifoLoadNrmMtxImm(mtx, 0);
    }
}

/* 802DC8C0-802DC9B8       .text load__21J3DShapeMtxYBBoardImmCFv */
void J3DShapeMtxYBBoardImm::load() const {
    /* Nonmatching */
}

/* 802DC9B8-802DCAEC       .text load__28J3DShapeMtxYBBoardConcatViewCFv */
void J3DShapeMtxYBBoardConcatView::load() const {
    /* Nonmatching */
}

/* 802DCAEC-802DCB04       .text __ct__12J3DShapeDrawFPCUcUl */
J3DShapeDraw::J3DShapeDraw(const unsigned char*, unsigned long) {
    /* Nonmatching */
}

/* 802DCB04-802DCB30       .text draw__12J3DShapeDrawCFv */
void J3DShapeDraw::draw() const {
    /* Nonmatching */
}

/* 802DCB30-802DCB78       .text __dt__12J3DShapeDrawFv */
J3DShapeDraw::~J3DShapeDraw() {
    /* Nonmatching */
}

/* 802DCB78-802DCBF4       .text __dt__28J3DShapeMtxYBBoardConcatViewFv */
J3DShapeMtxYBBoardConcatView::~J3DShapeMtxYBBoardConcatView() {
    /* Nonmatching */
}

/* 802DCBF4-802DCC00       .text getType__21J3DShapeMtxYBBoardImmCFv */
u32 J3DShapeMtxYBBoardImm::getType() const {
    return 'SMYB';
}

/* 802DCC00-802DCC08       .text getUseMtxIndex__11J3DShapeMtxCFUs */
u32 J3DShapeMtx::getUseMtxIndex(u16 i) const {
    return mUseMtxIndex;
}

/* 802DCC08-802DCC74       .text __dt__21J3DShapeMtxYBBoardImmFv */
J3DShapeMtxYBBoardImm::~J3DShapeMtxYBBoardImm() {
    /* Nonmatching */
}

/* 802DCC74-802DCCF0       .text __dt__27J3DShapeMtxBBoardConcatViewFv */
J3DShapeMtxBBoardConcatView::~J3DShapeMtxBBoardConcatView() {
    /* Nonmatching */
}

/* 802DCCF0-802DCCFC       .text getType__20J3DShapeMtxBBoardImmCFv */
u32 J3DShapeMtxBBoardImm::getType() const {
    return 'SMBB';
}

/* 802DCCFC-802DCD68       .text __dt__20J3DShapeMtxBBoardImmFv */
J3DShapeMtxBBoardImm::~J3DShapeMtxBBoardImm() {
    /* Nonmatching */
}

/* 802DCD68-802DCDE4       .text __dt__26J3DShapeMtxMultiConcatViewFv */
J3DShapeMtxMultiConcatView::~J3DShapeMtxMultiConcatView() {
    /* Nonmatching */
}

/* 802DCDE4-802DCDF0       .text getType__26J3DShapeMtxMultiConcatViewCFv */
u32 J3DShapeMtxMultiConcatView::getType() const {
    return 'SMMI';
}

/* 802DCDF0-802DCDF8       .text getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv */
u32 J3DShapeMtxMultiConcatView::getUseMtxNum() const {
    return mUseMtxNum;
}

/* 802DCDF8-802DCE08       .text getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs */
u32 J3DShapeMtxMultiConcatView::getUseMtxIndex(u16 i) const {
    return mUseMtxIndexTable[i];
}

/* 802DCE08-802DCE0C       .text loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int mtxNo, u16 index) const {
    /* Nonmatching */
}

/* 802DCE0C-802DCE78       .text __dt__19J3DShapeMtxMultiImmFv */
J3DShapeMtxMultiImm::~J3DShapeMtxMultiImm() {
    /* Nonmatching */
}

/* 802DCE78-802DCE84       .text getType__19J3DShapeMtxMultiImmCFv */
u32 J3DShapeMtxMultiImm::getType() const {
    return 'SMMI';
}

/* 802DCE84-802DCE8C       .text getUseMtxNum__19J3DShapeMtxMultiImmCFv */
u32 J3DShapeMtxMultiImm::getUseMtxNum() const {
    return mUseMtxNum;
}

/* 802DCE8C-802DCE9C       .text getUseMtxIndex__19J3DShapeMtxMultiImmCFUs */
u32 J3DShapeMtxMultiImm::getUseMtxIndex(u16 i) const {
    return mUseMtxIndexTable[i];
}

/* 802DCE9C-802DCEF8       .text __dt__16J3DShapeMtxMultiFv */
J3DShapeMtxMulti::~J3DShapeMtxMulti() {
    /* Nonmatching */
}

/* 802DCEF8-802DCF04       .text getType__16J3DShapeMtxMultiCFv */
u32 J3DShapeMtxMulti::getType() const {
    return 'SMML';
}

/* 802DCF04-802DCF0C       .text getUseMtxNum__16J3DShapeMtxMultiCFv */
u32 J3DShapeMtxMulti::getUseMtxNum() const {
    return mUseMtxNum;
}

/* 802DCF0C-802DCF1C       .text getUseMtxIndex__16J3DShapeMtxMultiCFUs */
u32 J3DShapeMtxMulti::getUseMtxIndex(u16 i) const {
    return mUseMtxIndexTable[i];
}

/* 802DCF1C-802DCF88       .text __dt__21J3DShapeMtxConcatViewFv */
J3DShapeMtxConcatView::~J3DShapeMtxConcatView() {
    /* Nonmatching */
}

/* 802DCF88-802DCF94       .text getType__21J3DShapeMtxConcatViewCFv */
u32 J3DShapeMtxConcatView::getType() const {
    return 'SMCV';
}

/* 802DCF94-802DCF98       .text loadNrmMtx__21J3DShapeMtxConcatViewCFiUs */
void J3DShapeMtxConcatView::loadNrmMtx(int mtxNo, u16 index) const {
    /* Nonmatching */
}

/* 802DCF98-802DCFF4       .text __dt__14J3DShapeMtxImmFv */
J3DShapeMtxImm::~J3DShapeMtxImm() {
    /* Nonmatching */
}

/* 802DCFF4-802DD000       .text getType__14J3DShapeMtxImmCFv */
u32 J3DShapeMtxImm::getType() const {
    return 'SMIM';
}

/* 802DD000-802DD048       .text __dt__11J3DShapeMtxFv */
J3DShapeMtx::~J3DShapeMtx() {
    /* Nonmatching */
}

/* 802DD048-802DD054       .text getType__11J3DShapeMtxCFv */
u32 J3DShapeMtx::getType() const {
    return 'SMTX';
}
