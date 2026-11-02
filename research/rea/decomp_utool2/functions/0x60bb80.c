// rea decompile_all
// name: FUN_0060bb80
// address: 0x60bb80
// body: available
// range: 0x60bb80-0x60bd7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0060bb80(undefined4 param_1,undefined4 param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  float local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [20];
  
  local_24 = 0.0;
  iVar2 = FUN_0060d370(&local_24,param_1,param_2);
  local_20 = *(int *)(*(int *)(in_ECX + 0xc4) + param_4 * 4);
  iVar1 = *(int *)(*(int *)(in_ECX + 0xd0) + param_4 * 4);
  if (*(char *)(in_ECX + 0x12d) == '\0') {
    local_24 = 1.0;
  }
  else {
    local_24 = *(float *)(in_ECX + 0xc0) * local_24;
  }
  local_1c = iVar2;
  if (local_20 != iVar2) {
    if ((*(int *)(in_ECX + 0x120) <= local_20) && (local_20 <= *(int *)(in_ECX + 0x124))) {
      puVar4 = (undefined4 *)FUN_0060d3f0(local_18,local_20);
      FUN_006ceb30(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
    }
    if ((*(int *)(in_ECX + 0x120) <= iVar2) && (iVar2 <= *(int *)(in_ECX + 0x124))) {
      puVar4 = (undefined4 *)FUN_0060d3f0(local_18,iVar2);
      FUN_006ceb30(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
      iVar2 = local_1c;
    }
    FUN_0040f650(param_4,iVar2);
  }
  piVar3 = (int *)(in_ECX + 0xd0);
  if (param_3 == '\0') {
    if (-1 < iVar1) {
      FUN_0040f650(param_4,0xffffffff);
      piVar5 = *(int **)(in_ECX + 0xd0);
      piVar3 = piVar5 + *(int *)(in_ECX + 0xd8);
      for (; piVar5 != piVar3; piVar5 = piVar5 + 1) {
        if (iVar1 == *piVar5) {
          return piVar3;
        }
      }
      piVar3 = (int *)FUN_005c5890(*(undefined4 *)(in_ECX + 0xb8),iVar1);
    }
  }
  else if (iVar2 != iVar1) {
    if (-1 < iVar1) {
      FUN_0040f650(param_4,0xffffffff);
      piVar3 = (int *)FUN_0040f7c0(iVar1);
      if ((char)piVar3 == '\0') {
        piVar3 = (int *)FUN_005c5890(*(undefined4 *)(in_ECX + 0xb8),iVar1);
      }
    }
    if ((-1 < iVar2) && (piVar3 = (int *)FUN_0040f7c0(iVar2), (char)piVar3 == '\0')) {
      FUN_005c5a10(*(undefined4 *)(in_ECX + 0xb8),iVar2);
      piVar3 = (int *)FUN_0040f650(param_4,iVar2);
      return piVar3;
    }
  }
  return piVar3;
}

