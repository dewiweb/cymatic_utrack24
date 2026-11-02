// rea decompile_all
// name: FUN_004c35c7
// address: 0x4c35c7
// body: available
// range: 0x4c35c7-0x4c3659 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c35c7(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = 0x4c35da;
  piVar2 = (int *)FUN_004c3525();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2c))(auStack_28,param_1,param_2);
    FUN_004f881a(&stack0xffffffe4);
    uVar3 = FUN_004a8e4a(unaff_ESI);
    uVar4 = FUN_004a8e4a(unaff_EBX);
    cVar1 = FUN_004c0e4c(uVar3,uVar4);
    if (cVar1 != '\0') {
      uVar3 = FUN_004c0f4a(uVar3,uVar4);
      return uVar3;
    }
  }
  return 0;
}

