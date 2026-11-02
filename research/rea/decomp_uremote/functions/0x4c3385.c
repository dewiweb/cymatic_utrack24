// rea decompile_all
// name: FUN_004c3385
// address: 0x4c3385
// body: available
// range: 0x4c3385-0x4c3418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c3385(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_EAX;
  undefined4 *puVar5;
  int *piVar6;
  
  if (*(int *)(in_EAX + 0x48) == 0) {
    puVar5 = (undefined4 *)FUN_005af82d(0xc);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
    }
    puVar2 = *(undefined4 **)(in_EAX + 0x48);
    if ((puVar2 != puVar5) &&
       (*(undefined4 **)(in_EAX + 0x48) = puVar5, puVar2 != (undefined4 *)0x0)) {
      _free((void *)*puVar2);
      FUN_005af7b6(puVar2);
    }
  }
  piVar3 = *(int **)(in_EAX + 0x48);
  piVar6 = (int *)*piVar3;
  piVar1 = piVar6 + piVar3[2];
  while( true ) {
    if (piVar6 == piVar1) {
      if (piVar3[1] < piVar3[2] + 1) {
        FUN_004f8197();
      }
      iVar4 = piVar3[2];
      piVar3[2] = iVar4 + 1;
      piVar1 = (int *)(*piVar3 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
      }
      return;
    }
    if (param_1 == *piVar6) break;
    piVar6 = piVar6 + 1;
  }
  return;
}

