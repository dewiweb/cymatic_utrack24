// rea decompile_all
// name: FUN_004c2212
// address: 0x4c2212
// body: available
// range: 0x4c2212-0x4c2292 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2212(undefined4 param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int in_EAX;
  undefined4 *puVar5;
  
  if (*(int *)(in_EAX + 0x44) == 0) {
    puVar5 = (undefined4 *)FUN_005af82d(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    puVar2 = *(undefined4 **)(in_EAX + 0x44);
    if ((puVar2 != puVar5) &&
       (*(undefined4 **)(in_EAX + 0x44) = puVar5, puVar2 != (undefined4 *)0x0)) {
      _free((void *)*puVar2);
      FUN_005af7b6(puVar2);
    }
  }
  iVar3 = *(int *)(in_EAX + 0x44);
  cVar4 = FUN_004f6261(param_1);
  if (cVar4 == '\0') {
    if (param_2 == '\0') {
      FUN_004f6283(&param_1);
    }
    else {
      FUN_004f62c2();
      piVar1 = (int *)(iVar3 + 0xc);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

