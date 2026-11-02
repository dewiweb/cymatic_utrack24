// rea decompile_all
// name: FUN_00189f60
// address: 0x189f60
// body: available
// range: 0x189f60-0x18a0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00189f60(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  uint local_18;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    uVar2 = *(uint *)(param_1 + 0x60) & 0xfdffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60) | 0x2000000;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  if ((*(byte *)(param_1 + 0x148) & 8) != 0) {
    *(uint *)(param_1 + 0x60) =
         (*(uint *)(param_1 + 0x60) + 0x100000 & 0x300000) +
         (*(uint *)(param_1 + 0x60) & 0xffcfffff);
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf7;
  }
  local_18 = param_4 & 0xffffff00;
  iVar3 = FUN_001bff3c(param_1 + 0x88);
  uVar4 = FUN_0018be2c(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  uVar2 = FUN_0018dbb0(param_1 + 0x80,&local_18);
  uVar5 = FUN_0018dbb0(param_1 + 0x88,&local_18);
  *(uint *)(param_1 + 0x68) = uVar5 | uVar2;
  *(uint *)(param_1 + 0x6c) = uVar5 | uVar2;
  if (((*(byte *)(param_1 + 0x148) & 4) == 0) && ((local_18 & 0xff) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x60) | 0x4000000;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60) & 0xfbffffff;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  if (iVar3 == 0) {
    uVar2 = uVar2 & 0xff7fffff;
  }
  else {
    uVar2 = uVar2 | 0x800000;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  if ((uVar2 & 0x40000000) == 0) {
    bVar1 = *(byte *)(param_1 + 0x74);
    bVar6 = (bVar1 & 1) == 0;
    if (bVar6) {
      bVar1 = *(byte *)(param_1 + 0x6c);
    }
    if (!bVar6 || (bVar1 & 1) != 0) {
      bVar6 = true;
      goto LAB_0018a050;
    }
  }
  bVar6 = false;
LAB_0018a050:
  if (bVar6) {
    uVar2 = uVar2 | 0x80000;
  }
  else {
    uVar2 = uVar2 & 0xfff7ffff;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  iVar3 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 100) = uVar2;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x114)) {
    FUN_00189f60(iVar3);
    if ((*(byte *)(iVar3 + 0x60) & 1) == 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | *(uint *)(iVar3 + 100);
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | *(uint *)(iVar3 + 0x74);
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | *(uint *)(iVar3 + 0x6c);
    }
    else {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | *(uint *)(iVar3 + 100) & 0xfffffffe;
    }
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffcfffff;
  return;
}

