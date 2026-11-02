// rea decompile_all
// name: FUN_004c5a2c
// address: 0x4c5a2c
// body: available
// range: 0x4c5a2c-0x4c5a94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5a2c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar3 = 0;
  iVar1 = FUN_004c58da();
  if (0 < iVar1) {
    do {
      iVar1 = FUN_004c58f8(iVar3);
      if (iVar1 == 0) {
        return;
      }
      piVar2 = (int *)FUN_004c0453();
      if ((piVar2 != (int *)0x0) && (piVar2 != piVar4)) {
        if (piVar4 == (int *)0x0) {
          (**(code **)(*piVar2 + 0x58))(param_2);
          piVar4 = piVar2;
          if ((char)param_2 != '\0') {
            (**(code **)(*piVar2 + 100))();
          }
        }
        else {
          (**(code **)(*piVar2 + 0x5c))(piVar4);
          piVar4 = piVar2;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_004c58da();
    } while (iVar3 < iVar1);
  }
  return;
}

