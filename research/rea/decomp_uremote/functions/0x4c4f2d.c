// rea decompile_all
// name: FUN_004c4f2d
// address: 0x4c4f2d
// body: available
// range: 0x4c4f2d-0x4c4f92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c4f2d(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  piVar1 = (int *)(in_EAX + 0x6c);
  if (*piVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*piVar1 + 8);
  }
  if (iVar3 == 0) {
    if (*(int *)(in_EAX + 0x68) == 0) {
      iVar3 = FUN_005af82d(0x98);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_004d332e();
      }
      puVar2 = *(undefined4 **)(in_EAX + 0x68);
      if ((puVar2 != puVar4) &&
         (*(undefined4 **)(in_EAX + 0x68) = puVar4, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    FUN_004f631d(piVar1);
  }
  if (*piVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*piVar1 + 8);
  }
  return uVar5;
}

