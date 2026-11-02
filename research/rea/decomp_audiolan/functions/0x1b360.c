// rea decompile_all
// name: FUN_0001b360
// address: 0x1b360
// body: available
// range: 0x1b360-0x1b49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001b360(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  iVar1 = param_2 + 0x130;
  iVar2 = FUN_0003b48a(iVar1,*(int *)(param_3 + 0x20) + 4);
  uVar3 = *(uint *)(param_2 + 0xb0);
  iVar7 = param_1 + 0x37;
  if ((uVar3 < 10) && (iVar2 == 0)) {
    if (*DAT_0001b4b8 != 0) {
      uVar4 = FUN_0002272c(param_3,*(int *)(param_3 + 0x20) + 4,iVar7);
      uVar5 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
      FUN_00024642(3,DAT_0001b4bc,param_2,iVar1,uVar5,*(undefined4 *)(param_2 + 0xb0),uVar4);
    }
    FUN_0019a220(param_1,param_2);
    uVar6 = FUN_00020a0a(*(int *)(param_3 + 0x20) + 4,*(int *)(param_3 + 0x20) + 0x104);
    iVar2 = param_2 + 0x120;
    if (uVar6 < 0x101) {
      FUN_001952f0(iVar1,*(int *)(param_3 + 0x20) + 4);
    }
    else {
      *(undefined1 *)(param_2 + 0x130) = 0;
    }
    uVar4 = FUN_000209c2(iVar1);
    *(undefined4 *)(param_2 + 4) = uVar4;
    if ((*(short *)(iVar2 + 0xe) != 0) && (iVar2 = FUN_00023df0(iVar1), iVar2 != 0)) {
      if (*DAT_0001b4b8 != 0) {
        uVar4 = FUN_0002272c(param_3,*(int *)(param_3 + 0x20) + 4,iVar7);
        uVar5 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
        FUN_00024642(3,DAT_0001b4c0,param_2,iVar1,uVar5,uVar4);
      }
      *(undefined4 *)(param_2 + 0x114) = *DAT_0001b4c4;
    }
    FUN_00199948(param_1,param_2);
    *(uint *)(param_2 + 0xb0) = uVar3 + 1;
    return;
  }
  uVar4 = FUN_0002272c(param_3,*(int *)(param_3 + 0x20) + 4,iVar7);
  uVar5 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
  if (iVar2 == 0) {
    pcVar8 = &DAT_0001b4b0;
  }
  else {
    pcVar8 = s__Self_Referential__0001b49c;
  }
  FUN_00024642(0,DAT_0001b4b4,param_2,iVar1,uVar5,*(undefined4 *)(param_2 + 0xb0),pcVar8,uVar4);
  return;
}

