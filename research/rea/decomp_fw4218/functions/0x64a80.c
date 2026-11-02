// rea decompile_all
// name: FUN_00064a80
// address: 0x64a80
// body: available
// range: 0x64a80-0x64bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00064a80(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  int *local_20;
  
  puVar1 = (undefined4 *)FUN_000b1210(auStack_28);
  *puVar1 = _DAT_00064bdc;
  uVar2 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar2,s___DataStreamControl_00064bde + 2,auStack_28);
  if (iVar3 == 0) {
    FUN_00002898(DAT_00064bf4);
  }
  else {
    uVar2 = (**(code **)(*(int *)param_1[0x30] + 0xfc))();
    for (; param_2 != 0; param_2 = param_2 - 100) {
      do {
        iVar3 = (**(code **)(*local_20 + 0x44))(local_20,uVar2);
        if (iVar3 == 0) {
          iVar4 = (**(code **)(*local_20 + 0x40))(local_20,uVar2,100);
          if (iVar4 != 0) {
            iVar3 = (**(code **)(*local_20 + 0x44))(local_20,uVar2);
          }
        }
        else {
          (**(code **)(*param_1 + 0x1c))(param_1,100);
        }
        if (*(char *)((int)param_1 + 0xd5) != '\0') {
          *(undefined1 *)(param_1 + 0x35) = 3;
          FUN_000b1228(auStack_28);
          return 0;
        }
        if ((iVar3 != 0) && (*(char *)((int)param_1 + 0xd6) != '\0')) {
          *(undefined1 *)(param_1 + 0x35) = 2;
          FUN_000b1228(auStack_28);
          return 1;
        }
        *(undefined1 *)(param_1 + 0x35) = 1;
      } while (param_2 == 0xffffffff);
      if (param_2 < 100) break;
    }
  }
  FUN_000b1228(auStack_28);
  return 0;
}

