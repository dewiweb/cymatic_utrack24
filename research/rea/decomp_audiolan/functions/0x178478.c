// rea decompile_all
// name: FUN_00178478
// address: 0x178478
// body: available
// range: 0x178478-0x1786ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00178478(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_18;
  
  local_18 = param_1;
  local_30 = FUN_001a4490(0);
  local_2c = local_18 + 0x80;
  local_38 = *(int *)(local_18 + 0x90);
  if (local_38 == 0) {
    return;
  }
  do {
    local_24 = *(int *)(local_38 + 0x20);
    if (*(int *)(local_38 + 0x10) == 0) {
      iVar4 = local_34;
      if ((*(int *)(local_38 + 0x1c) != 0) &&
         (*(int *)(*(int *)(local_38 + 0x1c) + 0x30) + 0x40U < local_30)) {
        if (*(int *)(local_38 + 0x24) == 0) {
          iVar4 = *(int *)(local_38 + 0x20);
          *(int *)(local_2c + 0x10) = iVar4;
          goto joined_r0x001784e8;
        }
        *(undefined4 *)(*(int *)(local_38 + 0x24) + 0x20) = *(undefined4 *)(local_38 + 0x20);
        iVar4 = *(int *)(local_38 + 0x20);
        goto joined_r0x001784da;
      }
    }
    else {
      iVar4 = FUN_001746cc();
      if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) && (*(char *)(iVar4 + 0x2c) == '\x0e'))
         && (((*(int *)(iVar4 + 0x30) + 0xfU < local_30 &&
              (FUN_001a56f2(*(int *)(iVar4 + 0x20),s_expires_001786f0,0,&local_34), local_34 != 0))
             && ((*(int *)(local_34 + 4) != 0 &&
                 (iVar4 = FUN_00003960(*(int *)(local_34 + 4),&DAT_001786f8), iVar4 == 0)))))) {
        if (*(int *)(local_38 + 0x24) == 0) {
          iVar4 = *(int *)(local_38 + 0x20);
          *(int *)(local_2c + 0x10) = iVar4;
joined_r0x001784e8:
          if (iVar4 != 0) {
            *(undefined4 *)(iVar4 + 0x24) = 0;
          }
          goto LAB_001786c6;
        }
        *(undefined4 *)(*(int *)(local_38 + 0x24) + 0x20) = *(undefined4 *)(local_38 + 0x20);
        iVar4 = *(int *)(local_38 + 0x20);
joined_r0x001784da:
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(local_38 + 0x24);
        }
        *(undefined4 *)(local_38 + 0x20) = 0;
        *(undefined4 *)(local_38 + 0x24) = 0;
LAB_001786c6:
        FUN_0017952c(local_18,local_38);
        FUN_00179b24(local_18);
        return;
      }
      iVar3 = *(int *)(local_38 + 0x10);
      iVar4 = local_34;
      iVar5 = local_18;
      while (local_34 = iVar5, local_18 = local_34, iVar3 != 0) {
        local_20 = *(int *)(iVar3 + 0x38);
        bVar2 = false;
        local_28 = FUN_001a4490(0);
        if (iVar3 != 0) {
          iVar4 = 0;
          iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar3 + 0x28),0);
          while (iVar5 == 0) {
            iVar5 = FUN_001a4bdc(*(undefined4 *)(iVar3 + 0x28),iVar4);
            if (((bVar2) && (*(char *)(iVar5 + 0x2c) == '\x13')) &&
               (*(int *)(iVar5 + 0x30) + 0x1eU < local_28)) {
              FUN_001a6d94(*(undefined4 *)(local_34 + 0xa4),iVar5);
              FUN_001a4cbc(*(undefined4 *)(iVar3 + 0x28),iVar4);
              FUN_001a4a80(local_34 + 0x9c,iVar5,0);
              break;
            }
            iVar6 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_001786fc);
            if (iVar6 == 0) {
              bVar2 = true;
            }
            iVar5 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_00178700);
            if (iVar5 == 0) {
              bVar2 = true;
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar3 + 0x28),iVar4);
          }
          bVar2 = false;
          iVar4 = 0;
          iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar3 + 0x2c),0);
          while (iVar5 == 0) {
            iVar5 = FUN_001a4bdc(*(undefined4 *)(iVar3 + 0x2c),iVar4);
            if (((bVar2) && (*(char *)(iVar5 + 0x2c) == '\x0e')) &&
               (*(int *)(iVar5 + 0x30) + 0x1eU < local_28)) {
              FUN_001a6d94(*(undefined4 *)(local_34 + 0xa4),iVar5);
              FUN_001a4cbc(*(undefined4 *)(iVar3 + 0x2c),iVar4);
              FUN_001a4a80(local_34 + 0x9c,iVar5,0);
              break;
            }
            iVar6 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_001786fc);
            if (iVar6 == 0) {
              bVar2 = true;
            }
            iVar5 = FUN_001a6f04(**(undefined4 **)(iVar5 + 0x1c),DAT_00178700);
            if (iVar5 == 0) {
              bVar2 = true;
            }
            iVar4 = iVar4 + 1;
            iVar5 = FUN_001a4bc4(*(undefined4 *)(iVar3 + 0x2c),iVar4);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        iVar4 = local_34;
        iVar3 = local_20;
        if (((*piVar1 == 0) || (iVar5 = local_18, *(char *)(*piVar1 + 0x31) == '\x14')) &&
           ((iVar5 = local_18, *(int *)(local_38 + 0x1c) != 0 &&
            (iVar5 = local_18, *(int *)(*(int *)(local_38 + 0x1c) + 0x30) + 0x40U < local_30)))) {
          if (*(int *)(local_38 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(local_38 + 0x24) + 0x20) = *(undefined4 *)(local_38 + 0x20);
            iVar4 = *(int *)(local_38 + 0x20);
            goto joined_r0x001784da;
          }
          iVar4 = *(int *)(local_38 + 0x20);
          *(int *)(local_2c + 0x10) = iVar4;
          goto joined_r0x001784e8;
        }
      }
    }
    local_34 = iVar4;
    local_38 = local_24;
    if (local_24 == 0) {
      return;
    }
  } while( true );
}

