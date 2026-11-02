// rea decompile_all
// name: CMFCShadowRenderer::DrawFrame
// address: 0x100b1d7d
// body: available
// range: 0x100b1d7d-0x100b2091 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShadowRenderer::DrawFrame(class CDC *,class CRect,unsigned
   int,unsigned char)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCShadowRenderer::DrawFrame
          (CMFCShadowRenderer *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LONG LVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int local_60;
  int local_58;
  int local_2c;
  int local_28;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x118);
  local_18.top = *(LONG *)(this + 0x11c);
  local_18.right = *(LONG *)(this + 0x120);
  local_18.bottom = *(LONG *)(this + 0x124);
  local_1c = param_7;
  if (*(int *)(this + 8) == 1) {
    OffsetRect(&local_18,0,(*(int *)(this + 0x124) - *(int *)(this + 0x11c)) * param_7);
    local_1c = 0;
  }
  iVar6 = DAT_10168920;
  iVar1 = *(int *)(this + 0x128);
  iVar2 = *(int *)(this + 300);
  iVar3 = *(int *)(this + 0x130);
  iVar4 = *(int *)(this + 0x134);
  iVar7 = *(int *)(this + 0x138);
  local_2c = *(int *)(this + 0x140);
  iVar5 = *(int *)(this + 0x144);
  iVar10 = param_6 - iVar4;
  iVar9 = param_4 + iVar2;
  iVar11 = (param_5 - iVar3) - (param_3 + iVar1);
  if ((iVar11 < 1) && (iVar10 == iVar9 || iVar10 - iVar9 < 0)) goto LAB_100b2081;
  if (iVar10 != iVar9 && -1 < iVar10 - iVar9) {
    if (DAT_10168920 == 0) {
      if (0 < local_2c) {
        local_58 = param_5;
        local_60 = param_5 - local_2c;
        local_2c = local_18.right - local_2c;
        uVar12 = 2;
        iVar7 = local_18.right;
        goto LAB_100b1ec1;
      }
    }
    else if (0 < iVar7) {
      local_60 = param_3;
      local_58 = param_3 + iVar7;
      local_2c = local_18.left;
      uVar12 = 0;
      iVar7 = local_18.left + iVar7;
LAB_100b1ec1:
      local_28 = local_18.top + iVar2;
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,local_60,iVar9,local_58,iVar10,local_1c,
                 uVar12,3,local_2c,local_28,iVar7,local_18.bottom - iVar4,param_8);
    }
  }
  if ((0 < iVar11) && (0 < iVar5)) {
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 4),param_1,param_3 + iVar1,param_6 - iVar5,
               param_5 - iVar3,param_6,local_1c,3,2,local_18.left + iVar1,local_18.bottom - iVar5,
               local_18.right - iVar3,local_18.bottom,param_8);
  }
  if (iVar6 == 0) {
    if ((0 < iVar3) && (0 < iVar2)) {
      LVar8 = local_18.right - iVar3;
      uVar12 = 2;
      iVar9 = iVar3;
LAB_100b1fa5:
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_1c,
                 uVar12,0,LVar8,local_18.top,LVar8 + iVar9,local_18.top + iVar2,param_8);
    }
LAB_100b1fd9:
    if ((0 < iVar1) && (0 < iVar4)) {
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_1c,0,
                 2,local_18.left,local_18.bottom - iVar4,local_18.left + iVar1,
                 (local_18.bottom - iVar4) + iVar4,param_8);
    }
  }
  else if (0 < iVar1) {
    if (0 < iVar2) {
      uVar12 = 0;
      LVar8 = local_18.left;
      iVar9 = iVar1;
      goto LAB_100b1fa5;
    }
    goto LAB_100b1fd9;
  }
  if ((0 < iVar3) && (0 < iVar4)) {
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_1c,2,2,
               local_18.right - iVar3,local_18.bottom - iVar4,(local_18.right - iVar3) + iVar3,
               (local_18.bottom - iVar4) + iVar4,param_8);
  }
LAB_100b2081:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

