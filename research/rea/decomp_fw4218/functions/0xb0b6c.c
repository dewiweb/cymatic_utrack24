// rea decompile_all
// name: FUN_000b0b6c
// address: 0xb0b6c
// body: available
// range: 0xb0b6c-0xb0dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b0b6c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_28;
  int *local_24;
  undefined1 auStack_20 [4];
  int *local_1c;
  
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar1 == 0) {
    FUN_00002898(DAT_000b0e10,param_2);
    return 0;
  }
  if ((*(int *)(iVar1 + 0xc) != -1) && (*(int *)(iVar1 + 0x10) == -1)) {
    FUN_00002898(DAT_000b0e14,param_2);
    return 0;
  }
  if (*(int *)(iVar1 + 0x14) == -1) {
    FUN_00002898(DAT_000b0e18,param_2);
    return 0;
  }
  if (*(int *)(iVar1 + 0x18) != -1) {
    uVar3 = DAT_000b0e00;
    if ((*(char *)(iVar1 + 8) == -1) ||
       (iVar2 = (**(code **)(*(int *)param_1[0x52] + 0x2c))((int *)param_1[0x52],param_2),
       uVar3 = DAT_000b0e04, iVar2 == 0)) {
      FUN_00002898(uVar3,param_2);
    }
    else {
      if (*(int *)(iVar1 + 0xc) != -1) {
        (**(code **)(*(int *)param_1[0x52] + 0x20))
                  (&local_28,(int *)param_1[0x52],*(int *)(iVar1 + 0xc),
                   *(undefined4 *)(iVar1 + 0x10));
        uVar3 = DAT_000b0e08;
        if (local_24 == (int *)0x0) {
          FUN_00002898(DAT_000b0e20,param_2);
          local_28 = uVar3;
          FUN_001f00bc(DAT_000b0e0c);
          if (local_24 != (int *)0x0) {
            iVar1 = (**(code **)(*local_24 + 0xc4))();
            if ((iVar1 == 0) && (local_24 != (int *)0x0)) {
              (**(code **)(*local_24 + 4))();
            }
            local_24 = (int *)0x0;
          }
          FUN_001f06d4(DAT_000b0e0c);
          return 0;
        }
        (**(code **)(*local_24 + 0xf4))();
        local_28 = uVar3;
        FUN_001f00bc(DAT_000b0e0c);
        if (local_24 != (int *)0x0) {
          iVar2 = (**(code **)(*local_24 + 0xc4))();
          if ((iVar2 == 0) && (local_24 != (int *)0x0)) {
            (**(code **)(*local_24 + 4))();
          }
          local_24 = (int *)0x0;
        }
        FUN_001f06d4(DAT_000b0e0c);
      }
      (**(code **)(*(int *)param_1[0x52] + 0x1c))
                (auStack_20,(int *)param_1[0x52],*(undefined4 *)(iVar1 + 0x14),
                 *(undefined4 *)(iVar1 + 0x18));
      if (local_1c == (int *)0x0) {
        FUN_00002898(DAT_000b0e24,param_2);
        FUN_002039f8(auStack_20);
      }
      else {
        (**(code **)(*local_1c + 0x78))();
        iVar2 = (**(code **)(*(int *)param_1[0x52] + 0x30))
                          ((int *)param_1[0x52],param_2,(int)*(char *)(iVar1 + 8));
        if (iVar2 != 0) {
          FUN_002039f8(auStack_20);
          return 1;
        }
        FUN_00002898(DAT_000b0e28,(int)*(char *)(iVar1 + 8),param_2);
        FUN_002039f8(auStack_20);
      }
    }
    return 0;
  }
  FUN_00002898(DAT_000b0e1c,param_2);
  return 0;
}

