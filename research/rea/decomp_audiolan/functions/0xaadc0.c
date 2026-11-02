// rea decompile_all
// name: FUN_000aadc0
// address: 0xaadc0
// body: available
// range: 0xaadc0-0xaafe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000aadc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_00075978();
  *puVar2 = _DAT_000aafe4;
  *(undefined1 *)(puVar2 + 0xd) = 2;
  *(undefined1 *)((int)puVar2 + 0x35) = 0;
  puVar2[0xf] = 0xffffffff;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0xffffffff;
  puVar2[0x11] = 0;
  FUN_0017a1c4(puVar2 + 0x11,s_4__UARTTxBufferFree_000aafe5 + 3,1,0);
  thunk_EXT_FUN_0040010c(puVar2 + 0x11);
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  piVar1 = DAT_000aaffc;
  *(undefined1 *)(puVar2 + 0x23) = 5;
  puVar2[0x24] = 0;
  if (param_2 == 0) {
    iVar3 = *piVar1;
    puVar2[0xc] = s_uart0_000ab000;
    puVar2[1] = iVar3;
    *(undefined1 *)(puVar2 + 8) = 0x15;
  }
  else if (param_2 == 1) {
    iVar3 = *piVar1;
    puVar2[0xc] = s_uart1_000ab008;
    puVar2[1] = iVar3 + 0x1000;
    *(undefined1 *)(puVar2 + 8) = 0x16;
  }
  else {
    if (param_2 != 2) {
      return puVar2;
    }
    puVar2[0xc] = s_dummyUart_000ab010;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 8) = 0x7f;
  }
  *(undefined4 **)(DAT_000ab01c + puVar2[10] * 4) = puVar2;
  iVar3 = FUN_0018b4d0(puVar2[0xc]);
  if (iVar3 == 0) {
    iVar3 = DAT_000ab020;
  }
  puVar2[9] = *(undefined4 *)(iVar3 + 4);
  puVar2[0x21] = *(undefined4 *)(iVar3 + 8);
  puVar2[0x22] = *(undefined4 *)(iVar3 + 0xc);
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 1) {
    *(undefined1 *)(puVar2 + 0x23) = 1;
  }
  else if (iVar4 == 2) {
    *(undefined1 *)(puVar2 + 0x23) = 2;
  }
  else if (iVar4 == 3 || iVar4 == 4) {
    *(char *)(puVar2 + 0x23) = (char)iVar4;
  }
  else {
    *(undefined1 *)(puVar2 + 0x23) = 0;
  }
  puVar2[0x24] = *(undefined4 *)(iVar3 + 0x14);
  if ((uint)puVar2[10] < 2) {
    FUN_00075590(*(undefined1 *)(puVar2 + 8));
    iVar3 = FUN_00075770(puVar2);
    FUN_00075718(puVar2);
    FUN_00075740(puVar2);
    if (iVar3 == 0) {
      return puVar2;
    }
    FUN_000aacb8(puVar2);
    FUN_00075478(*(undefined1 *)(puVar2 + 8),DAT_000ab024,puVar2);
    FUN_0007552c(*(undefined1 *)(puVar2 + 8));
  }
  iVar3 = *DAT_000ab028;
  *DAT_000ab028 = iVar3 + 1;
  if ((iVar3 + 1 == 1) && ((uint)puVar2[10] < 2)) {
    FUN_001a0bfc(DAT_000ab02c);
  }
  FUN_0008d248(puVar2);
  if ((uint)puVar2[10] < 2) {
    FUN_0004037c(puVar2[0xc],*(undefined4 *)(puVar2[1] + 0xff8));
  }
  return puVar2;
}

