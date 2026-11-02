// rea decompile_all
// name: FUN_0064dc60
// address: 0x64dc60
// body: available
// range: 0x64dc60-0x64df6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64df60 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64df67 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064dc60(uint param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int local_118;
  void *local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100;
  uint local_f8;
  uint local_f4;
  int local_f0;
  void *local_ec;
  char local_e5;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(in_ECX + 0x240);
  if (iVar2 == 0) {
LAB_0064dcd8:
    uVar5 = *(uint *)(in_ECX + 0x28);
    if ((uVar5 & 1) == 0) goto LAB_0064df60;
    if ((uVar5 & 4) != 0) {
      *(uint *)(in_ECX + 0x28) = uVar5 | 8;
    }
    pvVar1 = *(void **)(in_ECX + 0x260);
    local_ec = pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0064dd28:
      if (param_1 + 1 == 0) {
        local_ec = (void *)0x0;
      }
      else {
        pvVar1 = (void *)FUN_004c554b(param_1 + 1);
        local_ec = pvVar1;
        if (pvVar1 != (void *)0x0) {
          *(void **)(in_ECX + 0x260) = pvVar1;
          *(uint *)(in_ECX + 0x264) = param_1 + 1;
          goto LAB_0064dd66;
        }
      }
      pvVar1 = local_ec;
      FUN_00656020();
    }
    else if (*(uint *)(in_ECX + 0x264) < param_1 + 1) {
      *(undefined4 *)(in_ECX + 0x260) = 0;
      *(undefined4 *)(in_ECX + 0x264) = 0;
      FID_conflict__free(pvVar1);
      goto LAB_0064dd28;
    }
LAB_0064dd66:
    if (pvVar1 != (void *)0x0) {
      if (*(code **)(in_ECX + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(param_1);
      iVar2 = FUN_00650a40();
      if (iVar2 != 0) goto LAB_0064dcc7;
      uVar5 = 0;
      if (param_1 == 0) {
LAB_0064df23:
        pcVar3 = "bad keyword";
      }
      else {
        do {
          if (*(char *)((int)local_ec + uVar5) == '\0') break;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_1);
        if ((0x4f < uVar5) || (uVar5 == 0)) goto LAB_0064df23;
        if (param_1 < uVar5 + 5) {
          pcVar3 = "truncated";
        }
        else {
          local_e5 = *(char *)((int)local_ec + uVar5 + 1);
          if ((local_e5 == '\0') ||
             ((local_e5 == '\x01' && (*(char *)((int)local_ec + uVar5 + 2) == '\0')))) {
            local_f4 = uVar5 + 3;
            for (local_f8 = local_f4;
                (local_f8 < param_1 && (*(char *)((int)local_ec + local_f8) != '\0'));
                local_f8 = local_f8 + 1) {
            }
            local_f8 = local_f8 + 1;
            for (uVar5 = local_f8; (uVar5 < param_1 && (*(char *)((int)local_ec + uVar5) != '\0'));
                uVar5 = uVar5 + 1) {
            }
            uVar5 = uVar5 + 1;
            if (local_e5 == '\0') {
              if (param_1 < uVar5) {
LAB_0064df1c:
                pcVar3 = "truncated";
                goto LAB_0064df28;
              }
              pvVar1 = local_ec;
              iVar2 = param_1 - uVar5;
            }
            else {
              if (param_1 <= uVar5) goto LAB_0064df1c;
              local_f0 = -1;
              iVar4 = FUN_006504d0(uVar5,&local_f0,local_ec);
              iVar2 = local_f0;
              if (iVar4 == 1) {
                pvVar1 = *(void **)(in_ECX + 0x260);
              }
              else {
                pcVar3 = *(char **)(in_ECX + 0x50);
                pvVar1 = local_ec;
                if (pcVar3 != (char *)0x0) goto LAB_0064df28;
              }
            }
            *(undefined1 *)(iVar2 + uVar5 + (int)pvVar1) = 0;
            local_118 = (local_e5 == '\0') + 1;
            local_10c = 0;
            local_104 = local_f4 + (int)pvVar1;
            local_100 = local_f8 + (int)pvVar1;
            local_110 = uVar5 + (int)pvVar1;
            local_114 = pvVar1;
            local_108 = iVar2;
            iVar2 = FUN_0064bb50(&local_118,pvVar1);
            if (iVar2 == 0) goto LAB_0064dcc7;
            pcVar3 = "insufficient memory";
          }
          else {
            pcVar3 = "bad compression info";
          }
        }
      }
LAB_0064df28:
      if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
        FUN_00656080(pcVar3);
        FUN_006563b0();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
LAB_0064df60:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    FUN_00650a40();
  }
  else {
    if (iVar2 == 1) {
      FUN_00650a40();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(int *)(in_ECX + 0x240) = iVar2 + -1;
    if (iVar2 + -1 != 1) goto LAB_0064dcd8;
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064dcc7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

