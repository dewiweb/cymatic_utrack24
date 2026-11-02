// rea decompile_all
// name: FUN_0052c510
// address: 0x52c510
// body: available
// range: 0x52c510-0x52c583 inclusive
// range: 0x52c586-0x52c5c1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052c510(void)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  int in_ECX;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 4);
  do {
    if (local_8 == 0) {
LAB_0052c591:
      uVar2 = *(undefined2 *)(in_ECX + 0x10);
      *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + 1;
      FUN_00544660(uVar2);
      return;
    }
    sVar1 = *(short *)(in_ECX + 0x10);
    sVar3 = FUN_00544700();
    if (sVar1 == sVar3) {
      *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + 1;
      if (*(short *)(in_ECX + 0x10) == 0) {
        *(undefined2 *)(in_ECX + 0x10) = 1;
      }
      goto LAB_0052c591;
    }
    if (local_8 == 0) {
      local_8 = *(int *)(in_ECX + 4);
    }
    else {
      local_8 = *(int *)(local_8 + 8);
    }
  } while( true );
}

