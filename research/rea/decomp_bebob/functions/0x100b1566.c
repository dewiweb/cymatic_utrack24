// rea decompile_all
// name: CMFCControlRenderer::DrawFrame
// address: 0x100b1566
// body: available
// range: 0x100b1566-0x100b1a8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCControlRenderer::DrawFrame(class CDC *,class CRect,unsigned
   int,unsigned char)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCControlRenderer::DrawFrame
          (CMFCControlRenderer *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LONG LVar11;
  int iVar12;
  int iVar13;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x118);
  local_18.top = *(LONG *)(this + 0x11c);
  local_18.right = *(LONG *)(this + 0x120);
  local_18.bottom = *(LONG *)(this + 0x124);
  local_2c = param_7;
  if (*(int *)(this + 8) == 1) {
    OffsetRect(&local_18,0,(*(int *)(this + 0x124) - *(int *)(this + 0x11c)) * param_7);
    local_2c = 0;
  }
  iVar3 = *(int *)(this + 0x128);
  iVar4 = *(int *)(this + 300);
  iVar5 = *(int *)(this + 0x130);
  iVar6 = *(int *)(this + 0x134);
  iVar12 = param_5 - iVar5;
  iVar1 = param_4 + iVar4;
  iVar7 = *(int *)(this + 0x138);
  iVar8 = *(int *)(this + 0x13c);
  iVar9 = *(int *)(this + 0x140);
  iVar10 = *(int *)(this + 0x144);
  iVar2 = param_6 - iVar6;
  iVar13 = param_3 + iVar3;
  if ((0 < iVar12 - iVar13) || (iVar2 != iVar1 && -1 < iVar2 - iVar1)) {
    if (iVar2 != iVar1 && -1 < iVar2 - iVar1) {
      if (0 < iVar7) {
        if (*(int *)(this + 0x160) == 0) {
          local_28 = local_18.left;
          LVar11 = local_18.left + iVar7;
        }
        else {
          local_28 = local_18.right - iVar7;
          LVar11 = local_18.right;
        }
        local_24 = local_18.top + iVar4;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 4),param_1,param_3,iVar1,param_3 + iVar7,iVar2,
                   local_2c,0,3,local_28,local_24,LVar11,local_18.bottom - iVar6,param_8);
      }
      if (0 < iVar9) {
        if (*(int *)(this + 0x160) == 0) {
          local_28 = local_18.right - iVar9;
          local_20 = local_18.right;
        }
        else {
          local_20 = iVar9 + local_18.left;
          local_28 = local_18.left;
        }
        local_24 = local_18.top + iVar4;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 4),param_1,param_5 - iVar9,iVar1,param_5,iVar2,
                   local_2c,2,3,local_28,local_24,local_20,local_18.bottom - iVar6,param_8);
      }
    }
    if (0 < iVar12 - iVar13) {
      if (0 < iVar8) {
        iVar1 = iVar5;
        local_28 = iVar3;
        if (*(int *)(this + 0x160) != 0) {
          iVar1 = iVar3;
          local_28 = iVar5;
        }
        local_28 = local_18.left + local_28;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 4),param_1,iVar13,param_4,iVar12,param_4 + iVar8,
                   local_2c,3,0,local_28,local_18.top,local_18.right - iVar1,iVar8 + local_18.top,
                   param_8);
      }
      if (0 < iVar10) {
        local_28 = iVar3;
        local_20 = iVar5;
        if (*(int *)(this + 0x160) != 0) {
          local_28 = iVar5;
          local_20 = iVar3;
        }
        local_20 = local_18.right - local_20;
        local_24 = local_18.bottom - iVar10;
        local_28 = local_18.left + local_28;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 4),param_1,iVar13,param_6 - iVar10,iVar12,param_6,
                   local_2c,3,2,local_28,local_24,local_20,local_18.bottom,param_8);
      }
    }
    if ((0 < iVar3) && (0 < iVar4)) {
      iVar12 = local_18.left;
      if (*(int *)(this + 0x160) != 0) {
        iVar12 = local_18.right - iVar3;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_2c,0,
                 0,iVar12,local_18.top,iVar12 + iVar3,local_18.top + iVar4,param_8);
    }
    if ((0 < iVar5) && (0 < iVar4)) {
      iVar12 = local_18.left;
      if (*(int *)(this + 0x160) == 0) {
        iVar12 = local_18.right - iVar5;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_2c,2,
                 0,iVar12,local_18.top,iVar12 + iVar5,local_18.top + iVar4,param_8);
    }
    if ((0 < iVar3) && (0 < iVar6)) {
      if (*(int *)(this + 0x160) == 0) {
        local_28 = local_18.left;
      }
      else {
        local_28 = local_18.right - iVar3;
      }
      local_20 = local_28 + iVar3;
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_2c,0,
                 2,local_28,local_18.bottom - iVar6,local_20,iVar6 + (local_18.bottom - iVar6),
                 param_8);
    }
    if ((0 < iVar5) && (0 < iVar6)) {
      if (*(int *)(this + 0x160) == 0) {
        local_28 = local_18.right - iVar5;
      }
      else {
        local_28 = local_18.left;
      }
      local_20 = local_28 + iVar5;
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 4),param_1,param_3,param_4,param_5,param_6,local_2c,2,
                 2,local_28,local_18.bottom - iVar6,local_20,iVar6 + (local_18.bottom - iVar6),
                 param_8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

