// rea decompile_all
// name: FUN_000ceb40
// address: 0xceb40
// body: available
// range: 0xceb40-0xcee9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000ceb40(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x14) == 0x66) {
    FUN_00064a34(auStack_34);
    FUN_000649bc(auStack_34,0x11);
    iVar1 = FUN_001b2390(auStack_34);
    FUN_000649d4(auStack_34,iVar1 + 0xd);
    FUN_000649c4(auStack_34,0x9a);
    iVar1 = FUN_001b23b0(auStack_34);
    FUN_000649cc(auStack_34,iVar1 + 0x11);
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    (**(code **)(*piVar2 + 0x38))(piVar2,auStack_34,1,1,1);
    iVar1 = FUN_00064a58(auStack_34);
  }
  else {
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    (**(code **)(*piVar2 + 0x34))(piVar2,0x9a,0x11,0x5f,0,0xffffffff);
    if (*(int *)(param_1 + 0x14) < 100) {
      FUN_0005cca8(auStack_50);
      FUN_000028cc(auStack_58,&DAT_000cee9c,*(undefined4 *)(param_1 + 0x14));
      uVar3 = FUN_00201f28(auStack_38,0);
      uVar3 = FUN_001aaf10(auStack_30,auStack_58,uVar3);
      FUN_00225c84(auStack_50,uVar3);
      FUN_001aafac(auStack_30);
      FUN_00201f54(auStack_38);
      uVar3 = FUN_00225ca8(auStack_50);
      FUN_001aaf30(auStack_68,uVar3);
      FUN_000d7ae4(auStack_6c,0,0,0,0);
      FUN_000d7acc(auStack_6c,2);
      FUN_00064a34(auStack_80);
      piVar2 = (int *)FUN_0022bc90(param_1 + 4);
      (**(code **)(*piVar2 + 0x58))(piVar2,auStack_80);
      FUN_000649bc(auStack_80,0x14);
      iVar1 = FUN_001b2390(auStack_80);
      FUN_000649d4(auStack_80,iVar1 + 7);
      FUN_000649c4(auStack_80,0x9d);
      iVar1 = FUN_001b23b0(auStack_80);
      FUN_000649cc(auStack_80,iVar1 + 0xb);
      piVar2 = (int *)FUN_0022bc90(param_1 + 4);
      (**(code **)(*piVar2 + 0x28))(piVar2,auStack_80,0,0,auStack_68,auStack_6c,0,0,0,0xffffffff);
      FUN_00064a58(auStack_80);
      FUN_000d7afc(auStack_6c);
      FUN_001aafac(auStack_68);
      iVar1 = FUN_0005ccd0(auStack_50);
    }
    else if (*(int *)(param_1 + 0x14) == 100) {
      piVar2 = (int *)FUN_0022bc90(param_1 + 4);
      iVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0xa0,0x14,0xc,0,0xffffffff);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0x65) {
        FUN_00064a34(auStack_34);
        FUN_000649bc(auStack_34,0x14);
        iVar1 = FUN_001b2390(auStack_34);
        FUN_000649d4(auStack_34,iVar1 + 7);
        FUN_000649c4(auStack_34,0xa0);
        iVar1 = FUN_001b23b0(auStack_34);
        FUN_000649cc(auStack_34,iVar1 + 5);
        piVar2 = (int *)FUN_0022bc90(param_1 + 4);
        (**(code **)(*piVar2 + 0x38))(piVar2,auStack_34,1,1,1);
        iVar1 = FUN_00064a58(auStack_34);
      }
    }
  }
  return iVar1;
}

