// rea decompile_all
// name: FUN_0043aee0
// address: 0x43aee0
// body: available
// range: 0x43aee0-0x43aff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043aee0(void)

{
  undefined4 *_Dst;
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fe650;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::OggWriter::vftable;
  if (*(char *)(in_ECX + 10) == '\0') {
    FUN_005e2a80(uVar2);
    in_ECX[7] = 0;
  }
  else {
    FUN_0043b180(0);
    _Dst = in_ECX + 0xc;
    if (_Dst != (undefined4 *)0x0) {
      if ((void *)*_Dst != (void *)0x0) {
        FID_conflict__free((void *)*_Dst);
      }
      if ((void *)in_ECX[0x10] != (void *)0x0) {
        FID_conflict__free((void *)in_ECX[0x10]);
      }
      if ((void *)in_ECX[0x11] != (void *)0x0) {
        FID_conflict__free((void *)in_ECX[0x11]);
      }
      _memset(_Dst,0,0x168);
    }
    FUN_005e9260();
    FUN_005e8a50();
    FUN_005e2cf0();
    FUN_005e2a80();
    (**(code **)(*(int *)in_ECX[7] + 4))();
  }
  *in_ECX = juce::AudioFormatWriter::vftable;
  if ((undefined4 *)in_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[7])(1);
  }
  _Memory = (int *)(in_ECX[8] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

