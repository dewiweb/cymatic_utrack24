// rea decompile_all
// name: FUN_00437b00
// address: 0x437b00
// body: available
// range: 0x437b00-0x437b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00437b00(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  *(int *)(in_EAX + 0x204c) = in_EAX + 0x1048;
  iVar2 = 0;
  *(int *)(in_EAX + 0x18) = in_EAX + 0x1048;
  *(undefined4 *)(in_EAX + 0x1c) = 0x1000;
  while( true ) {
    if ((*(int *)(in_EAX + 0x10) == 0) && (iVar2 = FUN_00437a9f(), iVar2 != 0)) {
      return iVar2;
    }
    iVar1 = FUN_00437428();
    if (iVar1 == 1) {
      *(int *)(in_EAX + 0x2050) = *(int *)(in_EAX + 0x18);
      if (*(int *)(in_EAX + 0x18) == *(int *)(in_EAX + 0x204c)) {
        return 0x55;
      }
      return iVar2;
    }
    if (iVar1 != 0) break;
    if (*(int *)(in_EAX + 0x1c) == 0) {
      return iVar2;
    }
  }
  return 0x55;
}

