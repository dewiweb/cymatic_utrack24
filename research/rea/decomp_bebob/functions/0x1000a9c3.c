// rea decompile_all
// name: AFX_MODULE_STATE::AFX_MODULE_STATE
// address: 0x1000a9c3
// body: available
// range: 0x1000a9c3-0x1000aa3b inclusive
// range: 0x1000aa5d-0x1000ab02 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(int)
   
   Library: Visual Studio 2010 Release */

AFX_MODULE_STATE * __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this,int param_1)

{
  undefined **ppuVar1;
  void *pvVar2;
  CComCtlWrapper *this_00;
  undefined4 uVar3;
  CCommDlgWrapper *this_01;
  CShellWrapper *this_02;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x34,(int *)ppuVar1);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x28) = 0x20;
  *(undefined4 *)(this + 0x20) = 0x14;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x14] = param_1._0_1_;
  FUN_10002140(this + 0x34,0x1000);
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x44) = 0x18;
  pvVar2 = FUN_1000858a(0xc);
  *(void **)(this + 0x78) = pvVar2;
  this_00 = CNoTrackObject::operator_new(0x188);
  if (this_00 == (CComCtlWrapper *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CComCtlWrapper::CComCtlWrapper(this_00);
  }
  **(undefined4 **)(this + 0x78) = uVar3;
  this_01 = CNoTrackObject::operator_new(100);
  if (this_01 == (CCommDlgWrapper *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CCommDlgWrapper::CCommDlgWrapper(this_01);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 4) = uVar3;
  this_02 = CNoTrackObject::operator_new(0x14);
  if (this_02 == (CShellWrapper *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CShellWrapper::CShellWrapper(this_02);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 8) = uVar3;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  return this;
}

