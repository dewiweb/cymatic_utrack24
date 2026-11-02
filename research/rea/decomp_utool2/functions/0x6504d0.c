// rea decompile_all
// name: FUN_006504d0
// address: 0x6504d0
// body: available
// range: 0x6504d0-0x65071b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006504d0(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  uint uVar5;
  int in_EDX;
  int local_14;
  int local_10;
  uint *local_c;
  void *local_8;
  
  local_c = param_2;
  uVar1 = *(uint *)(in_ECX + 0x244);
  uVar5 = 0xffffffff;
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    uVar5 = uVar1;
  }
  if (uVar5 < param_1 + 1U) {
    if (*(int *)(in_ECX + 0x50) == 0) {
      *(char **)(in_ECX + 0x50) = "insufficient memory";
    }
    return -4;
  }
  uVar5 = uVar5 + (-1 - param_1);
  if (uVar5 < *param_2) {
    *param_2 = uVar5;
  }
  local_10 = in_EDX;
  iVar3 = FUN_00650810(uVar5);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar3 = -7;
    }
    return iVar3;
  }
  local_14 = local_10 - param_1;
  if (*(int *)(in_ECX + 0x34) == *(int *)(in_ECX + 0xd0)) {
    local_10 = local_14;
    iVar3 = FUN_00650720(&local_14,0,local_c);
    if (iVar3 != 1) {
      *(undefined4 *)(in_ECX + 0x34) = 0;
      if (iVar3 == 0) {
        iVar3 = -7;
      }
      return iVar3;
    }
    iVar3 = FUN_00617a50();
    puVar2 = local_c;
    if (iVar3 != 0) {
      FUN_00658fd0();
      *(undefined4 *)(in_ECX + 0x34) = 0;
      return -7;
    }
    uVar1 = *local_c;
    iVar3 = uVar1 + 1 + param_1;
    if ((iVar3 == 0) || (local_8 = (void *)FUN_004c554b(iVar3), local_8 == (void *)0x0)) {
      iVar3 = -4;
      if (*(int *)(in_ECX + 0x50) == 0) {
        *(char **)(in_ECX + 0x50) = "insufficient memory";
        *(undefined4 *)(in_ECX + 0x34) = 0;
        return -4;
      }
    }
    else {
      if (*(int *)(in_ECX + 0x34) == *(int *)(in_ECX + 0xd0)) {
        iVar3 = FUN_00650720(&local_14,(int)local_8 + param_1,puVar2);
        pvVar4 = local_8;
        if (iVar3 == 1) {
          if (uVar1 == *local_c) {
            *(undefined1 *)(*local_c + param_1 + (int)local_8) = 0;
            if (param_1 != 0) {
              FUN_004c2c30(local_8,*(undefined4 *)(in_ECX + 0x260),param_1);
            }
            pvVar4 = *(void **)(in_ECX + 0x260);
            *(void **)(in_ECX + 0x260) = local_8;
            *(uint *)(in_ECX + 0x264) = param_1 + 1 + uVar1;
          }
          else {
            iVar3 = -7;
          }
        }
        else if (iVar3 == 0) {
          iVar3 = -7;
        }
      }
      else {
        *(char **)(in_ECX + 0x50) = "zstream unclaimed";
        iVar3 = -2;
        pvVar4 = local_8;
      }
      if (pvVar4 != (void *)0x0) {
        FID_conflict__free(pvVar4);
      }
      if ((iVar3 == 1) && (local_10 != local_14)) {
        FUN_00655fd0();
        *(undefined4 *)(in_ECX + 0x34) = 0;
        return 1;
      }
    }
  }
  else {
    *(char **)(in_ECX + 0x50) = "zstream unclaimed";
    iVar3 = -2;
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  return iVar3;
}

