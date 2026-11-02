// rea decompile_all
// name: FUN_00458e73
// address: 0x458e73
// body: available
// range: 0x458e73-0x458f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458e73(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  
  cVar2 = FUN_0045f6ee();
  if ((cVar2 != '\0') && (cVar2 = FUN_0045f710(), cVar2 == '\0')) {
    iVar1 = *(int *)(in_ECX + 0x350);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (*(int *)(in_ECX + 0xd4) / 0xe10 + 1 < 2) {
          return;
        }
        FUN_004c6df1();
      }
      else if (iVar1 == 2) {
        FUN_004c6df1();
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        FUN_004c6df1();
      }
    }
    uVar3 = FUN_005b3fb0();
    FUN_00458a85(uVar3);
  }
  return;
}

