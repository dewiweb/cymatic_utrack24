// rea decompile_all
// name: FUN_000fb4a8
// address: 0xfb4a8
// body: available
// range: 0xfb4a8-0xfb66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fb4a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [20];
  undefined4 local_44;
  undefined8 local_40;
  undefined1 auStack_38 [20];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar6 = 0;
  if (iVar1 != 0) {
    FUN_001b8b80(auStack_38,param_1);
    iVar1 = FUN_001b23c8(auStack_38);
    FUN_000649bc(auStack_38,iVar1 + 2);
    iVar1 = FUN_001b2390(auStack_38);
    FUN_000649d4(auStack_38,iVar1 + 4);
    piVar2 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_38,1,1,1);
    uVar7 = FUN_002492ec(param_2);
    local_40 = FUN_00248dc0(0,DAT_000fb66c,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    puVar3 = (undefined4 *)FUN_0024456c(param_3);
    for (; puVar5 = (undefined4 *)FUN_0024453c(param_3), puVar5 != puVar3; puVar3 = puVar3 + 1) {
      local_44 = *puVar3;
      uVar7 = FUN_00249204(local_44);
      FUN_00249444((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(undefined4)local_40,local_40._4_4_,
                   uVar7);
      iVar1 = FUN_00249194();
      FUN_001b8b80(auStack_58,param_1);
      iVar4 = FUN_001b23c8(auStack_58);
      FUN_000649bc(auStack_58,iVar4 + 2);
      iVar4 = FUN_001b2390(auStack_58);
      FUN_000649d4(auStack_58,iVar4 + 4);
      iVar4 = FUN_001b23b0(auStack_58);
      FUN_000649c4(auStack_58,iVar4 + iVar1 + 3);
      iVar1 = FUN_001b23b0(auStack_58);
      FUN_000649cc(auStack_58,iVar1 + 2);
      piVar2 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar2 + 0x38))(piVar2,auStack_58,1,0,1);
      FUN_00064a58(auStack_58);
    }
    uVar6 = FUN_00064a58(auStack_38);
  }
  return uVar6;
}

