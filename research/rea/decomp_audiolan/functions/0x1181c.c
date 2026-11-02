// rea decompile_all
// name: FUN_0001181c
// address: 0x1181c
// body: available
// range: 0x1181c-0x1189f inclusive
// range: 0x11e44-0x11ec7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001181c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint unaff_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  undefined8 uVar7;
  undefined4 uStack_2c;
  uint uStack_28;
  
  piVar1 = DAT_000118a0;
  uStack_28 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  if ((unaff_lr & 1) != 0) {
    uStack_28 = uStack_28 | 0x20;
  }
  uStack_2c = 0;
  iVar3 = *DAT_000118a0;
                    /* WARNING: Could not recover jumptable at 0x00011850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (**(ushort **)(iVar3 + 0xc) != DAT_000118a8) {
    uVar7 = (*DAT_000118ac)();
    return uVar7;
  }
  *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + (*(int *)*DAT_000118b0 - *(int *)(iVar3 + 0x28))
  ;
  piVar2 = DAT_000118a4;
  iVar4 = *DAT_000118a4;
  *(undefined4 **)(iVar3 + 8) = &uStack_2c;
  if (iVar4 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 0x1c);
    *piVar2 = 0;
    *(undefined4 *)(iVar3 + 0x18) = uVar5;
  }
  *piVar1 = 0;
  while (iVar3 = *DAT_00011ec8, iVar3 == 0) {
    if (*DAT_00011ed4 == 0) {
      coproc_moveto_Wait_for_interrupt(0);
    }
  }
  *DAT_00011ecc = iVar3;
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)*DAT_00011ed8;
  piVar6 = *(int **)(iVar3 + 8);
  *DAT_00011ed0 = *(undefined4 *)(iVar3 + 0x18);
  if (*piVar6 == 0) {
    return *(undefined8 *)piVar6;
  }
  return *(undefined8 *)(piVar6 + 2);
}

