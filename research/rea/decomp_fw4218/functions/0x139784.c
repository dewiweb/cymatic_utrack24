// rea decompile_all
// name: FUN_00139784
// address: 0x139784
// body: available
// range: 0x139784-0x139b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00139784(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [64];
  undefined1 *local_48;
  undefined1 *local_44;
  int local_40;
  undefined1 auStack_38 [21];
  undefined1 local_23;
  undefined1 auStack_20 [16];
  
  FUN_000b3c64(auStack_88);
  iVar2 = FUN_001db0ac(5,*(undefined4 *)(param_1 + 0x18));
  FUN_000b3ac4(auStack_88);
  FUN_000b3204(auStack_20);
  FUN_000b3378(auStack_38,1,1,iVar2 << 2,0,8);
  local_23 = 0xb;
  FUN_000b2f24(auStack_20,auStack_38);
  iVar2 = FUN_000b365c(auStack_88,auStack_20,1);
  if (((iVar2 != 0) && (iVar2 = FUN_000b3328(auStack_88,1), iVar2 != 0)) &&
     (iVar2 = FUN_000b3650(auStack_88,1), iVar2 != 0)) {
    FUN_000b33b4(auStack_38);
    FUN_000b3218(auStack_20);
    FUN_000b3b94(auStack_88);
    FUN_000b3204(auStack_20);
    FUN_000b3340(auStack_38,1);
    local_23 = *(undefined1 *)(param_1 + 0x1c);
    FUN_000b2f24(auStack_20,auStack_38);
    iVar2 = FUN_000b36c4(auStack_88,auStack_20,1);
    if (iVar2 != 0) {
      FUN_000b33b4(auStack_38);
      FUN_000b3218(auStack_20);
      iVar2 = FUN_000b2af4(auStack_88);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_001c7218(iVar2,DAT_00139b9c,DAT_00139b98,0xffffffff);
      }
      *(int **)(param_1 + 0xc) = piVar3;
      if (piVar3 == (int *)0x0) {
        FUN_00002898(DAT_00139bc8);
        FUN_000b3d38(auStack_88);
        return 0;
      }
      uVar4 = (**(code **)(*piVar3 + 0x1c))();
      *(undefined4 *)(DAT_00139ba0 + 0xc) = uVar4;
      iVar2 = FUN_001a42b4(*(undefined4 *)(param_1 + 0xc),_DAT_00139ba4,param_1);
      if (iVar2 == 0) {
        FUN_00002898(DAT_00139bcc);
        FUN_000b3d38(auStack_88);
        return 0;
      }
      iVar2 = FUN_001d0f38(s__InputDataStream__USB__>_ARM_00139ba7 + 1,5,
                           *(int *)(param_1 + 0x18) << 2,*(undefined4 *)(param_1 + 0x20),
                           *(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x14));
      *(int *)(param_1 + 8) = iVar2;
      if (iVar2 == 0) {
        FUN_00002898(DAT_00139bd0);
        FUN_000b3d38(auStack_88);
        return 0;
      }
      local_48 = (undefined1 *)0x0;
      local_44 = (undefined1 *)0x0;
      local_40 = 0;
      piVar3 = (int *)FUN_000c63b8();
      iVar2 = (**(code **)(*piVar3 + 0x98))(piVar3,(int)*(short *)(param_1 + 0x24),&local_48);
      if (iVar2 == 0) {
        FUN_00002898(DAT_00139bd4);
        FUN_00173a54(local_48,local_40 - (int)local_48,0);
        FUN_000b3d38(auStack_88);
        return 0;
      }
      if (local_48 == local_44) {
        FUN_00002898(DAT_00139bc4);
        FUN_00173a54(local_48,local_40 - (int)local_48,0);
        FUN_000b3d38(auStack_88);
        return 0;
      }
      iVar2 = 0;
      puVar6 = local_48;
      if (local_44 != local_48) {
        do {
          uVar4 = FUN_000c63b8();
          iVar5 = FUN_000c29ac(uVar4,*puVar6,1);
          if (iVar5 == 1) {
            if (4 < iVar2) {
              FUN_00002898(DAT_00139bdc,(int)local_44 - (int)local_48);
              FUN_00173a54(local_48,local_40 - (int)local_48,0);
              FUN_000b3d38(auStack_88);
              return 0;
            }
            uVar4 = FUN_000c63b8();
            iVar5 = FUN_000c4ed8(uVar4,*puVar6,1,param_1 + iVar2 + 0x26);
            if (iVar5 == 0) {
              FUN_00002898(DAT_00139be0,*puVar6);
              FUN_00173a54(local_48,local_40 - (int)local_48,0);
              FUN_000b3d38(auStack_88);
              return 0;
            }
            iVar2 = iVar2 + 1;
          }
          puVar6 = puVar6 + 1;
        } while (local_44 != puVar6);
        if (1 < iVar2) {
          FUN_00002898(DAT_00139bd8,iVar2 + 1);
          FUN_00173a54(local_48,local_40 - (int)local_48,0);
          FUN_000b3d38(auStack_88);
          return 0;
        }
      }
      piVar3 = (int *)FUN_000c63b8();
      uVar1 = (**(code **)(*piVar3 + 0x90))();
      *(undefined1 *)(param_1 + 0x30) = uVar1;
      FUN_00173a54(local_48,local_40 - (int)local_48,0);
      FUN_000b3d38(auStack_88);
      return 1;
    }
  }
  FUN_000b33b4(auStack_38);
  FUN_000b3218(auStack_20);
  FUN_000b3d38(auStack_88);
  return 0;
}

