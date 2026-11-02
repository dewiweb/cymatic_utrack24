// rea decompile_all
// name: FUN_0017eba8
// address: 0x17eba8
// body: available
// range: 0x17eba8-0x17ee53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0017eba8(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar5;
  uint uVar6;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  char local_18 [4];
  
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0017f430(param_1);
  }
  *(byte *)(param_1 + 0xf6) = *(byte *)(param_1 + 0xf6) & 0xfe;
  FUN_0015111c(param_1 + 0x88);
  uVar3 = 0;
  if (*(short *)(param_1 + 0xf0) != 0) {
    uVar3 = 0x20;
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x188);
  *(ushort *)(param_1 + 0xd4) = uVar3 | 0x3784;
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0xd4))(auStack_28);
  FUN_0017274c(auStack_38,auStack_28,*(undefined2 *)(param_1 + 0xf2));
  FUN_00172810(param_1 + 0xa4,auStack_38);
  uVar4 = extraout_r1;
  if ((*(ushort *)(param_1 + 0xf0) & 0x8000) != 0) {
    FUN_0014d4e0(param_1 + 0x88,1);
    uVar4 = extraout_r1_00;
  }
  if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
    FUN_0014d9ec(param_1 + 0x88,*(undefined4 *)(param_1 + 0x80));
    uVar4 = extraout_r1_01;
  }
  if ((*(byte *)(param_1 + 0xf0) & 2) != 0) {
    FUN_0014d764(param_1 + 0x88,uVar4,*(undefined4 *)(param_1 + 0x78),
                 *(undefined4 *)(param_1 + 0x7c));
  }
  iVar5 = 0;
  uVar4 = FUN_001c004c(param_1 + 0x40,1);
  iVar1 = FUN_0014d51c(param_1 + 0x88,uVar4);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(short *)(param_1 + 0x50) != 0) {
      do {
        local_18[0] = '\0';
        iVar1 = FUN_001bff74(param_1 + 0x40,uVar2,local_18);
        if (iVar1 != 0) {
          if (local_18[0] != '\0') {
            iVar5 = 0xd;
          }
          FUN_001c00bc(auStack_28,param_1 + 0x40,uVar2);
          iVar1 = FUN_001beecc(auStack_28);
          if (iVar1 == 0) {
            FUN_0014d48c(param_1 + 0x88,auStack_28);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x50));
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xd4))(auStack_28);
    FUN_0018d280(*(int *)(param_1 + 0x24) + 0x584,0,auStack_28,*(undefined2 *)(param_1 + 0xf2));
    iVar5 = 0x17;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xf6);
  if ((*(byte *)(param_1 + 0xf6) & 2) != 0) {
    if (iVar5 != 0 && iVar5 != 0xd) {
      return iVar5;
    }
    uVar4 = FUN_001c004c(param_1 + 0x54,1);
    iVar1 = FUN_0014f004(param_1 + 0x88,uVar4);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0xd4))(auStack_28);
      FUN_0018d280(*(int *)(param_1 + 0x24) + 0x584,1,auStack_28,*(undefined2 *)(param_1 + 0xf2));
      return 0x18;
    }
    uVar6 = 0;
    uVar2 = 0;
    if (*(short *)(param_1 + 100) != 0) {
      do {
        local_18[0] = '\0';
        iVar1 = FUN_001bff74(param_1 + 0x54,uVar6,local_18);
        if (iVar1 != 0) {
          if (local_18[0] != '\0') {
            iVar5 = 0xd;
          }
          FUN_001c00bc(auStack_28,param_1 + 0x54,uVar6);
          FUN_0014eef4(param_1 + 0x88,auStack_28);
        }
        uVar2 = (uint)*(ushort *)(param_1 + 100);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  if (iVar5 == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x9a);
  }
  if ((iVar5 == 0 && uVar2 == 0) && (*(short *)(param_1 + 0xa2) == 0)) {
    iVar5 = 0x15;
  }
  return iVar5;
}

