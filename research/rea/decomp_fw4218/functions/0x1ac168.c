// rea decompile_all
// name: FUN_001ac168
// address: 0x1ac168
// body: available
// range: 0x1ac168-0x1ac207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001ac168(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_000d38f0(param_1 + 8);
  puVar2[-2] = DAT_001ac208;
  *puVar2 = DAT_001ac20c;
  uVar1 = DAT_001ac210;
  puVar2[6] = param_2;
  puVar2[5] = uVar1;
  iVar3 = FUN_000782e4(puVar2 + 7);
  *(undefined1 *)(iVar3 + 0x54) = 2;
  *(undefined1 *)(iVar3 + 0x55) = 0;
  *(undefined1 *)(iVar3 + 0x66) = 1;
  *(undefined1 *)(iVar3 + 0x67) = 0;
  *(undefined1 *)(iVar3 + 0x68) = 0;
  *(undefined2 *)(iVar3 + 0x6a) = param_5;
  *(undefined1 *)(iVar3 + 0x6c) = param_3;
  *(undefined4 *)(iVar3 + 0x70) = param_4;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined1 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  iVar3 = FUN_001ae604(iVar3 + 0x80);
  iVar3 = FUN_0006e188(iVar3 + 0xc,iVar3 + -0x88,s_DFU_Timer_001ac218,DAT_001ac214,DAT_001ac214,
                       DAT_001ac214,DAT_001ac214,DAT_001ac214);
  *(undefined4 *)(iVar3 + 0x124) = 0;
  FUN_001f0168(iVar3 + 0x120,s_DFU_Device_001ac224);
  FUN_0006e116(iVar3,0);
  iVar4 = FUN_00049558(s__cfg_USB_DFU_WillDetach_001ac230,iVar3 + -0x24);
  if (iVar4 == 0) {
    FUN_00002898(s_ERROR__DFUDevice__No___s__001ac254,s_WillDetach_001ac248);
  }
  return iVar3 + -0xb0;
}

