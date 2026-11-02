// rea decompile_all
// name: CMFCRibbonTab::GetKeyTipRect
// address: 0x100ac290
// body: available
// range: 0x100ac290-0x100ac397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect __thiscall CMFCRibbonTab::GetKeyTipRect(class CDC *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonTab::GetKeyTipRect(CMFCRibbonTab *this,CDC *param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0x134))(&local_30,param_2);
  if ((local_30 != 0) || (local_2c != 0)) {
    BVar1 = IsRectEmpty((RECT *)(this + 0x18));
    if (BVar1 == 0) {
      local_18.left = ((RECT *)(this + 0x18))->left;
      local_18.top = *(LONG *)(this + 0x1c);
      local_18.right = *(LONG *)(this + 0x20);
      local_18.bottom = *(LONG *)(this + 0x24);
      local_28 = *(int *)(this + 0x18);
      uStack_24 = *(undefined4 *)(this + 0x1c);
      local_20 = *(int *)(this + 0x20);
      local_1c = *(int *)(this + 0x24);
      (**(code **)(*(int *)param_2 + 0x68))
                (*(int *)(*(int *)(this + 0x2c) + 0x30),
                 *(undefined4 *)(*(int *)(*(int *)(this + 0x2c) + 0x30) + -0xc),&local_28,0x424);
      iVar2 = ((local_18.right - local_18.left) - (local_20 - local_28)) / 2;
      if (iVar2 < 4) {
        iVar2 = 4;
      }
      InflateRect(&local_18,-iVar2,0);
      local_18.left = (local_18.left + local_18.right) / 2 - local_30 / 2;
      local_18.right = local_18.left + local_30;
      local_18.top = local_1c + -2;
      local_18.bottom = local_2c + local_18.top;
      *(LONG *)param_1 = local_18.left;
      *(LONG *)(param_1 + 4) = local_18.top;
      *(LONG *)(param_1 + 8) = local_18.right;
      *(LONG *)(param_1 + 0xc) = local_18.bottom;
      goto LAB_100ac387;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_100ac387:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

