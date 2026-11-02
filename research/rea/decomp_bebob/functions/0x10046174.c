// rea decompile_all
// name: CVSListBoxBase::SetStandardButtons
// address: 0x10046174
// body: available
// range: 0x10046174-0x10046311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100461cd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CVSListBoxBase::SetStandardButtons(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CVSListBoxBase::SetStandardButtons(CVSListBoxBase *this,uint param_1)

{
  int iVar1;
  undefined **ppuVar2;
  HMODULE pHVar3;
  wchar_t *pwVar4;
  ushort uVar5;
  uchar uVar6;
  uint uVar7;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10046180;
  if ((this == (CVSListBoxBase *)0x0) || (*(int *)(this + 0x20) == 0)) {
    iVar1 = 0;
  }
  else {
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar2);
    local_8 = 0;
    if ((param_1 & 1) != 0) {
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 == (HMODULE)0x0) goto LAB_100461cd;
      iVar1 = FUN_10006200(local_14,pHVar3,0x3e91);
      if (iVar1 == 0) goto LAB_100461cd;
      uVar7 = 0xfffffff5;
      uVar6 = '\0';
      uVar5 = 0x2d;
      pwVar4 = local_14[0];
      iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      iVar1 = AddButton(this,(-(uint)(iVar1 != 0) & 0x7c) + 0x4221,pwVar4,uVar5,uVar6,uVar7);
      if (iVar1 == 0) goto LAB_100461cd;
    }
    if ((param_1 & 2) != 0) {
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 == (HMODULE)0x0) goto LAB_100461cd;
      iVar1 = FUN_10006200(local_14,pHVar3,0x3e94);
      if (iVar1 == 0) goto LAB_100461cd;
      uVar7 = 0xfffffff4;
      uVar6 = '\0';
      uVar5 = 0x2e;
      pwVar4 = local_14[0];
      iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      iVar1 = AddButton(this,(-(uint)(iVar1 != 0) & 0x7c) + 0x4222,pwVar4,uVar5,uVar6,uVar7);
      if (iVar1 == 0) goto LAB_100461cd;
    }
    if ((param_1 & 4) != 0) {
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 == (HMODULE)0x0) goto LAB_100461cd;
      iVar1 = FUN_10006200(local_14,pHVar3,0x3e95);
      if (iVar1 == 0) goto LAB_100461cd;
      uVar7 = 0xfffffff3;
      uVar6 = '\x10';
      uVar5 = 0x26;
      pwVar4 = local_14[0];
      iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      iVar1 = AddButton(this,(-(uint)(iVar1 != 0) & 0x7c) + 0x4223,pwVar4,uVar5,uVar6,uVar7);
      if (iVar1 == 0) goto LAB_100461cd;
    }
    if ((param_1 & 8) != 0) {
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 == (HMODULE)0x0) {
LAB_100461cd:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar1 = FUN_10006200(local_14,pHVar3,0x3e96);
      if (iVar1 == 0) goto LAB_100461cd;
      uVar7 = 0xfffffff2;
      uVar6 = '\x10';
      uVar5 = 0x28;
      pwVar4 = local_14[0];
      iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      iVar1 = AddButton(this,(-(uint)(iVar1 != 0) & 0x7d) + 0x4224,pwVar4,uVar5,uVar6,uVar7);
      if (iVar1 == 0) goto LAB_100461cd;
    }
    *(uint *)(this + 200) = *(uint *)(this + 200) | param_1;
    FUN_10001030((undefined4 *)(local_14[0] + -8));
    iVar1 = 1;
  }
  return iVar1;
}

