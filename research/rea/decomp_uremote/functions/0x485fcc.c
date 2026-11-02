// rea decompile_all
// name: FUN_00485fcc
// address: 0x485fcc
// body: available
// range: 0x485fcc-0x486104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00485fcc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int local_c;
  undefined4 *local_8;
  
  piVar3 = param_1;
  iVar1 = param_1[0x66];
  if ((((param_1[0x5b] != 0) || (param_1[0x5c] != 0x3f)) || (param_1[0x5d] != 0)) ||
     (param_1[0x5e] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  local_c = 0;
  if (0 < param_1[0x49]) {
    local_8 = (undefined4 *)(iVar1 + 0x14);
    param_1 = param_1 + 0x4a;
    do {
      iVar2 = *(int *)(*param_1 + 0x18);
      FUN_00486105(1,iVar1 + 0x28 + *(int *)(*param_1 + 0x14) * 4);
      FUN_00486105(0,iVar1 + 0x38 + iVar2 * 4);
      *local_8 = 0;
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_c < piVar3[0x49]);
  }
  if (0 < piVar3[0x50]) {
    param_1 = piVar3 + 0x51;
    puVar4 = (undefined1 *)(iVar1 + 0x98);
    puVar5 = (undefined4 *)(iVar1 + 0x70);
    do {
      iVar2 = piVar3[*param_1 + 0x4a];
      puVar5[-10] = *(undefined4 *)(iVar1 + 0x28 + *(int *)(iVar2 + 0x14) * 4);
      *puVar5 = *(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar2 + 0x18) * 4);
      if (*(char *)(iVar2 + 0x30) == '\0') {
        puVar4[10] = 0;
        *puVar4 = 0;
      }
      else {
        *puVar4 = 1;
        puVar4[10] = 1 < *(int *)(iVar2 + 0x24);
      }
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while ((int)(puVar4 + (-0x98 - iVar1)) < piVar3[0x50]);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x24) = piVar3[0x3f];
  return;
}

