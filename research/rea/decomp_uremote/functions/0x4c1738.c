// rea decompile_all
// name: FUN_004c1738
// address: 0x4c1738
// body: available
// range: 0x4c1738-0x4c1826 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1738(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  undefined1 *puVar4;
  float fStack_5c;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  undefined1 *local_10;
  int local_c;
  
  local_c = 0;
  if ((*(byte *)(in_EAX + 0x68) & 2) != 0) {
    if (*(int **)(in_EAX + 0x40) != (int *)0x0) {
      iVar1 = **(int **)(in_EAX + 0x40);
      if (param_1 == '\0') {
        puStack_54 = &param_2;
        puStack_58 = (undefined1 *)0x4c176c;
        cVar2 = (**(code **)(iVar1 + 0xc))();
      }
      else {
        puStack_54 = (undefined4 *)0x4c1763;
        cVar2 = (**(code **)(iVar1 + 8))();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    if ((*(byte *)(in_EAX + 0x68) & 1) == 0) {
      if (*(int *)(in_EAX + 0xc) != 0) {
        FUN_004f865f();
        FUN_004c16cf();
      }
    }
    else {
      puStack_54 = (undefined4 *)0x4c1781;
      piVar3 = (int *)FUN_004c0453();
      if (piVar3 != (int *)0x0) {
        puStack_54 = (undefined4 *)local_20;
        puStack_58 = (undefined1 *)0x4c1796;
        (**(code **)(*piVar3 + 0x1c))();
        fStack_5c = (float)local_18 / (float)*(int *)(in_EAX + 0x18);
        local_c = *(int *)(in_EAX + 0x1c);
        local_10 = (undefined1 *)&fStack_5c;
        puVar4 = local_30;
        puStack_58 = (undefined1 *)((float)local_14 / (float)local_c);
        FUN_004f8751();
        puStack_58 = *(undefined1 **)(in_EAX + 0x24);
        if (puStack_58 != (undefined1 *)0x0) {
          fStack_5c = 6.98805e-39;
          puVar4 = (undefined1 *)FUN_004a97ee();
        }
        fStack_5c = 6.988061e-39;
        puStack_58 = puVar4;
        (**(code **)(*piVar3 + 0x70))();
      }
    }
  }
  return;
}

