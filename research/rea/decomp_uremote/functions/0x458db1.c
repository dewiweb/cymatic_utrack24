// rea decompile_all
// name: FUN_00458db1
// address: 0x458db1
// body: available
// range: 0x458db1-0x458e72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458db1(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = FUN_0045f6ee();
  if (cVar1 != '\0') {
    cVar1 = FUN_0045f710();
    if (cVar1 == '\0') {
      if (in_ECX[0x104] == 3) {
        iVar2 = FUN_005b3fb0();
        iVar3 = FUN_005b3fb0();
        if (iVar3 < iVar2) {
          iVar3 = (iVar3 + iVar2) / 2;
          iVar2 = iVar3;
        }
        if (*(int *)(param_1 + 8) < iVar2) {
          in_ECX[0xfe] = 2;
        }
        else if (iVar3 < *(int *)(param_1 + 8)) {
          in_ECX[0xfe] = 3;
        }
      }
      else {
        in_ECX[0xfe] = 1;
      }
      in_ECX[0x34] = (int)(float)in_ECX[0x2d];
      FUN_00457ac0();
      (**(code **)(*in_ECX + 0x14))(param_1);
    }
  }
  return;
}

