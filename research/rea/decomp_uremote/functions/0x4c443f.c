// rea decompile_all
// name: FUN_004c443f
// address: 0x4c443f
// body: available
// range: 0x4c443f-0x4c45e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c443f(undefined4 param_1)

{
  char cVar1;
  int unaff_EBX;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_004c086e(param_1);
  FUN_004f5b45();
  FUN_0043bc2d();
  FUN_004f88f3();
  cVar1 = FUN_00450d54();
  if (cVar1 == '\0') {
    FUN_004c0848();
    FUN_0043bc2d();
    FUN_004f887d();
    *(float *)(unaff_EBX + 0x18) =
         (*(float *)(unaff_EBX + 0x10) - local_28) + *(float *)(unaff_EBX + 0x18);
    *(float *)(unaff_EBX + 0x1c) =
         *(float *)(unaff_EBX + 0x1c) + (*(float *)(unaff_EBX + 0x14) - local_24);
    FUN_004c36b9();
  }
  else if (*(char *)(unaff_EBX + 0x25) != '\0') {
    cVar1 = FUN_004a8763();
    if (cVar1 == '\0') {
      cVar1 = FUN_00450d54();
      if (cVar1 != '\0') {
        FUN_004f4df5();
        *(undefined4 *)(unaff_EBX + 0x18) = 0;
        *(undefined4 *)(unaff_EBX + 0x1c) = 0;
      }
    }
  }
  return;
}

