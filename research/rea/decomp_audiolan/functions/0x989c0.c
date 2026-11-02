// rea decompile_all
// name: FUN_000989c0
// address: 0x989c0
// body: available
// range: 0x989c0-0x98a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000989c4) */

int FUN_000989c0(byte *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                undefined4 param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  int *unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r8;
  uint unaff_r10;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined1 uVar5;
  byte bVar6;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined8 uVar7;
  
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG) {
    param_1 = param_1 + -unaff_r10;
  }
  uVar5 = false;
  if (in_ZR) {
    in_OV = SBORROW4(unaff_r11,0x4000000) != SBORROW4(unaff_r11 + 0xfc000000,1);
    param_3 = unaff_r11 + 0xfbffffff;
    in_NG = (int)param_3 < 0;
    uVar5 = param_3 == 0;
  }
  bVar6 = in_ZR && 0x4000000 < unaff_r11;
  if ((bool)uVar5 || in_NG != in_OV) {
    unaff_r4 = (int *)(unaff_r10 & 0xa0000009);
  }
  if ((bool)bVar6) {
    param_1 = (byte *)((uint)param_1 & 0xffdb7fff);
  }
  if (!(bool)in_OV) {
    unaff_r4 = (int *)(unaff_r10 & unaff_r10 << (param_4 & 0xff));
  }
  pbVar1 = param_1;
  if ((bool)uVar5) {
    pbVar1 = (byte *)((int)param_1 * 0x10001);
    *(int *)param_1 = unaff_r8;
  }
  if (!in_ZR || 0x4000000 >= unaff_r11) {
    pbVar1 = (byte *)((int)pbVar1 * 0x20000001);
  }
  if ((bool)uVar5) {
    unaff_lr = 0x989ec;
    uVar7 = func_0x0052a7b0();
    param_2 = (uint)((ulonglong)uVar7 >> 0x20);
    pbVar1 = (byte *)uVar7;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_OV) {
    param_4 = unaff_r10 & ((uint)pbVar1 >> 5 | (int)pbVar1 << 0x1b);
  }
  if ((bool)uVar5) {
    unaff_r8 = *(int *)(param_3 - 0x802);
  }
  if (!(bool)bVar6) {
    pbVar1 = pbVar1 + 0x920;
  }
  if ((bool)bVar6 && !(bool)uVar5) {
    *(undefined4 *)pbVar1 = unaff_lr;
    *(BADSPACEBASE **)(pbVar1 + -4) = register0x00000054;
    *(undefined4 *)(pbVar1 + -8) = in_r12;
    *(undefined4 *)(pbVar1 + -0xc) = unaff_r6;
    *(uint *)(pbVar1 + -0x10) = param_4;
    *(uint *)(pbVar1 + -0x14) = param_2;
  }
  if ((bool)uVar5) {
    coprocessor_function(6,8,4,in_cr0,in_cr0,in_cr0);
  }
  if (!(bool)in_OV) {
    param_4 = unaff_r8 + (int)pbVar1 * 2;
  }
  if ((bool)in_NG) {
    pbVar1 = pbVar1 + -param_4;
    param_3 = (uint)*pbVar1;
  }
  uVar7 = CONCAT44(param_2,pbVar1);
  if ((bool)uVar5 || in_NG != in_OV) {
    bVar6 = (byte)((uint)pbVar1 >> 0x10) & 1;
    param_3 = param_2 & (int)pbVar1 << 0x10;
    in_NG = (int)param_3 < 0;
    uVar5 = param_3 == 0;
  }
  if ((bool)uVar5) {
    *(byte **)(unaff_r10 + 4) = pbVar1;
    *(uint *)(unaff_r10 + 8) = unaff_r11;
    *(undefined4 *)(unaff_r10 + 0xc) = in_r12;
    *(BADSPACEBASE **)(unaff_r10 + 0x10) = register0x00000054;
    *(undefined4 *)(unaff_r10 + 0x14) = unaff_lr;
  }
  if ((bool)in_NG) {
    unaff_lr = 0x98a14;
    uVar7 = func_0x0030ca4c();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  piVar3 = (int *)((ulonglong)uVar7 >> 0x20);
  puVar2 = (undefined4 *)uVar7;
  if ((bool)in_NG) {
    param_3 = unaff_r10 + (int)puVar2 * -0x20;
  }
  if (!(bool)bVar6) {
    if ((bool)in_NG) {
      unaff_lr = 0x98a20;
      puVar2 = (undefined4 *)func_0x0028fe4c();
      param_4 = extraout_r3_01;
      in_r12 = extraout_r12_01;
    }
    if ((bool)uVar5) {
      coprocessor_function(6,0xc,6,in_cr0,in_cr9,in_cr9);
    }
    if (!(bool)in_OV) {
      *puVar2 = unaff_lr;
      puVar2[-1] = in_r12;
      puVar2[-2] = unaff_r11;
      puVar2[-3] = unaff_r10;
      puVar2[-4] = unaff_r6;
      puVar2[-5] = unaff_r4;
      puVar2[-6] = param_4;
      puVar2[-7] = puVar2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x7c)) = unaff_r4[0x12];
  param_6 = 1;
  param_5 = param_4;
  piVar3 = (int *)FUN_0012319c(puVar2,unaff_r4 + 1,0x8201,param_3);
  iVar4 = *unaff_r4;
  *piVar3 = iVar4;
  *(int *)((int)piVar3 + *(int *)(iVar4 + -0x10)) = unaff_r4[9];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0xc)) = unaff_r4[8];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x14)) = unaff_r4[10];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x18)) = unaff_r4[0xb];
  iVar4 = FUN_0010f4c4((int)piVar3 + 0x82);
  *(undefined2 *)(iVar4 + -0x14) = unaff_r5;
  *(undefined2 *)(iVar4 + -0x12) = unaff_r5;
  FUN_00003860(iVar4 + -0x10,0x10);
  FUN_0016d8f0(iVar4);
  return iVar4 + -0x82;
}

