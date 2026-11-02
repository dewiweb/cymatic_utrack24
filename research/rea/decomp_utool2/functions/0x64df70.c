// rea decompile_all
// name: FUN_0064df70
// address: 0x64df70
// body: available
// range: 0x64df70-0x64e1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64e1d8 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64e1df to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064df70(uint param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  undefined4 local_108;
  int local_104;
  int local_100;
  void *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  void *local_e8 [56];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(in_ECX + 0x240);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_00650a40();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(int *)(in_ECX + 0x240) = iVar2 + -1;
    if (iVar2 + -1 != 1) goto LAB_0064dfd5;
    FUN_00650a40();
LAB_0064e1c0:
    FUN_00655fd0();
LAB_0064e1c7:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0064dfd5:
  uVar4 = *(uint *)(in_ECX + 0x28);
  if ((uVar4 & 1) == 0) goto LAB_0064e1d8;
  if ((uVar4 & 4) != 0) {
    *(uint *)(in_ECX + 0x28) = uVar4 | 8;
  }
  local_e8[0] = *(void **)(in_ECX + 0x260);
  if (local_e8[0] == (void *)0x0) {
LAB_0064e01f:
    if ((param_1 == 0) || (local_e8[0] = (void *)FUN_004c554b(param_1), local_e8[0] == (void *)0x0))
    {
      FUN_00650a40();
      goto LAB_0064e1c0;
    }
    *(void **)(in_ECX + 0x260) = local_e8[0];
    *(uint *)(in_ECX + 0x264) = param_1;
  }
  else if (*(uint *)(in_ECX + 0x264) < param_1) {
    *(undefined4 *)(in_ECX + 0x260) = 0;
    *(undefined4 *)(in_ECX + 0x264) = 0;
    FID_conflict__free(local_e8[0]);
    goto LAB_0064e01f;
  }
  if (*(code **)(in_ECX + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  (**(code **)(in_ECX + 0x10))();
  FUN_006598a0(param_1);
  iVar2 = FUN_00650a40();
  pvVar1 = local_e8[0];
  if (iVar2 != 0) goto LAB_0064e1c7;
  uVar4 = 0;
  if (param_1 == 0) {
LAB_0064e175:
    pcVar3 = "bad keyword";
  }
  else {
    do {
      if (*(char *)((int)local_e8[0] + uVar4) == '\0') break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
    if ((0x4f < uVar4) || (uVar4 == 0)) goto LAB_0064e175;
    if (param_1 < uVar4 + 3) {
      pcVar3 = "truncated";
    }
    else if (*(char *)((int)local_e8[0] + uVar4 + 1) == '\0') {
      local_e8[0] = (void *)0xffffffff;
      iVar2 = FUN_006504d0(uVar4 + 2,local_e8,pvVar1);
      if (iVar2 == 1) {
        local_104 = *(int *)(in_ECX + 0x260);
        local_108 = 0;
        *(undefined1 *)((int)local_e8[0] + local_104 + uVar4 + 2) = 0;
        local_100 = local_104 + 2 + uVar4;
        local_fc = local_e8[0];
        local_f8 = 0;
        local_f4 = 0;
        local_f0 = 0;
        iVar2 = FUN_0064bb50(&local_108,local_104);
        if (iVar2 == 0) goto LAB_0064e1c7;
        pcVar3 = "insufficient memory";
      }
      else {
        pcVar3 = *(char **)(in_ECX + 0x50);
        if (pcVar3 == (char *)0x0) goto LAB_0064e1c7;
      }
    }
    else {
      pcVar3 = "unknown compression type";
    }
  }
  if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
    FUN_00656080(pcVar3);
    FUN_006563b0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0064e1d8:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

