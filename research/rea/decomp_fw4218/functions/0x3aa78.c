// rea decompile_all
// name: FUN_0003aa78
// address: 0x3aa78
// body: available
// range: 0x3aa78-0x3ab6b inclusive
// range: 0x3ab74-0x3abcb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003aa78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [36];
  undefined1 auStack_3c [40];
  
  iVar2 = param_1 + 0x284;
  FUN_0002f734(iVar2,&local_88);
  local_88 = iVar2;
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_000365f4(param_1 + 0x218);
  }
  uVar1 = _DAT_0003abcc;
  if ((*(char *)(param_1 + 0x25a) != '\x03') && (*(char *)(param_1 + 0x25a) != '\x02')) {
    iVar2 = FUN_000366e0(_DAT_0003abcc);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s__PORT__d__compute_Er_Best_0003abcf + 1,*(undefined2 *)(param_1 + 2));
    }
    FUN_0003661e(&local_84);
    if ((*(int *)(param_1 + 0x238) != 0) && (*(int *)(param_1 + 0x240) != 0)) {
      FUN_0003663a(&local_84,param_1 + 0x234);
    }
    FUN_0002f734(local_88,&local_68);
    iVar2 = FUN_0002f836(local_88,local_68);
    if (iVar2 == 0) {
      do {
        iVar2 = FUN_0002f778(local_88,local_68);
        if ((((iVar2 == 0) || (*(byte *)(iVar2 + 0x26) < 2)) || (*(int *)(iVar2 + 4) == 0)) ||
           (*(int *)(iVar2 + 0xc) == 0)) goto switchD_0003ab6a_caseD_1;
        if ((local_80 == 0) && (local_78 == 0)) {
switchD_0003ab6a_caseD_2:
          FUN_0003663a(&local_84,iVar2);
        }
        else {
          FUN_0002ab50(*(int *)(param_1 + 4) + 0xa0,auStack_60,local_78,param_1 + 0x250);
          FUN_0002ab50(*(int *)(param_1 + 4) + 0xa0,auStack_3c,*(undefined4 *)(iVar2 + 0xc),
                       param_1 + 0x250);
          local_64 = FUN_0002abb6(*(int *)(param_1 + 4) + 0xa0,auStack_60,auStack_3c);
          uVar1 = DAT_0003abec;
          switch(local_64) {
          default:
            iVar2 = FUN_000366e0(DAT_0003abec);
            if (iVar2 != 0) {
              FUN_0002f9bc(uVar1);
              FUN_0002f9fc(3,s_PORT__Compute_Er_Best_return_val_0003abf0,local_64);
            }
            break;
          case 1:
          case 3:
          case 5:
          case 6:
          case 7:
            break;
          case 2:
          case 4:
            goto switchD_0003ab6a_caseD_2;
          }
        }
switchD_0003ab6a_caseD_1:
        FUN_0002f888(local_88,&local_68);
        iVar2 = FUN_0002f836(local_88,local_68);
      } while (iVar2 == 0);
    }
    if (local_80 != 0) {
      uVar1 = FUN_0002aac8(local_78);
      *(undefined4 *)(param_1 + 0x21c) = uVar1;
      *(undefined4 *)(param_1 + 0x224) = uVar1;
      *(undefined4 *)(param_1 + 0x218) = local_84;
      *(undefined4 *)(param_1 + 0x220) = local_84;
    }
  }
  return;
}

