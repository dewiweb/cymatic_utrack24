// rea decompile_all
// name: FUN_0063df60
// address: 0x63df60
// body: available
// range: 0x63df60-0x63e0ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063df60(void)

{
  int *_Memory;
  char cVar1;
  BOOL BVar2;
  FILE *pFVar3;
  int iVar4;
  undefined4 uVar5;
  FILE *in_ECX;
  FILE *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f7b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  cVar1 = (**(code **)(in_ECX->_ptr + 0xc))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if ((cVar1 == '\0') && (cVar1 = FUN_0063e160(), cVar1 != '\0')) {
    ExceptionList = local_10;
    return 0;
  }
  BVar2 = AttachConsole(0xffffffff);
  if (BVar2 != 0) {
    pFVar3 = (FILE *)___acrt_iob_func(1);
    iVar4 = __fileno(pFVar3);
    if (iVar4 < 0) {
      pFVar3 = (FILE *)___acrt_iob_func(1);
      _freopen_s(&local_14,"CONOUT$","w",pFVar3);
    }
    pFVar3 = (FILE *)___acrt_iob_func(2);
    iVar4 = __fileno(pFVar3);
    if (iVar4 < 0) {
      pFVar3 = (FILE *)___acrt_iob_func(2);
      _freopen_s(&local_14,"CONOUT$","w",pFVar3);
    }
    pFVar3 = (FILE *)___acrt_iob_func(0);
    iVar4 = __fileno(pFVar3);
    if (iVar4 < 0) {
      pFVar3 = (FILE *)___acrt_iob_func(0);
      _freopen_s(&local_14,"CONIN$","r",pFVar3);
    }
  }
  uVar5 = FUN_0063e0f0();
  local_8 = 0;
  (**(code **)(in_ECX->_ptr + 0x10))(uVar5);
  local_8 = 0xffffffff;
  _Memory = &local_14[-1]._bufsiz;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *(undefined1 *)&in_ECX->_base = 0;
  if (DAT_00c8a658 == 0) {
    operator_new(0x28);
    DAT_00c8a658 = FUN_0063dab0();
    FUN_0063c010();
  }
  if (*(char *)(DAT_00c8a658 + 4) != '\0') {
    ExceptionList = local_10;
    return 0;
  }
  if (in_ECX->_flag != 0) {
    FUN_0063d710(in_ECX->_flag);
  }
  ExceptionList = local_10;
  return 1;
}

