// rea decompile_all
// name: FUN_004fdc2b
// address: 0x4fdc2b
// body: available
// range: 0x4fdc2b-0x4fdcbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fdc2b(void)

{
  char cVar1;
  uint in_ECX;
  undefined4 uVar2;
  undefined1 local_10 [4];
  char local_c;
  
  FUN_00473e7a(local_10,-(uint)(in_ECX != 4) & in_ECX);
  if (local_c == '\0') {
    FUN_00473fa5();
  }
  else {
    FUN_00473fa5();
    FUN_004fdcbd();
    *(undefined1 *)(in_ECX + 0xa5) = 1;
LAB_004fdc9b:
    if (*(char *)(in_ECX + 0x38) == '\0') {
      cVar1 = FUN_004fd7e8();
      if (cVar1 != '\0') goto LAB_004fdc86;
      uVar2 = 5;
      goto LAB_004fdc94;
    }
    FUN_004fe22e();
    FUN_004fdd56();
    FUN_004fe27e();
  }
  return;
LAB_004fdc86:
  if (*(char *)(*(int *)(in_ECX + 0x40) + 0x10e) == '\0') {
    uVar2 = 0xffffffff;
LAB_004fdc94:
    FUN_00467a43(uVar2);
  }
  goto LAB_004fdc9b;
}

