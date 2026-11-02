// rea decompile_all
// name: FUN_005a0bc0
// address: 0x5a0bc0
// body: available
// range: 0x5a0bc0-0x5a0d24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0bc0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d736d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00567da0();
  if (cVar1 != '\0') {
    FUN_00512300();
    local_8 = 0;
    uVar3 = *(undefined4 *)(in_ECX + -0x140);
    FUN_00559900(local_80,0);
    uVar2 = FUN_005a1840(local_70);
    uVar3 = (**(code **)(*(int *)(in_ECX + -0x144 + *(int *)(*(int *)(in_ECX + -0x144) + 0xc)) +
                        0x10))(local_90,local_80,uVar3,uVar2);
    cVar1 = FUN_0056bc70(local_68,uVar3);
    if (cVar1 != '\0') {
      FUN_00529f40(local_68,0);
    }
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  FUN_0054f6f0();
  ExceptionList = local_10;
  return;
}

