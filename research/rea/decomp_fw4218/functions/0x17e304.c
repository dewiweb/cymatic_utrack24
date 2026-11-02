// rea decompile_all
// name: FUN_0017e304
// address: 0x17e304
// body: available
// range: 0x17e304-0x17e463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0017e304(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_40 [16];
  undefined1 local_30 [8];
  undefined1 auStack_28 [20];
  
  local_30[0] = 0x26;
  iVar1 = FUN_001beecc(param_2);
  if (iVar1 == 0) {
    FUN_0017f430(param_1);
    uVar2 = param_1[0x1a];
    bVar3 = (uVar2 & 0x4000000) != 0;
    if (bVar3) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x14);
    }
    if (bVar3 && uVar2 != 0) {
      do {
        FUN_001c00bc(auStack_40,param_1 + 0x10,0);
        iVar1 = FUN_001bef5c(auStack_40,param_2);
        if (iVar1 == 0) break;
        FUN_00192584(param_1 + 0x10,0);
        FUN_0017e6ac(param_1,auStack_40);
        iVar1 = FUN_001beecc(auStack_40);
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0xb4))(param_1,0,auStack_40);
        }
      } while ((short)param_1[0x14] != 0);
    }
    iVar1 = FUN_0019265c(param_1 + 0x10,param_2,local_30);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xb8))(param_1,0,param_2);
      FUN_00198610(param_1[0x1b] + 0xa8,param_2);
      uVar2 = param_1[0x1a];
      (**(code **)(*(int *)param_1[0x1b] + 0xd4))(auStack_40);
      FUN_0017274c(auStack_28,auStack_40,*(undefined2 *)((int)param_1 + 0xf2));
      FUN_00195090(param_1[9],auStack_28,param_2,~(uVar2 >> 0x19) & 1);
      (**(code **)(*param_1 + 200))(param_1);
      FUN_0018a218(param_1[0x1b]);
    }
  }
  return local_30[0];
}

