// rea decompile_all
// name: FUN_006adb80
// address: 0x6adb80
// body: available
// range: 0x6adb80-0x6adc9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006adb80(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *_Memory;
  int *in_ECX;
  uint extraout_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007236c7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x2a] != param_1) {
    uVar6 = 0xffffffff;
    if (param_1 < (uint)in_ECX[0x26]) {
      uVar6 = param_1;
    }
    uVar7 = 0;
    in_ECX[0x2a] = uVar6;
    uVar5 = param_1;
    if (0 < in_ECX[0x26]) {
      do {
        FUN_006e5380(uVar7 == uVar6,0);
        uVar7 = uVar7 + 1;
        uVar5 = extraout_ECX;
      } while ((int)uVar7 < in_ECX[0x26]);
    }
    if (*(code **)(*in_ECX + 0x84) == FUN_006ada90) {
      FUN_006ad390(uVar5);
    }
    else {
      (**(code **)(*in_ECX + 0x84))(uVar2);
    }
    if (0 < in_ECX[0x22]) {
      LOCK();
      iVar3 = *(int *)(in_ECX[0x1e] + 0xc);
      if (iVar3 == 0) {
        *(int *)(in_ECX[0x1e] + 0xc) = 1;
        iVar3 = 0;
      }
      UNLOCK();
      if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
        LOCK();
        *(undefined4 *)(in_ECX[0x1e] + 0xc) = 0;
        UNLOCK();
      }
    }
    uVar4 = FUN_006adca0(&param_1);
    local_8 = 0;
    (**(code **)(*in_ECX + 0xb0))(uVar6,uVar4);
    _Memory = (int *)(param_1 - 8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar3 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

