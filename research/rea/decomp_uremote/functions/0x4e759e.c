// rea decompile_all
// name: FUN_004e759e
// address: 0x4e759e
// body: available
// range: 0x4e759e-0x4e7634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e759e(uint param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  undefined4 unaff_ESI;
  
  cVar1 = *(char *)(in_EAX + 0x9c);
  if (cVar1 != '\0') {
    if (((param_1 >> 1 & 1) != 0) || (*(char *)(in_EAX + 0x9d) != '\0')) {
      FUN_004e753d();
      return;
    }
    if (((cVar1 != '\0') && ((param_1 & 1) != 0)) && (-1 < *(int *)(in_EAX + 0x98))) {
      FUN_004e748b(*(int *)(in_EAX + 0x98));
      return;
    }
  }
  if (((param_1 >> 5 & 1) != 0) && (cVar2 = FUN_004e766a(unaff_ESI), cVar2 != '\0')) {
    return;
  }
  if (((cVar1 == '\0') || (param_2 != '\0')) ||
     (uVar3 = FUN_004e766a(unaff_ESI), (char)uVar3 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = uVar3 & 0xffffff00;
  }
  FUN_004e7344(0,uVar3,1);
  return;
}

