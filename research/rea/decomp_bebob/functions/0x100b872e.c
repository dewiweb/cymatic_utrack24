// rea decompile_all
// name: OnDrawOnList
// address: 0x100b872e
// body: available
// range: 0x100b872e-0x100b8789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMFCRibbonSeparator::OnDrawOnList(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,int,class
   CRect,int,int)
    protected: virtual void __thiscall CMFCRibbonSeparator::OnDrawOnList(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,int,class
   CRect,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall OnDrawOnList(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStackY_30;
  
  uVar1 = *(undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = 0;
  puVar4 = &uStackY_30;
  uStackY_30 = 0x100b8757;
  InflateRect((LPRECT)&param_4,-3,0);
  param_4 = param_4 + param_3;
  iVar2 = *param_1;
  puVar4[-1] = 0x824;
  puVar4[-2] = &param_4;
  puVar4[-3] = *(undefined4 *)(param_2 + -0xc);
  puVar4[-4] = param_2;
  pcVar3 = *(code **)(iVar2 + 0x68);
  puVar5 = puVar4 + -5;
  puVar4[-5] = 0x100b8774;
  (*pcVar3)();
  *(undefined4 *)((int)this + 0x78) = uVar1;
  *(undefined4 *)((int)puVar5 + -4) = 0x100b8782;
  FUN_10001030((undefined4 *)(param_2 + -0x10));
  *(undefined4 *)((int)puVar5 + -4) = 0x100b8787;
  return;
}

