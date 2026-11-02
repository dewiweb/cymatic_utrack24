// rea decompile_all
// name: FUN_004c7be3
// address: 0x4c7be3
// body: available
// range: 0x4c7be3-0x4c7c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c7be3(char param_1,char param_2)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_004c3153();
  if ((cVar1 != '\0') && ((*(byte *)(in_EAX + 0x68) & 2) != 0)) {
    cVar1 = FUN_004c14d9();
    if (cVar1 == '\0') {
      if (((param_2 == '\0') ||
          ((param_1 == '\0' &&
           ((*(char *)(in_EAX + 0xd9) == '\0' || (*(int *)(in_EAX + 0xc0) != 2)))))) &&
         (*(char *)(in_EAX + 0xd8) == '\0')) {
        if (param_1 != '\0') {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 2;
      }
    }
  }
  FUN_004c7c48();
  return uVar2;
}

