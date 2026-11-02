// rea decompile_all
// name: FUN_004fb80a
// address: 0x4fb80a
// body: available
// range: 0x4fb80a-0x4fb8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb80a(int *param_1)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  int unaff_EBX;
  
  if (param_1[2] == unaff_EBX) {
    cVar2 = FUN_004f5c66();
    if (cVar2 == '\0') {
      return;
    }
    param_1[3] = *in_ECX;
    param_1[4] = in_ECX[1];
    param_1[5] = in_ECX[2];
    param_1[6] = in_ECX[3];
  }
  else {
    FUN_004fb8c8();
    param_1[2] = unaff_EBX;
    FUN_004fcd60();
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x8c))(*(undefined4 *)(unaff_EBX + 0x10),2,0x1402,0,8,0);
    (**(code **)(iVar1 + 0x8c))(*(undefined4 *)(unaff_EBX + 0x14),4,0x1401,1,8,4);
    (**(code **)(iVar1 + 0x90))(*(undefined4 *)(unaff_EBX + 0x10));
    (**(code **)(iVar1 + 0x90))(*(undefined4 *)(unaff_EBX + 0x14));
    param_1[3] = *in_ECX;
    param_1[4] = in_ECX[1];
    param_1[5] = in_ECX[2];
    param_1[6] = in_ECX[3];
  }
  FUN_0043bc2d();
  FUN_004fb111(unaff_EBX);
  return;
}

