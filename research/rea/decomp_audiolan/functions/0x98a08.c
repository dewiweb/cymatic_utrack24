// rea decompile_all
// name: FUN_00098a08
// address: 0x98a08
// body: available
// range: 0x98a08-0x98a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

int FUN_00098a08(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int *unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if ((bool)in_ZR || in_NG != in_OV) {
    in_CY = (byte)((uint)param_1 >> 0x10) & 1;
    param_3 = param_2 & param_1 << 0x10;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if ((bool)in_ZR) {
    *(int *)(unaff_r10 + 4) = param_1;
    *(undefined4 *)(unaff_r10 + 8) = unaff_r11;
    *(undefined4 *)(unaff_r10 + 0xc) = in_r12;
    *(BADSPACEBASE **)(unaff_r10 + 0x10) = register0x00000054;
    *(undefined4 *)(unaff_r10 + 0x14) = unaff_lr;
  }
  if ((bool)in_NG) {
    unaff_lr = 0x98a14;
    uVar4 = func_0x0030ca4c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  piVar2 = (int *)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)uVar4;
  if ((bool)in_NG) {
    param_3 = unaff_r10 + (int)puVar1 * -0x20;
  }
  if ((bool)in_CY) {
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x7c)) = unaff_r4[0x12];
    param_6 = 1;
    param_5 = param_4;
    piVar2 = (int *)FUN_0012319c(puVar1,unaff_r4 + 1,0x8201,param_3);
    iVar3 = *unaff_r4;
    *piVar2 = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x10)) = unaff_r4[9];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0xc)) = unaff_r4[8];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x14)) = unaff_r4[10];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x18)) = unaff_r4[0xb];
    iVar3 = FUN_0010f4c4((int)piVar2 + 0x82);
    *(undefined2 *)(iVar3 + -0x14) = unaff_r5;
    *(undefined2 *)(iVar3 + -0x12) = unaff_r5;
    FUN_00003860(iVar3 + -0x10,0x10);
    FUN_0016d8f0(iVar3);
    return iVar3 + -0x82;
  }
  if ((bool)in_NG) {
    unaff_lr = 0x98a20;
    puVar1 = (undefined4 *)func_0x0028fe4c();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR) {
    coprocessor_function(6,0xc,6,in_cr0,in_cr9,in_cr9);
  }
  if (!(bool)in_OV) {
    *puVar1 = unaff_lr;
    puVar1[-1] = in_r12;
    puVar1[-2] = unaff_r11;
    puVar1[-3] = unaff_r10;
    puVar1[-4] = unaff_r6;
    puVar1[-5] = unaff_r4;
    puVar1[-6] = param_4;
    puVar1[-7] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

