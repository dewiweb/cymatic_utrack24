// rea decompile_all
// name: FUN_00567160
// address: 0x567160
// body: available
// range: 0x567160-0x5672e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567160(void)

{
  char cVar1;
  int *in_ECX;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  ushort local_8;
  
  local_8 = 0;
  while (local_8 < *(ushort *)(in_ECX + 0x16)) {
    cVar1 = FUN_005595e0(local_8);
    if (cVar1 == '\0') {
      local_8 = local_8 + 1;
    }
    else {
      FUN_00559900(local_18,local_8);
      cVar1 = FUN_00503fe0();
      if (cVar1 == '\0') {
        FUN_00528620(in_ECX,0,local_18);
        (**(code **)(*in_ECX + 0x14))(0,local_18);
        FUN_00560e50();
      }
      FUN_005592d0(local_8);
    }
  }
  local_8 = 0;
  while (local_8 < *(ushort *)(in_ECX + 0x1b)) {
    cVar1 = FUN_005595e0(local_8);
    if (cVar1 == '\0') {
      local_8 = local_8 + 1;
    }
    else {
      FUN_00559900(local_28,local_8);
      cVar1 = FUN_00503fe0();
      if (cVar1 == '\0') {
        FUN_00528620(in_ECX,1,local_28);
        (**(code **)(*in_ECX + 0x14))(1,local_28);
        FUN_00560e50();
      }
      FUN_005592d0(local_8);
    }
  }
  return;
}

