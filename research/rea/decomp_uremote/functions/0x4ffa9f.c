// rea decompile_all
// name: FUN_004ffa9f
// address: 0x4ffa9f
// body: available
// range: 0x4ffa9f-0x4ffb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ffa9f(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 local_48 [52];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dbd73;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*in_ECX != 0) {
    if ((char)in_ECX[9] == '\0') {
      if (*(char *)((int)in_ECX + 0x25) != '\0') {
        FUN_0047888f(DAT_00955fd4 ^ (uint)&stack0xffffffb0);
        local_c = extraout_EDX;
        FUN_004a91a0();
        FUN_004ffc7e(extraout_ECX,&DAT_0095d798);
        FUN_004f7994();
        ExceptionList = local_14;
        return;
      }
      uVar1 = FUN_004a9692(in_ECX + 1);
    }
    else {
      uVar1 = FUN_00475164(local_48,param_1);
    }
    FUN_00500aa9(in_ECX,uVar1);
  }
  ExceptionList = local_14;
  return;
}

