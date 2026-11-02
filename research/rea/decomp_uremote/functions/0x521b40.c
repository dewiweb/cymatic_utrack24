// rea decompile_all
// name: FUN_00521b40
// address: 0x521b40
// body: available
// range: 0x521b40-0x521bc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00521b40(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_9;
  
  local_9 = 0;
  iVar2 = FUN_00522b00();
  do {
    if (iVar2 == 0) {
      *(undefined1 *)(in_ECX + 0x10) = 0;
      return local_9;
    }
    cVar1 = FUN_005039c0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00503830(iVar2,param_1);
      if (cVar1 != '\0') goto LAB_00521b87;
    }
    else {
LAB_00521b87:
      *(undefined2 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      local_9 = 1;
    }
    iVar2 = FUN_00522b40(iVar2);
  } while( true );
}

