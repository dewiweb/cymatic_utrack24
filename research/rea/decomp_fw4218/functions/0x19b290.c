// rea decompile_all
// name: FUN_0019b290
// address: 0x19b290
// body: available
// range: 0x19b290-0x19b47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019b290(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  undefined4 uVar5;
  char local_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar5 = FUN_0019b874(param_1);
  }
  *(undefined1 *)(param_1 + 0xeb) = 0;
  FUN_0015111c(param_1 + 0x90);
  uVar1 = 0;
  if (*(short *)(param_1 + 0x74) != 0) {
    uVar1 = 0x20;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x188);
  *(ushort *)(param_1 + 0xdc) = uVar1 | 0x3784;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  (**(code **)(**(int **)(param_1 + 0x4c) + 0xd4))(auStack_48);
  FUN_0017274c(auStack_58,auStack_48,*(undefined2 *)(param_1 + 0xe8));
  FUN_00172810(param_1 + 0xac,auStack_58);
  uVar3 = extraout_r1;
  if ((*(ushort *)(param_1 + 0x74) & 0x8000) != 0) {
    FUN_0014d4e0(param_1 + 0x90,1);
    uVar3 = extraout_r1_00;
  }
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    FUN_0014d9ec(param_1 + 0x90,*(undefined4 *)(param_1 + 0x78));
    uVar3 = extraout_r1_01;
  }
  if ((*(byte *)(param_1 + 0x74) & 2) != 0) {
    FUN_0014d764(param_1 + 0x90,uVar3,*(undefined4 *)(param_1 + 0x80),
                 *(undefined4 *)(param_1 + 0x84));
  }
  uVar3 = FUN_001c004c(param_1 + 0x54,1);
  iVar2 = FUN_0014d51c(param_1 + 0x90,uVar3);
  if (iVar2 == 0) {
    uVar4 = 0;
    if (*(short *)(param_1 + 100) != 0) {
      do {
        FUN_001c00bc(auStack_38,param_1 + 0x54,uVar4);
        local_60[0] = '\0';
        iVar2 = FUN_001beecc(auStack_38);
        if (((iVar2 == 0) && (iVar2 = FUN_001bef5c(auStack_38,param_2), iVar2 != 0)) &&
           (iVar2 = FUN_001bff74(param_1 + 0x54,uVar4,local_60), iVar2 != 0)) {
          if (local_60[0] != '\0') {
            uVar5 = 0xd;
          }
          iVar2 = FUN_0014d48c(param_1 + 0x90,auStack_38);
          if (iVar2 != 0) {
            (**(code **)(**(int **)(param_1 + 0x4c) + 0xd4))(auStack_28);
            FUN_0018d280(*(int *)(param_1 + 0x24) + 0x584,0,auStack_28,
                         *(undefined2 *)(param_1 + 0xe8));
            uVar5 = 0x17;
            break;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_1 + 100));
    }
  }
  else {
    uVar5 = 0x17;
  }
  if (*(short *)(param_1 + 0xa2) == 0) {
    uVar5 = 0x15;
    *(undefined1 *)(param_1 + 0xeb) = 1;
  }
  return uVar5;
}

