// rea decompile_all
// name: FUN_000d43d8
// address: 0xd43d8
// body: available
// range: 0xd43d8-0xd44cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000d43d8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_00121430();
  iVar1 = DAT_000d44e4;
  iVar3 = FUN_00070ef0(iVar2 + DAT_000d44e4,s_USBHostController_000d44d0,0,0x14,DAT_000d44cc,
                       DAT_000d44cc,DAT_000d44cc,DAT_000d44cc,DAT_000d44cc,DAT_000d44cc);
  iVar2 = DAT_000d44e8;
  piVar4 = (int *)(iVar3 - iVar1);
  *piVar4 = DAT_000d44e8;
  piVar4[0x1fce] = iVar2 + 0x44;
  piVar4[0x1fcf] = iVar2 + 0x58;
  iVar2 = DAT_000d44ec;
  *(undefined4 *)((int)piVar4 + DAT_000d44ec + 0x10) = 0;
  *(undefined4 *)((int)piVar4 + iVar2 + 0x14) = 0;
  *(undefined4 *)((int)piVar4 + iVar2 + 0x18) = 0;
  puVar5 = (undefined4 *)FUN_000b1210((int)piVar4 + DAT_000d44ec + 0x1c);
  *puVar5 = DAT_000d44f0;
  iVar2 = (int)puVar5 + DAT_000d44ec + 0x28 + DAT_000d44f4;
  *(undefined4 *)(iVar2 + 4) = 0;
  FUN_001f0168(iVar2,s_USB_Host_Controller_Lock_000d44f8);
  iVar2 = FUN_0007983e(iVar2 + DAT_000d44f4 + DAT_000d44ec + 0x40);
  puVar5 = (undefined4 *)(iVar2 + DAT_000d44f4 + DAT_000d44ec + 0x20);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar6 = FUN_00236d54(puVar5,1);
  puVar5[4] = uVar6;
  *(undefined4 *)uVar6 = uVar6;
  *(undefined4 *)(puVar5[4] + 4) = puVar5[4];
  iVar2 = DAT_000d44f4 + -0x34;
  *(undefined4 *)((int)puVar5 + DAT_000d44ec + iVar2 + 0x68) = 0;
  iVar2 = FUN_000a1a3c((int)puVar5 + DAT_000d44ec + 0x6c + iVar2);
  iVar2 = iVar2 + DAT_000d44f4 + -0x50;
  *(undefined1 *)(iVar2 + DAT_000d44ec + 0x84) = 0;
  iVar2 = FUN_000788f4(iVar2 + DAT_000d44ec + 0x88);
  iVar2 = iVar2 + DAT_000d44f4 + -0x6c;
  *(undefined1 *)(iVar2 + DAT_000d4514) = 1;
  *(undefined4 *)(iVar2 + 0x8224) = 0;
  FUN_0006f678(iVar2 + iVar1);
  return iVar2;
}

