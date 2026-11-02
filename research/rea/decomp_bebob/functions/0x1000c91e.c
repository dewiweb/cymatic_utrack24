// rea decompile_all
// name: Format
// address: 0x1000c91e
// body: available
// range: 0x1000c91e-0x1000ca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Multiple Matches With Same Base Name
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall ATL::COleDateTime::Format(unsigned long,unsigned long)const 
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall ATL::COleDateTime::Format(unsigned long,unsigned long)const 
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall Format(undefined8 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  HMODULE pHVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  short *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1000c92a;
  local_14[0] = (short *)0x0;
  if (*(int *)(param_1 + 1) == 2) {
    FUN_10006ce0(param_2,(short *)&PTR_1011d390);
  }
  else if (*(int *)(param_1 + 1) == 1) {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&param_3,(int *)ppuVar1);
    local_8 = 0;
    pHVar2 = (HMODULE)FUN_1000ac62();
    if ((pHVar2 == (HMODULE)0x0) || (iVar3 = FUN_10006200(&param_3,pHVar2,0xd800), iVar3 == 0)) {
      FUN_10006ce0(param_2,L"Invalid DateTime");
      FUN_10001030((undefined4 *)(param_3 + -0x10));
    }
    else {
      piVar5 = (int *)(param_3 + -0x10);
      piVar4 = FUN_10005e30(piVar5);
      *param_2 = piVar4 + 4;
      FUN_10001030(piVar5);
    }
  }
  else {
    local_14[0] = (short *)0x0;
    local_8 = 1;
    iVar3 = Ordinal_114(*param_1,param_4,param_3,local_14);
    if (iVar3 < 0) {
      ppuVar1 = FUN_1000ad47();
      FUN_10005e00(&param_3,(int *)ppuVar1);
      local_8 = CONCAT31(local_8._1_3_,2);
      pHVar2 = (HMODULE)FUN_1000ac62();
      if ((pHVar2 == (HMODULE)0x0) || (iVar3 = FUN_10006200(&param_3,pHVar2,0xd800), iVar3 == 0)) {
        FUN_10006ce0(param_2,L"Invalid DateTime");
        FUN_10001030((undefined4 *)(param_3 + -0x10));
        Ordinal_6(local_14[0]);
      }
      else {
        piVar5 = (int *)(param_3 + -0x10);
        piVar4 = FUN_10005e30(piVar5);
        *param_2 = piVar4 + 4;
        FUN_10001030(piVar5);
        Ordinal_6(local_14[0]);
      }
    }
    else {
      FUN_10006ce0(&param_4,local_14[0]);
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar4 = FUN_10005e30((int *)(param_4 + -0x10));
      *param_2 = piVar4 + 4;
      FUN_10001030((undefined4 *)(param_4 + -0x10));
      Ordinal_6(local_14[0]);
    }
  }
  return param_2;
}

