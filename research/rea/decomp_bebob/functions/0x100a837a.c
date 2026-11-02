// rea decompile_all
// name: CMFCColorBar::GetColorGridSize
// address: 0x100a837a
// body: available
// range: 0x100a837a-0x100a841e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CSize __thiscall CMFCColorBar::GetColorGridSize(int)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorBar::GetColorGridSize(CMFCColorBar *this,int param_1)

{
  int iVar1;
  int iVar2;
  CMFCColorBar *this_00;
  CMFCColorBar *extraout_ECX;
  CMFCColorBar *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  ulonglong uVar3;
  int in_stack_00000008;
  
  iVar1 = *(int *)(this + 0xd98);
  this_00 = this;
  if (*(int *)(this + 0xd80) == 0) {
LAB_100a83e4:
    iVar2 = *(int *)(this + 0xd58);
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x16c))();
    this_00 = extraout_ECX;
    if (((iVar2 == 0) && (in_stack_00000008 == 0)) &&
       (this_00 = *(CMFCColorBar **)(this + 0xd5c), 0 < (int)this_00)) {
      iVar2 = iVar1 / (int)this_00;
      if (iVar1 % (int)this_00 != 0) {
        iVar2 = iVar2 + 1;
      }
      goto LAB_100a8411;
    }
    if (((*(int *)(this + 0xd80) == 0) ||
        (iVar2 = (**(code **)(*(int *)this + 0x16c))(), this_00 = extraout_ECX_00, iVar2 != 0)) ||
       (iVar2 = *(int *)(this + 0xd60), iVar2 < 1)) goto LAB_100a83e4;
  }
  if (iVar2 < 1) {
    FUN_100fd174(this_00,SUB84((double)iVar1,0),(uint)((ulonglong)(double)iVar1 >> 0x20));
    uVar3 = FUN_100f8660(unaff_ESI,extraout_EDX);
    iVar2 = (int)uVar3 + 1;
  }
  this_00 = (CMFCColorBar *)(iVar1 / iVar2);
  if (iVar1 % iVar2 != 0) {
    this_00 = this_00 + 1;
  }
LAB_100a8411:
  *(int *)param_1 = iVar2;
  *(CMFCColorBar **)(param_1 + 4) = this_00;
  return;
}

