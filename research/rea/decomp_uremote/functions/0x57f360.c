// rea decompile_all
// name: FUN_0057f360
// address: 0x57f360
// body: available
// range: 0x57f360-0x57f55d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0057f360(ushort *param_1,int param_2)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint in_ECX;
  ushort *local_14;
  ushort *local_8;
  
  puVar3 = param_1;
  if (param_2 - *(int *)param_1 < 8) goto LAB_0057f556;
  *(undefined1 *)(in_ECX + 4) = **(undefined1 **)param_1;
  *(int *)param_1 = *(int *)param_1 + 1;
  if (*(char *)(in_ECX + 4) != '\x01') {
    return in_ECX & 0xffffff00;
  }
  *(undefined1 *)(in_ECX + 5) = **(undefined1 **)param_1;
  *(int *)param_1 = *(int *)param_1 + 1;
  _memcpy((void *)(in_ECX + 6),*(void **)param_1,6);
  *(int *)param_1 = *(int *)param_1 + 6;
  puVar2 = (ushort *)(in_ECX + 0xc);
  puVar3 = puVar2;
  if (param_2 - *(int *)param_1 < 2) {
LAB_0057f48b:
    bVar1 = false;
  }
  else {
    *puVar2 = **(ushort **)param_1;
    *(int *)param_1 = *(int *)param_1 + 2;
    puVar3 = (ushort *)0x0;
    if (*puVar2 < 0x81) {
      puVar3 = (ushort *)(param_2 - *(int *)param_1);
      if ((int)puVar3 < (int)((uint)*puVar2 * 2)) goto LAB_0057f48b;
      local_8 = (ushort *)0x0;
      while (local_8 < (ushort *)(uint)*puVar2) {
        *(undefined2 *)(in_ECX + 0xe + (int)local_8 * 2) = **(undefined2 **)param_1;
        *(int *)param_1 = *(int *)param_1 + 2;
        puVar3 = (ushort *)((int)local_8 + 1);
        local_8 = puVar3;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (!bVar1) goto LAB_0057f556;
  puVar2 = (ushort *)(in_ECX + 0x10e);
  puVar3 = puVar2;
  if (param_2 - *(int *)param_1 < 2) {
LAB_0057f546:
    bVar1 = false;
  }
  else {
    *puVar2 = **(ushort **)param_1;
    *(int *)param_1 = *(int *)param_1 + 2;
    puVar3 = (ushort *)0x0;
    if (*puVar2 < 0x81) {
      puVar3 = (ushort *)(param_2 - *(int *)param_1);
      if ((int)puVar3 < (int)((uint)*puVar2 * 2)) goto LAB_0057f546;
      local_14 = (ushort *)0x0;
      while (local_14 < (ushort *)(uint)*puVar2) {
        *(undefined2 *)(in_ECX + 0x110 + (int)local_14 * 2) = **(undefined2 **)param_1;
        *(int *)param_1 = *(int *)param_1 + 2;
        puVar3 = (ushort *)((int)local_14 + 1);
        local_14 = puVar3;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
LAB_0057f556:
  return (uint)puVar3 & 0xffffff00;
}

