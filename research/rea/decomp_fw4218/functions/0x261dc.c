// rea decompile_all
// name: FUN_000261dc
// address: 0x261dc
// body: available
// range: 0x261dc-0x2625d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000261dc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_24 [4];
  undefined4 *puVar8;
  
  iVar3 = DAT_00026260;
  local_24[3] = param_4;
  local_24[2] = param_3;
  iVar1 = DAT_00026260 + -0x24;
  puVar7 = (undefined4 *)((int)local_24 + DAT_00026260);
  puVar8 = (undefined4 *)((int)local_24 + DAT_00026260);
  iVar5 = DAT_00026264 + DAT_00026260 + -0x24;
  iVar6 = *(int *)((int)local_24 + iVar5 + 0x2c);
  local_24[0] = param_1;
  local_24[1] = param_2;
  FUN_0002a1c6(0,DAT_00026268,iVar6,*(undefined4 *)((int)local_24 + iVar5 + 0x30));
  *(int *)((int)local_24 + iVar3 + 0xc) = *(int *)(&stack0x00000040 + DAT_0002626c + iVar3) + 0x37;
  for (iVar5 = 0; iVar5 < iVar6; iVar5 = iVar5 + 1) {
    if (param_3 == 0) goto LAB_0002624e;
    *(undefined4 *)((int)local_24 + iVar3 + 4) = 0xc0;
    iVar2 = DAT_0002626c + iVar1;
    *(undefined1 **)((int)local_24 + iVar3 + 8) = &stack0xffffffec + iVar3;
    *puVar7 = 0;
    param_3 = FUN_000279c8(*(undefined4 *)(&stack0x00000040 + iVar2 + 0x24),
                           *(undefined4 *)(&stack0x00000044 + iVar2 + 0x24),param_3,
                           *(undefined4 *)(&stack0x0000004c + iVar2 + 0x24));
    if (param_3 != 0) {
      uVar4 = FUN_00028288(&stack0xfffffff0 + iVar3,*(int *)(&stack0x00000010 + iVar3) + 4,
                           *(undefined4 *)((int)local_24 + iVar3 + 0xc));
      *puVar8 = uVar4;
      FUN_0002a1c6(0,DAT_00026270,iVar5,*(undefined4 *)(&stack0xfffffff8 + iVar3));
    }
  }
  if (param_3 == 0) {
LAB_0002624e:
    FUN_0002a1c6(0,DAT_00026274);
  }
  return param_3;
}

