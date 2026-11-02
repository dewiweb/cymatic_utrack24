// rea decompile_all
// name: CMFCRibbonMiniToolBar::UpdateTransparency
// address: 0x100d4aa5
// body: available
// range: 0x100d4aa5-0x100d4c46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonMiniToolBar::UpdateTransparency(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCRibbonMiniToolBar::UpdateTransparency(CMFCRibbonMiniToolBar *this)

{
  POINT pt;
  POINT pt_00;
  int iVar1;
  BOOL BVar2;
  ulonglong uVar3;
  tagPOINT local_2c;
  int local_24;
  float local_20;
  CMFCRibbonMiniToolBar local_19;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  local_2c.x = 0;
  local_2c.y = 0;
  GetCursorPos(&local_2c);
  local_19 = (CMFCRibbonMiniToolBar)0x0;
  iVar1 = FUN_100b3c4d(*(int *)(this + 0x1ee4));
  if (iVar1 == 0) {
    iVar1 = FUN_100b2604(*(int *)(this + 0x1ee4));
    if (iVar1 != 0) goto LAB_100d4bfe;
    iVar1 = FUN_100b3c08(*(int *)(this + 0x1ee4));
    if (iVar1 != 0) goto LAB_100d4bfe;
    pt.y = local_2c.y;
    pt.x = local_2c.x;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 != 0) {
      *(undefined4 *)(this + 0x1f08) = 1;
      local_19 = (CMFCRibbonMiniToolBar)0xff;
      goto LAB_100d4c1e;
    }
    if (*(int *)(this + 0x1f0c) == 0) {
      local_24 = 0;
      iVar1 = 0;
      if (local_2c.x < local_18.left) {
        local_24 = local_18.left - local_2c.x;
      }
      else if (local_18.right < local_2c.x) {
        local_24 = local_2c.x - local_18.right;
      }
      if (local_2c.y < local_18.top) {
        iVar1 = local_18.top - local_2c.y;
      }
      else if (local_18.bottom < local_2c.y) {
        iVar1 = local_2c.y - local_18.bottom;
      }
      if (local_24 <= iVar1) {
        local_24 = iVar1;
      }
      local_20 = (float)((-(uint)(*(int *)(this + 0x1f08) != 0) & 0x2c) + 0x16);
      if ((int)((-(uint)(*(int *)(this + 0x1f08) != 0) & 0x84) + 0x2c) < local_24) {
        PostMessageW(*(HWND *)(this + 0x20),0x10,0,0);
        goto LAB_100d4c38;
      }
      if (local_24 < (int)local_20) {
        local_20 = ((float)(int)local_20 - (float)local_24) / (float)(int)local_20;
        uVar3 = FUN_100f8696();
        local_19 = SUB81(uVar3,0);
      }
    }
    else {
      local_19 = (CMFCRibbonMiniToolBar)0xff;
    }
  }
  else {
LAB_100d4bfe:
    local_19 = (CMFCRibbonMiniToolBar)0xff;
    if (*(int *)(this + 0x1f0c) != 0) {
      pt_00.y = local_2c.y;
      pt_00.x = local_2c.x;
      BVar2 = PtInRect(&local_18,pt_00);
      if (BVar2 != 0) {
LAB_100d4c1e:
        *(undefined4 *)(this + 0x1f0c) = 0;
      }
    }
  }
  if (this[0x1f04] != local_19) {
    this[0x1f04] = local_19;
  }
LAB_100d4c38:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

