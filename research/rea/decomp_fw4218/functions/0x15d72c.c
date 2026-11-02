// rea decompile_all
// name: FUN_0015d72c
// address: 0x15d72c
// body: available
// range: 0x14bf8c-0x14c06b inclusive
// range: 0x15d72c-0x15d7c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0015d72c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = param_7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x14);
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    FUN_0014c63c();
  }
  FUN_00172728(param_1 + 0x40,param_3);
  *(undefined4 *)(param_1 + 0x54) = param_5;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x32;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar3 = *(int *)(param_1 + 0x34);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(iVar3 + 8) == 0) {
      *(int *)(iVar3 + 4) = param_1;
      *(int *)(iVar3 + 8) = param_1;
    }
    else {
      *(int *)(param_1 + 4) = *(int *)(iVar3 + 8);
      *(int *)(*(int *)(iVar3 + 8) + 8) = param_1;
      *(int *)(iVar3 + 8) = param_1;
    }
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  iVar5 = *(int *)(iVar3 + 4);
  do {
    if (iVar5 == 0) {
LAB_0014c010:
      *(short *)(iVar3 + 0x10) = *(short *)(iVar3 + 0x10) + 1;
      FUN_0015da88(param_1);
      if ((uint)*(ushort *)(iVar3 + 0x12) < (*(uint *)(iVar3 + 0xc) & 0xffff)) {
        *(short *)(iVar3 + 0x12) = (short)*(undefined4 *)(iVar3 + 0xc);
      }
      return 1;
    }
    uVar2 = FUN_001be138(iVar5);
    uVar4 = *(ushort *)(iVar3 + 0x10);
    if (uVar2 == uVar4) {
      sVar1 = *(short *)(iVar3 + 0x10) + 1;
      if (sVar1 == 0) {
        uVar4 = 1;
      }
      *(short *)(iVar3 + 0x10) = sVar1;
      if (sVar1 == 0) {
        *(ushort *)(iVar3 + 0x10) = uVar4;
      }
      param_1 = *(int *)(iVar3 + 4);
      goto LAB_0014c010;
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar3 + 4);
    }
    else {
      iVar5 = *(int *)(iVar5 + 8);
    }
  } while( true );
}

