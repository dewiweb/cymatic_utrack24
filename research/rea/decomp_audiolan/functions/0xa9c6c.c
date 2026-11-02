// rea decompile_all
// name: FUN_000a9c6c
// address: 0xa9c6c
// body: available
// range: 0xa9c6c-0xa9df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000a9c6c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined4 local_20;
  undefined4 local_18;
  
  puVar1 = (undefined4 *)FUN_0008d268();
  *puVar1 = _DAT_000a9df4;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_0017ae30(puVar1 + 5,s_4__SPISlave_Tx_000a9df5 + 3,1);
  puVar4 = puVar1 + 0xd;
  *puVar4 = 0;
  FUN_0017a1c4(puVar4,s_SPISlave_Rx_000a9e04,0,1);
  thunk_EXT_FUN_00400100(puVar4);
  puVar4 = puVar1 + 0x14;
  *puVar4 = 0;
  FUN_0017a1c4(puVar4,s_4__SPISlave_Tx_000a9df5 + 3,0,1);
  thunk_EXT_FUN_00400100(puVar4);
  puVar1[0x25] = 0xff;
  uVar3 = DAT_000a9e10;
  puVar1[0x24] = 0x200;
  puVar1[0x1b] = 0;
  puVar1[0x21] = uVar3;
  puVar1[0x22] = 0xffffffff;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x23) = 0;
  *(undefined1 *)((int)puVar1 + 0x8d) = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x99) = 1;
  *(undefined1 *)((int)puVar1 + 0x9a) = 0;
  *(undefined1 *)((int)puVar1 + 0x9b) = 1;
  *(undefined1 *)(puVar1 + 0x27) = 0;
  *(undefined1 *)((int)puVar1 + 0x9d) = 1;
  iVar2 = FUN_0018b020(DAT_000a9e14,&local_28);
  uVar3 = DAT_000a9e18;
  if ((iVar2 == 0) && (uVar3 = DAT_000a9e1c, local_28 == '\0')) {
    puVar1[0x24] = local_20;
    *(undefined1 *)(puVar1 + 0x26) = local_27;
    *(undefined1 *)((int)puVar1 + 0x99) = local_26;
    *(undefined1 *)((int)puVar1 + 0x9a) = local_25;
    *(undefined1 *)((int)puVar1 + 0x9b) = local_24;
    *(undefined1 *)(puVar1 + 0x27) = local_23;
    *(undefined1 *)((int)puVar1 + 0x9d) = local_22;
    puVar1[0x25] = local_18;
    *DAT_000a9e20 = puVar1;
    iVar2 = FUN_000a9144(puVar1);
    if (iVar2 != 0) {
      FUN_0008d248(puVar1);
      FUN_0004037c(s_spiSlave_000a9e28,*DAT_000a9e24);
    }
  }
  else {
    FUN_000151c4(uVar3);
  }
  return puVar1;
}

