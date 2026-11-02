// rea decompile_all
// name: CMFCMenuButton::OnDraw
// address: 0x1004c550
// body: available
// range: 0x1004c550-0x1004c652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCMenuButton::OnDraw(class CDC *,class CRect const
   &,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMenuButton::OnDraw(CMFCMenuButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  int local_44 [2];
  CDC *local_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  LONG LStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  int local_10;
  CRect *local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_c = param_2;
  FUN_10037b18(local_44);
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_20 = *(int *)(param_2 + 8) + (-10 - local_44[0]);
  CMFCButton::OnDraw((CMFCButton *)this,local_3c,(CRect *)&local_28,param_3);
  iStack_34 = *(int *)(local_c + 4);
  uStack_30 = *(undefined4 *)(local_c + 8);
  LStack_2c = *(LONG *)(local_c + 0xc);
  local_38 = local_20;
  local_10 = 0;
  local_c = (CRect *)0x0;
  CMenuImages::Draw(local_3c,(*(int *)(this + 0x750) != 0) + 0xd,(CRect *)&local_38,param_3 >> 2 & 1
                    ,(CSize *)&local_10);
  if (*(int *)(this + 0x764) != 0) {
    local_18._0_4_ = local_38;
    local_18._4_4_ = iStack_34;
    local_c = (CRect *)LStack_2c;
    local_10 = local_38 + 2;
    InflateRect((LPRECT)local_18,0,-2);
    if ((DAT_10168378 == 0) || (*(int *)(this + 0x98) != 0)) {
      local_18._0_4_ = local_18._0_4_ + *(int *)(this + 0xdc);
      local_18._4_4_ = local_18._4_4_ + *(int *)(this + 0xe0);
    }
    CDC::Draw3dRect(local_3c,(tagRECT *)local_18,DAT_10166ac8,DAT_10166abc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

