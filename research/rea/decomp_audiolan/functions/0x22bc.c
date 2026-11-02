// rea decompile_all
// name: FUN_000022bc
// address: 0x22bc
// body: available
// range: 0x22bc-0x230f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000022bc(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  FUN_0000227e();
  uVar4 = FUN_0017d678(param_1,param_2);
  puVar1 = DAT_00002310;
  *DAT_00002310 = uVar4;
  *(undefined4 *)(puVar1 + 1) = extraout_r2;
  *(undefined4 *)((int)puVar1 + 0xc) = extraout_r3;
  *(undefined4 *)(puVar1 + 2) = unaff_r4;
  *(undefined4 *)((int)puVar1 + 0x14) = unaff_r5;
  *(undefined4 *)(puVar1 + 3) = unaff_r6;
  *(undefined4 *)((int)puVar1 + 0x1c) = unaff_r7;
  *(undefined4 *)(puVar1 + 4) = unaff_r8;
  *(undefined4 *)((int)puVar1 + 0x24) = unaff_r9;
  *(undefined4 *)(puVar1 + 5) = unaff_r10;
  *(undefined4 *)((int)puVar1 + 0x2c) = unaff_r11;
  *DAT_00002314 = 0x22cc;
  *DAT_00002318 = uVar3;
  iVar2 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  uVar5 = CONCAT44(iVar2,iVar2) | 0x1300000000;
  *(BADSPACEBASE **)DAT_0000231c = register0x00000054;
  do {
    uVar5 = FUN_00171280((int)uVar5,(int)(uVar5 >> 0x20));
  } while( true );
}

