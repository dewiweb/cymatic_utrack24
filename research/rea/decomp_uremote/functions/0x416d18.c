// rea decompile_all
// name: FUN_00416d18
// address: 0x416d18
// body: available
// range: 0x416d18-0x416da4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00416d18(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  undefined1 *puVar3;
  undefined4 *unaff_EBX;
  int local_8;
  
  iVar2 = *(int *)(in_EAX + 0x1c);
  if (*(char *)(in_EAX + 0x20) == '\0') {
    local_8 = 8;
  }
  else {
    if (*(uint *)(iVar2 + 4) < (uint)(*(short *)(iVar2 + 0x3a) + 3 + (int)*(short *)(iVar2 + 0x16)))
    {
      local_8 = FUN_0040d706(3,0);
      if (local_8 != 0) {
        return local_8;
      }
    }
    else {
      local_8 = 0;
    }
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x3c) + *(short *)(iVar2 + 0x3a) * 8);
    puVar3 = (undefined1 *)(*(int *)(iVar2 + 0x40) + (int)*(short *)(iVar2 + 0x3a));
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = *param_2;
    puVar1[3] = param_2[1];
    puVar1[4] = *unaff_EBX;
    puVar1[5] = unaff_EBX[1];
    *puVar3 = 2;
    puVar3[1] = 2;
    puVar3[2] = 1;
    *(short *)(iVar2 + 0x3a) = *(short *)(iVar2 + 0x3a) + 3;
  }
  return local_8;
}

