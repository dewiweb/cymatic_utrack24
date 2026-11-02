// rea decompile_all
// name: CMFCRibbonTab::SetACCData
// address: 0x100ace09
// body: available
// range: 0x100ace09-0x100aced8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonTab::SetACCData(class CWnd *,class CAccessibilityData
   &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonTab::SetACCData(CMFCRibbonTab *this,CWnd *param_1,CAccessibilityData *param_2)

{
  uint uVar1;
  CAccessibilityData *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_2;
  uStack_4 = 0;
  local_8 = 0x100ace15;
  uVar1 = *(uint *)(*(int *)(*(int *)(this + 0x2c) + 0x3c0) + 0x31c);
  iVar2 = FUN_100b8df7(this,param_1,param_2);
  piVar7 = (int *)auStack_20;
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(this_00 + 0x1c) = 0x300000;
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*(int *)(this + 0x2c) + 8) != 0) {
        *(undefined4 *)(this_00 + 0x1c) = 0x300002;
      }
      piVar6 = (int *)&stack0xffffffdc;
    }
    else {
      *(undefined4 *)(this_00 + 0x1c) = 0x40300000;
      puVar5 = &stack0xffffffdc;
      iVar3 = (**(code **)(*(int *)this + 0x40))();
      if (iVar3 == 0) {
        piVar6 = (int *)(puVar5 + -4);
        *(wchar_t **)(puVar5 + -4) = L"Open";
      }
      else {
        *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 10;
        piVar6 = (int *)(puVar5 + -4);
        *(wchar_t **)(puVar5 + -4) = L"Close";
      }
    }
    piVar6[-1] = 0x100ace8c;
    FUN_100022b0(this_00 + 0x14,(short *)*piVar6);
    *piVar6 = *(int *)(this + 0x2c) + 0x30;
    piVar6[-1] = 0x100ace9a;
    FUN_10007c90(this_00,(undefined4 *)*piVar6);
    *piVar6 = (int)(this + 8);
    piVar6[-1] = (int)L"Alt, ";
    piVar6[-2] = (int)&param_2;
    *(undefined4 *)(this_00 + 0x18) = 0x25;
    piVar6[-3] = 0x100aceb3;
    uVar4 = ATL::operator+((char *)piVar6[-2],
                           (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *)
                           piVar6[-1]);
    local_8 = 0;
    *piVar6 = uVar4;
    piVar6[-1] = 0x100acec3;
    FUN_10007c90(this_00 + 0xc,(undefined4 *)*piVar6);
    piVar7 = piVar6 + 1;
    *piVar6 = 0x100acece;
    FUN_10001030((undefined4 *)(param_2 + -0x10));
    iVar3 = 1;
  }
  *(undefined4 *)((int)piVar7 + -4) = 0x100aced6;
  return iVar3;
}

