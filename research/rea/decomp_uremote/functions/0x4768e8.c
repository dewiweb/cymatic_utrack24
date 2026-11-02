// rea decompile_all
// name: FUN_004768e8
// address: 0x4768e8
// body: available
// range: 0x4768e8-0x476965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004768e8(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  cVar2 = FUN_004a4a0f(*in_EAX,in_EAX[1]);
  if ((((cVar2 != '\0') && (cVar2 = FUN_004a4a0f(in_EAX[2],in_EAX[3]), cVar2 != '\0')) &&
      (*(char *)(in_ECX + 0x10) == *(char *)(in_EAX + 4))) &&
     (iVar1 = *(int *)(in_ECX + 0x1c), iVar1 == in_EAX[7])) {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 1;
      }
      cVar2 = FUN_00476c24();
    } while (cVar2 != '\0');
  }
  return 0;
}

