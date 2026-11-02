// rea decompile_all
// name: FUN_00085ff8
// address: 0x85ff8
// body: available
// range: 0x85ff8-0x86179 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00085ff8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9,
            undefined1 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_3c [8];
  int *local_34;
  int local_30;
  int local_2c;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = param_1 + 0x1c;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_00077d42(local_2c,DAT_0008617c);
  iVar1 = FUN_0007805e(local_2c,0x40,0,0,0,local_20,local_1c,local_18,param_5,param_6,param_7);
  if (iVar1 == 0) {
    FUN_00002898(DAT_000861a0);
    return 0;
  }
  iVar1 = FUN_000782a4(local_2c,0x40,0,0,0);
  if (iVar1 == 0) {
    FUN_00002898(DAT_000861a4);
    return 0;
  }
  iVar1 = FUN_001f01c4(0x144,1);
  uVar5 = DAT_000861a8;
  if ((iVar1 != 0) && (iVar1 = FUN_00135aec(iVar1,param_1), uVar5 = DAT_000861a8, iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xd0) = param_8;
    *(undefined1 *)(iVar1 + 0xf8) = param_9;
    iVar2 = FUN_0013588c(iVar1);
    uVar5 = DAT_000861ac;
    if (iVar2 != 0) {
      iVar2 = param_1 + DAT_00086180;
      local_30 = iVar1;
      FUN_00240e6c(iVar2,&local_30);
      iVar1 = FUN_001f01c4(0x13c,1);
      uVar5 = DAT_000861b0;
      if (((iVar1 != 0) && (iVar1 = FUN_000f3e30(iVar1,param_1), uVar5 = DAT_000861b0, iVar1 != 0))
         && (iVar3 = FUN_000f3c50(), uVar5 = DAT_000861b4, iVar3 != 0)) {
        local_30 = iVar1;
        FUN_00240e6c(iVar2,&local_30);
        puVar4 = (undefined4 *)FUN_000b1210(auStack_3c);
        *puVar4 = _DAT_00086184;
        uVar5 = FUN_000b4964();
        iVar1 = FUN_000b4840(uVar5,s___USBStackService_00086186 + 2,auStack_3c);
        if (iVar1 == 0) {
          FUN_00002898(DAT_000861b8);
          FUN_000b1228(auStack_3c);
          return 0;
        }
        *(undefined1 *)(param_1 + DAT_00086198 + 0x1f) = param_10;
        iVar1 = (**(code **)(*local_34 + 0x2c))();
        if (iVar1 != 0) {
          iVar1 = param_1 + DAT_0008619c;
          iVar2 = FUN_001b1a18();
          if ((iVar2 != 0) && (iVar1 = (**(code **)(*local_34 + 0x2c))(local_34,iVar1), iVar1 != 0))
          {
            iVar1 = (**(code **)(*local_34 + 0x2c))(local_34,param_1 + 8);
            if (iVar1 == 0) {
              FUN_00002898(DAT_000861c4);
              FUN_000b1228(auStack_3c);
              return 0;
            }
            FUN_000b1228(auStack_3c);
            return 1;
          }
          FUN_00002898(DAT_000861c0);
          FUN_000b1228(auStack_3c);
          return 0;
        }
        FUN_00002898(DAT_000861bc);
        FUN_000b1228(auStack_3c);
        return 0;
      }
    }
  }
  FUN_00002898(uVar5);
  return 0;
}

