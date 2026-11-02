// rea decompile_all
// name: FUN_000329d0
// address: 0x329d0
// body: available
// range: 0x329d0-0x32bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000329d0(int *param_1,byte *param_2,undefined4 param_3,byte param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  
  if ((param_6 == 1) && (iVar4 = FUN_00025ae0(), iVar4 == 1)) {
    *param_2 = (param_4 & 0xf) + 0x10;
  }
  else {
    *param_2 = param_4 & 0xf;
  }
  param_2[1] = 2;
  uVar3 = FUN_0003586c(param_5);
  param_2[2] = (byte)uVar3;
  param_2[3] = (byte)((ushort)uVar3 >> 8);
  param_2[4] = *(byte *)(*(int *)(*param_1 + 0x274) + 0x13);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  bVar2 = *param_2 & 0xf;
  if ((*param_2 & 0xf) == 0) {
    cVar1 = **(char **)(*param_1 + 0x274);
joined_r0x00032a40:
    if (cVar1 != '\0') {
      param_2[6] = param_2[6] | 2;
    }
  }
  else {
    if (bVar2 == 3) {
      cVar1 = **(char **)(*param_1 + 0x274);
      goto joined_r0x00032a40;
    }
    if (bVar2 == 0xb) {
      if (*(char *)(*(int *)(*param_1 + 0x278) + 2) != '\0') {
        param_2[7] = param_2[7] | 1;
      }
      if (*(char *)(*(int *)(*param_1 + 0x278) + 3) != '\0') {
        param_2[7] = param_2[7] | 2;
      }
      if (*(char *)(*(int *)(*param_1 + 0x278) + 4) != '\0') {
        param_2[7] = param_2[7] | 4;
      }
      if (*(char *)(*(int *)(*param_1 + 0x278) + 5) != '\0') {
        param_2[7] = param_2[7] | 8;
      }
      if (*(char *)(*(int *)(*param_1 + 0x278) + 6) != '\0') {
        param_2[7] = param_2[7] | 0x10;
      }
      if (*(char *)(*(int *)(*param_1 + 0x278) + 7) != '\0') {
        param_2[7] = param_2[7] | 0x20;
      }
    }
  }
  param_2[0x14] = **(byte **)(*param_1 + 0x280);
  param_2[0x15] = *(byte *)(*(int *)(*param_1 + 0x280) + 1);
  param_2[0x16] = *(byte *)(*(int *)(*param_1 + 0x280) + 2);
  param_2[0x17] = *(byte *)(*(int *)(*param_1 + 0x280) + 3);
  param_2[0x18] = *(byte *)(*(int *)(*param_1 + 0x280) + 4);
  param_2[0x19] = *(byte *)(*(int *)(*param_1 + 0x280) + 5);
  param_2[0x1a] = *(byte *)(*(int *)(*param_1 + 0x280) + 6);
  param_2[0x1b] = *(byte *)(*(int *)(*param_1 + 0x280) + 7);
  param_2[0x1c] = *(byte *)(*(int *)(*param_1 + 0x280) + 8);
  param_2[0x1d] = *(byte *)(*(int *)(*param_1 + 0x280) + 9);
  uVar3 = FUN_0003586c(param_3);
  param_2[0x1e] = (byte)uVar3;
  param_2[0x1f] = (byte)((ushort)uVar3 >> 8);
  bVar2 = *param_2;
  pbVar6 = param_2 + 0x20;
  bVar5 = bVar2 & 0xf;
  if (bVar5 == 8) {
    *pbVar6 = 2;
    goto LAB_00032b66;
  }
  if (bVar5 < 9) {
    if (((bVar2 & 0xf) != 0) && (bVar5 != 1)) {
LAB_00032b62:
      *pbVar6 = 5;
      goto LAB_00032b66;
    }
  }
  else if (bVar5 == 9) {
    bVar5 = 3;
  }
  else {
    if (bVar5 != 0xd) goto LAB_00032b62;
    bVar5 = 4;
  }
  *pbVar6 = bVar5;
LAB_00032b66:
  bVar5 = bVar2 & 0xf;
  if (((bVar2 & 0xf) == 0) || (bVar5 == 8)) {
    bVar2 = *(byte *)(*(int *)(*param_1 + 0x280) + 0x1c);
  }
  else if (bVar5 == 9) {
    bVar2 = *(byte *)(*(int *)(*param_1 + 0x280) + 0xb);
  }
  else if (bVar5 == 0xb) {
    bVar2 = *(byte *)(*(int *)(*param_1 + 0x280) + 0x18);
  }
  else {
    bVar2 = 0x7f;
  }
  param_2[0x21] = bVar2;
  return;
}

