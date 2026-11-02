// rea decompile_all
// name: FUN_0015a49c
// address: 0x15a49c
// body: available
// range: 0x15a49c-0x15a853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0015a49c(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  
  FUN_00155054();
  *(undefined2 *)*param_2 = *(undefined2 *)(param_1 + 0x24);
  iVar2 = *param_2;
  *param_2 = iVar2 + 2;
  *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 0x2c);
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(param_1 + 0x2d);
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  FUN_000039e0(iVar2 + 1,param_1 + 0x2e,6);
  puVar6 = (undefined1 *)(*param_2 + 6);
  *param_2 = (int)puVar6;
  bVar1 = *(byte *)(param_1 + 0x24) & 7;
  if (bVar1 == 1 || bVar1 == 2) {
    *puVar6 = *(undefined1 *)(param_1 + 0x38);
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(param_1 + 0x39);
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    FUN_000039e0(iVar2 + 1,param_1 + 0x3a,6);
    puVar6 = (undefined1 *)(*param_2 + 6);
    *param_2 = (int)puVar6;
  }
  puVar3 = (undefined4 *)((uint)(puVar6 + 3) & 0xfffffffc);
  *param_2 = (int)puVar3;
  uVar5 = *(ushort *)(param_1 + 0x24) & 0xff8;
  if (uVar5 == 8) {
    *puVar3 = *(undefined4 *)(param_1 + 0x50);
    iVar2 = *param_2;
    *param_2 = iVar2 + 4;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x54);
    iVar2 = *param_2;
    *param_2 = iVar2 + 4;
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 0x48);
    iVar2 = *param_2;
    *param_2 = iVar2 + 2;
    *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(param_1 + 0x4a);
    iVar2 = *param_2;
    *param_2 = iVar2 + 2;
    *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(param_1 + 0x4c);
    iVar2 = *param_2;
    *param_2 = iVar2 + 2;
    *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(param_1 + 0x4e);
    iVar2 = *param_2;
    *param_2 = iVar2 + 2;
    *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(param_1 + 0x6e);
    iVar2 = *param_2;
    *param_2 = iVar2 + 2;
    uVar5 = *(ushort *)(param_1 + 0x6e);
    FUN_000039e0(iVar2 + 2,*(undefined4 *)(param_1 + 0x68),(uint)uVar5);
    puVar4 = (undefined2 *)(*param_2 + (uint)uVar5 + 1 & 0xfffffffe);
    *param_2 = (int)puVar4;
    *puVar4 = *(undefined2 *)(param_1 + 0x58);
    iVar2 = *param_2 + 2;
    goto LAB_0015a65c;
  }
  if (uVar5 == 0x10) {
    uVar7 = *(undefined4 *)(param_1 + 0x4c);
    *puVar3 = *(undefined4 *)(param_1 + 0x48);
    puVar3[1] = uVar7;
    iVar2 = *param_2;
    puVar3 = (undefined4 *)(iVar2 + 8);
    *param_2 = (int)puVar3;
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    *puVar3 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    iVar2 = *param_2;
    puVar3 = (undefined4 *)(iVar2 + 8);
    *param_2 = (int)puVar3;
    uVar7 = *(undefined4 *)(param_1 + 0x5c);
    *puVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    iVar2 = *param_2;
    *param_2 = iVar2 + 8;
    *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(param_1 + 0x40);
    puVar3 = (undefined4 *)(*param_2 + 2);
LAB_0015a76c:
    *param_2 = (int)puVar3;
  }
  else {
    if (uVar5 == 0x18) {
      *puVar3 = *(undefined4 *)(param_1 + 0x4c);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x50);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x54);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x58);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x5c);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x60);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 0x40);
      iVar2 = *param_2;
      *param_2 = iVar2 + 2;
      *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 0x48);
      iVar2 = *param_2;
      *param_2 = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1) = 0;
      puVar3 = (undefined4 *)(*param_2 + 1);
      goto LAB_0015a76c;
    }
    if (uVar5 == 0x20) {
      *puVar3 = *(undefined4 *)(param_1 + 0x4c);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x50);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x54);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x58);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x5c);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x60);
      iVar2 = *param_2;
      *param_2 = iVar2 + 4;
      *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 0x40);
      iVar2 = *param_2;
      *param_2 = iVar2 + 2;
      *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_1 + 0x48);
      iVar2 = *param_2;
      *param_2 = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1) = 0;
      puVar3 = (undefined4 *)(*param_2 + 1);
      *param_2 = (int)puVar3;
    }
  }
  *(undefined2 *)puVar3 = *(undefined2 *)(param_1 + 0x6e);
  iVar2 = *param_2;
  *param_2 = iVar2 + 2;
  uVar5 = *(ushort *)(param_1 + 0x6e);
  FUN_000039e0(iVar2 + 2,*(undefined4 *)(param_1 + 0x68),(uint)uVar5);
  iVar2 = *param_2 + (uint)uVar5;
LAB_0015a65c:
  *param_2 = iVar2;
  return;
}

