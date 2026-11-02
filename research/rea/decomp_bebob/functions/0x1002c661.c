// rea decompile_all
// name: CMFCToolBar::CalcMaxButtonHeight
// address: 0x1002c661
// body: available
// range: 0x1002c661-0x1002c77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c6c9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::CalcMaxButtonHeight(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::CalcMaxButtonHeight(CMFCToolBar *this)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  CClientDC local_4c [20];
  undefined4 local_38;
  undefined1 local_30 [16];
  CFont *local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x1002c66d;
  uVar3 = (**(code **)(*(int *)this + 400))();
  local_1c = (uint)((uVar3 & 0xa000) != 0);
  *(undefined4 *)(this + 0xb18) = 0;
  if ((*(int *)(this + 0xb14) == 0) || (local_1c == 0)) {
    iVar7 = 0;
  }
  else {
    local_14 = 0;
    CClientDC::CClientDC(local_4c,(CWnd *)this);
    local_8 = 0;
    local_20 = CBasePane::SelectDefaultFont((CBasePane *)this,(CDC *)local_4c);
    if (local_20 == (CFont *)0x0) {
LAB_1002c6c9:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    puVar2 = *(undefined4 **)(this + 0xbcc);
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) goto LAB_1002c6c9;
      local_18 = (undefined4 *)*puVar2;
      piVar1 = (int *)puVar2[2];
      if (piVar1 == (int *)0x0) goto LAB_1002c6c9;
      puVar2 = local_18;
      if (piVar1[6] != 0) {
        if (*(int *)(piVar1[0xb] + -0xc) == 0) {
          (**(code **)(*(int *)this + 0x3a0))(piVar1);
        }
        iVar7 = *piVar1;
        uVar3 = local_1c;
        uVar4 = GetButtonSize(this);
        puVar5 = (undefined4 *)(**(code **)(iVar7 + 0x1c))(local_30,local_4c,uVar4,uVar3);
        local_38 = *puVar5;
        puVar2 = local_18;
        if (local_14 <= (int)puVar5[1]) {
          local_14 = puVar5[1];
        }
      }
    }
    iVar6 = GetButtonSize(this);
    iVar7 = local_14;
    *(uint *)(this + 0xb18) = (uint)(*(int *)(iVar6 + 4) < local_14);
    CDC::SelectObject((CDC *)local_4c,(CPen *)local_20);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_4c);
  }
  return iVar7;
}

