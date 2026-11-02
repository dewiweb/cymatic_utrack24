// rea decompile_all
// name: FUN_0008d04c
// address: 0x8d04c
// body: available
// range: 0x8d04c-0x8d24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0008d04c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined1 auStack_38 [8];
  ushort local_30;
  ushort local_2e;
  int local_2c;
  
  (**(code **)(*param_4 + 0x44))(&local_30,param_4);
  uVar1 = (uint)local_30;
  if ((((uVar1 == *(ushort *)(param_1 + 0x5c)) &&
       (uVar1 = (uint)local_2e, uVar1 == *(ushort *)(param_1 + 0x5e))) &&
      (uVar1 = (uint)*(byte *)(param_1 + 0x1d), uVar1 == 0)) &&
     ((uVar1 = (uint)*(byte *)(param_1 + 0x1c), uVar1 != 0 && (uVar1 == 1)))) {
    for (uVar5 = 0; uVar1 = FUN_0022e4a0(param_1 + 0x50), uVar5 < uVar1; uVar5 = uVar5 + 1) {
      FUN_0023cff0(param_1 + 0x50,uVar5);
      iVar2 = FUN_001b9eb8();
      if ((iVar2 == local_2c) &&
         (iVar2 = FUN_0023cff0(param_1 + 0x50,uVar5), *(char *)(iVar2 + 0xd) == '\0')) {
        iVar2 = FUN_0023cff0(param_1 + 0x50,uVar5);
        *(undefined1 *)(iVar2 + 0xe) = 0;
        FUN_001726d4(auStack_44,param_1 + 0x5c);
        FUN_0023cff0(param_1 + 0x50,uVar5);
        local_40 = FUN_001b9eb8();
        FUN_0023cff0(param_1 + 0x50,uVar5);
        uVar3 = FUN_001b9eb8();
        FUN_00002898(DAT_0008d24c,param_3,uVar5 + 1,uVar3);
        piVar4 = *(int **)(param_1 + 0x68);
        piVar6 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0x1ec));
        (**(code **)(*(int *)((int)piVar4 + *(int *)(*piVar4 + -0x1ec)) + 0xec))
                  (auStack_38,(int)piVar4 + *(int *)(*piVar4 + -0x1ec),1);
        uVar3 = FUN_001beccc(auStack_38);
        (**(code **)(*piVar6 + 0x1a4))
                  (piVar6,auStack_44,DAT_0008d258,DAT_0008d254,6,uVar5 + 1 & 0xffff,1,uVar3,
                   DAT_0008d250);
        FUN_00171ea4(auStack_38);
        uVar3 = FUN_001d06b8();
        uVar1 = FUN_0023cff0(param_1 + 0x50,uVar5);
        *(undefined4 *)(uVar1 + 0x14) = uVar3;
        return uVar1;
      }
    }
  }
  return uVar1;
}

