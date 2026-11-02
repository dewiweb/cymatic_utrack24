// rea decompile_all
// name: FUN_004ee676
// address: 0x4ee676
// body: available
// range: 0x4ee676-0x4ee86a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee676(void)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int iStack_80;
  undefined1 auStack_78 [4];
  void *local_74;
  void *local_38;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de3d7;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004ef3a4();
  if (in_ECX[0x1f] == 0) {
    FUN_004c2047();
    FUN_004a5633();
    local_c = 0;
    FUN_004c2047();
    (**(code **)(*in_ECX + 0xb8))();
    FUN_004f640a();
    FUN_004a57cc();
    FUN_0047604f();
    FUN_004ef475(auStack_78);
    FUN_0047627a();
    FUN_0047cda7();
    FUN_0047d1f8();
    local_c = 0xffffffff;
    _free(local_74);
  }
  FUN_004ee990();
  FUN_0047ccb1();
  FUN_0047cd42();
  piVar2 = in_ECX + 0x3c;
  iStack_80 = 3;
  do {
    if (*piVar2 != 0) {
      if ((char)in_ECX[0x3b] == '\0') {
        FUN_00440367();
      }
      else {
        FUN_00439b5a();
      }
    }
    piVar2 = piVar2 + 1;
    iStack_80 = iStack_80 + -1;
  } while (iStack_80 != 0);
  iVar1 = thunk_FUN_004c1d58();
  FUN_00439b5a(1);
  (**(code **)(*(int *)(iVar1 + 0x34) + 4))();
  ExceptionList = local_38;
  return;
}

