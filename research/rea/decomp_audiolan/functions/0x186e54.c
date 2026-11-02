// rea decompile_all
// name: FUN_00186e54
// address: 0x186e54
// body: available
// range: 0x186e54-0x18707d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186e54(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 local_28 [5];
  
  iVar1 = -2;
  if ((param_2 != (char *)0x0) && (*(int *)(param_2 + 0x10c) != 0)) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x10c) + 0xc);
    if ((iVar5 != 0x191) && (iVar5 != 0x197)) {
      if (99 < iVar5 - 300U) {
        return 1;
      }
      if (*param_2 != '\b') {
        return -1;
      }
      local_30 = (undefined4 *)0x0;
      local_2c = 0;
      local_28[0] = 0;
      iVar1 = FUN_001726b2(param_1,*(undefined4 *)(param_2 + 0x118),&local_2c,&local_30,local_28);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_001721b4(param_1,local_2c,local_30,local_28[0]);
      return iVar1;
    }
    iVar5 = *(int *)(param_2 + 0x108);
    if (iVar5 != 0) {
      if (*(int *)(param_2 + 0x120) < 1) {
        if (*(int *)(param_2 + 0x124) < 1) {
          if (*(int *)(param_2 + 0x128) < 1) {
            if (*(int *)(param_2 + 300) < 1) {
              if ((*(int *)(iVar5 + 0xc) != 0) ||
                 (iVar1 = FUN_00003960(*(undefined4 *)(iVar5 + 8),s_PUBLISH_00187080), iVar1 != 0))
              {
                local_30 = (undefined4 *)0x0;
                iVar1 = 0;
                iVar5 = *(int *)(param_2 + 0x118);
                local_34 = param_1 + 0x9c;
                while ((iVar6 = FUN_001a4bc4(local_34,iVar1), puVar4 = local_30, iVar6 == 0 &&
                       (puVar4 = (undefined4 *)FUN_001a4bdc(local_34,iVar1), puVar4[1] != iVar5))) {
                  iVar1 = iVar1 + 1;
                }
                local_30 = puVar4;
                if (local_30 == (undefined4 *)0x0) {
                  return -1;
                }
                goto LAB_00186f36;
              }
              local_34 = 0;
              iVar1 = FUN_00177230(param_1,&local_34,*(undefined4 *)(param_2 + 0x118));
              if (iVar1 == 0) {
                iVar1 = FUN_001789a8(param_1,0,local_34 + 0x148);
                return iVar1;
              }
            }
            else {
              local_30 = (undefined4 *)0x0;
              local_2c = 0;
              local_28[0] = 0;
              iVar1 = FUN_00175b24(param_1,*(undefined4 *)(param_2 + 0x118),&local_2c,&local_30,
                                   local_28);
              if (iVar1 != 0) {
                return iVar1;
              }
              iVar1 = FUN_001759b8(param_1,local_2c,local_30,local_28[0]);
            }
            return iVar1;
          }
          local_30 = (undefined4 *)0x0;
          local_2c = 0;
          local_34 = 0;
          iVar1 = FUN_00179888(param_1,*(undefined4 *)(param_2 + 0x118),&local_2c,&local_30,
                               &local_34);
          if (iVar1 == 0) {
            if ((local_30 == (undefined4 *)0x0) || (local_30[1] == 0)) {
              piVar2 = (int *)(local_2c + 0x14);
            }
            else {
              piVar2 = local_30 + 0xc;
            }
            iVar1 = -1;
            if (*piVar2 < 3) {
              *piVar2 = *piVar2 + 1;
              iVar1 = FUN_001795e8(param_1,local_2c,local_30,local_34);
              return iVar1;
            }
          }
        }
        else {
          local_30 = (undefined4 *)0x0;
          local_2c = 0;
          local_34 = 0;
          iVar1 = FUN_001726b2(param_1,*(undefined4 *)(param_2 + 0x118),&local_2c,&local_30,
                               &local_34);
          if (iVar1 == 0) {
            if ((local_30 == (undefined4 *)0x0) || (local_30[1] == 0)) {
              piVar2 = (int *)(local_2c + 0x10);
            }
            else {
              piVar2 = local_30 + 0xc;
            }
            if (2 < *piVar2) {
              return -1;
            }
            *piVar2 = *piVar2 + 1;
            iVar1 = FUN_001721b4(param_1,local_2c,local_30,local_34);
          }
          if (iVar1 == -6) {
            local_30 = (undefined4 *)0x0;
            iVar5 = 0;
            iVar6 = *(int *)(param_2 + 0x118);
            local_34 = param_1 + 0x9c;
            while ((iVar3 = FUN_001a4bc4(local_34,iVar5), puVar4 = local_30, iVar3 == 0 &&
                   (puVar4 = (undefined4 *)FUN_001a4bdc(local_34,iVar5), puVar4[1] != iVar6))) {
              iVar5 = iVar5 + 1;
            }
            local_30 = puVar4;
            if (local_30 != (undefined4 *)0x0) {
LAB_00186f36:
              iVar1 = FUN_001789a8(param_1,0,&local_30);
              return iVar1;
            }
          }
        }
        return iVar1;
      }
      local_30 = (undefined4 *)0x0;
      iVar1 = FUN_001776a6(param_1,&local_30);
      if (-1 < iVar1) {
        if (2 < (int)local_30[0xf]) {
          return -1;
        }
        local_30[0xf] = local_30[0xf] + 1;
        iVar1 = FUN_001878d4(param_1,*local_30,0);
      }
    }
  }
  return iVar1;
}

