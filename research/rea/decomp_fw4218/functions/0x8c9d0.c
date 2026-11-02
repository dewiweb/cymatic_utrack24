// rea decompile_all
// name: FUN_0008c9d0
// address: 0x8c9d0
// body: available
// range: 0x8c9d0-0x8ce63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0008c9d0(int param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_30;
  ushort *local_2c;
  ushort *local_28;
  
  uVar1 = (uint)*param_3;
  local_30 = param_2;
  if ((uVar1 != *(ushort *)(param_1 + 0x5c)) ||
     (uVar1 = (uint)param_3[1], uVar1 != *(ushort *)(param_1 + 0x5e)))
  goto switchD_0008ca0c_default;
  uVar1 = (uint)*(byte *)(param_1 + 0x1d);
  local_2c = param_3;
  local_28 = param_4;
  switch(uVar1) {
  case 0:
    uVar1 = (uint)*(byte *)(param_1 + 0x1c);
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        for (uVar5 = 0; uVar1 = FUN_0022e4a0(param_1 + 0x50), uVar5 < uVar1; uVar5 = uVar5 + 1) {
          FUN_0023cff0(param_1 + 0x50,uVar5);
          iVar4 = FUN_001b9eb8();
          if ((iVar4 == *(int *)(param_3 + 2)) &&
             (iVar4 = FUN_0023cff0(param_1 + 0x50,uVar5), *(char *)(iVar4 + 0xd) != '\0')) {
            iVar4 = FUN_0023cff0(param_1 + 0x50,uVar5);
            *(undefined1 *)(iVar4 + 0xd) = 0;
            iVar4 = FUN_0023cff0(param_1 + 0x50,uVar5);
            *(undefined1 *)(iVar4 + 0xe) = 0;
            FUN_0023cff0(param_1 + 0x50,uVar5);
            uVar2 = FUN_001b9eb8();
            FUN_00002898(DAT_0008ce64,param_4,uVar5 + 1,uVar2);
            local_30 = FUN_002341f4(param_1 + 0x84);
            while( true ) {
              local_2c = (ushort *)FUN_002341cc(param_1 + 0x84);
              local_28 = local_2c;
              iVar4 = FUN_0022484c(&local_30,&local_28);
              if (iVar4 == 0) break;
              puVar3 = (undefined4 *)FUN_0022c26c(&local_30);
              (**(code **)(*(int *)*puVar3 + 0x28))((int *)*puVar3,param_1 + 0x50);
              FUN_0020930c(&local_30);
            }
            uVar1 = 0;
            break;
          }
        }
      }
      else if (((uVar1 == 2) &&
               (uVar1 = FUN_001b9eb8(param_1 + 0x20), uVar1 == *(uint *)(param_3 + 2))) &&
              (uVar1 = 0, *(char *)(param_1 + 0x2d) != '\0')) {
        *(undefined1 *)(param_1 + 0x2d) = 0;
        uVar2 = FUN_001b9eb8(param_1 + 0x20);
        FUN_00002898(DAT_0008ce68,param_4,uVar2);
        local_30 = FUN_002341f4(param_1 + 0x84);
        while( true ) {
          local_2c = (ushort *)FUN_002341cc(param_1 + 0x84);
          local_28 = local_2c;
          iVar4 = FUN_0022484c(&local_30,&local_28);
          uVar1 = 0;
          if (iVar4 == 0) break;
          puVar3 = (undefined4 *)FUN_0022c26c(&local_30);
          (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3,param_1 + 0x20);
          FUN_0020930c(&local_30);
        }
      }
    }
    break;
  case 1:
    goto LAB_0008ccf0;
  case 2:
    for (uVar5 = 0; uVar1 = FUN_0022e4a0(param_1 + 0x50), uVar5 < uVar1; uVar5 = uVar5 + 1) {
      FUN_0023cff0(param_1 + 0x50,uVar5);
      iVar4 = FUN_001b9eb8();
      if (iVar4 == *(int *)(param_3 + 2)) {
        iVar4 = FUN_0008b410(param_1,*(undefined4 *)(param_3 + 2));
        if (iVar4 != 0) {
          FUN_00002898(DAT_0008ce6c,param_4,uVar5 + 1,*(undefined4 *)(param_3 + 2));
          local_30 = FUN_002341f4(param_1 + 0x84);
          while( true ) {
            local_2c = (ushort *)FUN_002341cc(param_1 + 0x84);
            local_28 = local_2c;
            iVar4 = FUN_0022484c(&local_30,&local_28);
            if (iVar4 == 0) break;
            puVar3 = (undefined4 *)FUN_0022c26c(&local_30);
            (**(code **)(*(int *)*puVar3 + 0x28))((int *)*puVar3,param_1 + 0x50);
            FUN_0020930c(&local_30);
          }
        }
        uVar1 = 0;
        break;
      }
    }
    break;
  case 3:
    goto LAB_0008ccf0;
  case 4:
    for (uVar5 = 0; uVar1 = FUN_0022e4a0(param_1 + 0x50), uVar5 < uVar1; uVar5 = uVar5 + 1) {
      FUN_0023cff0(param_1 + 0x50,uVar5);
      iVar4 = FUN_001b9eb8();
      if (iVar4 == *(int *)(param_3 + 2)) {
        iVar4 = FUN_0023cff0(param_1 + 0x50,uVar5);
        *(undefined1 *)(iVar4 + 0xd) = 0;
        iVar4 = FUN_0023cff0(param_1 + 0x50,uVar5);
        *(undefined1 *)(iVar4 + 0xe) = 0;
        FUN_00002898(DAT_0008ce74,param_4,uVar5 + 1,*(undefined4 *)(param_3 + 2));
        local_30 = FUN_002341f4(param_1 + 0x84);
        while( true ) {
          local_2c = (ushort *)FUN_002341cc(param_1 + 0x84);
          local_28 = local_2c;
          iVar4 = FUN_0022484c(&local_30,&local_28);
          if (iVar4 == 0) break;
          puVar3 = (undefined4 *)FUN_0022c26c(&local_30);
          (**(code **)(*(int *)*puVar3 + 0x28))((int *)*puVar3,param_1 + 0x50);
          FUN_0020930c(&local_30);
        }
        uVar1 = 0;
        break;
      }
    }
    break;
  case 5:
LAB_0008ccf0:
    uVar1 = FUN_001b9eb8(param_1 + 0x20);
    if (uVar1 == *(uint *)(param_3 + 2)) {
      *(undefined1 *)(param_1 + 0x1d) = 0;
      FUN_00111390(param_1 + 0x20);
      FUN_00002898(DAT_0008ce70,param_4);
      local_30 = FUN_002341f4(param_1 + 0x84);
      while( true ) {
        local_2c = (ushort *)FUN_002341cc(param_1 + 0x84);
        local_28 = local_2c;
        iVar4 = FUN_0022484c(&local_30,&local_28);
        uVar1 = 0;
        if (iVar4 == 0) break;
        puVar3 = (undefined4 *)FUN_0022c26c(&local_30);
        (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3);
        FUN_0020930c(&local_30);
      }
    }
  }
switchD_0008ca0c_default:
  return CONCAT44(local_30,uVar1);
}

