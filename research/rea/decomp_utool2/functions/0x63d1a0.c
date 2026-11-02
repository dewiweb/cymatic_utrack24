// rea decompile_all
// name: FUN_0063d1a0
// address: 0x63d1a0
// body: available
// range: 0x63d1a0-0x63d2dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d1a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071f756;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::InterprocessConnection::vftable;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)(in_ECX[0xd] + 0x3c) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 2));
  if (in_ECX[8] != 0) {
    FUN_00623b80(uVar4);
  }
  if (in_ECX[9] != 0) {
    FUN_00611f10();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 2));
  FUN_006322a0(4000);
  FUN_0063d0b0();
  FUN_0063cd60();
  if (in_ECX[1] != 0) {
    *(undefined4 *)(in_ECX[1] + 8) = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0xd] = 0;
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)in_ECX[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xd])(1);
  }
  iVar2 = in_ECX[9];
  if (iVar2 != 0) {
    FUN_00624040();
    FUN_004bfe14(iVar2,0x28);
  }
  piVar3 = (int *)in_ECX[8];
  if (piVar3 != (int *)0x0) {
    FUN_00623b80();
    DeleteCriticalSection((LPCRITICAL_SECTION)((int)piVar3 + 0xe));
    _Memory = (int *)(*piVar3 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    FUN_004bfe14(piVar3,0x28);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 2));
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar1 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

