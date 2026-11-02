// rea decompile_all
// name: FUN_000cf6dc
// address: 0xcf6dc
// body: available
// range: 0xcf6dc-0xcf8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000cf6dc(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  puVar2 = (undefined4 *)FUN_00076820(param_1,param_3);
  uVar1 = _DAT_000cf8c8;
  puVar2[0xd] = 0xffffffff;
  *puVar2 = uVar1;
  puVar2[0xe] = 0;
  FUN_001ce8fc(puVar2 + 0xe,s___SPITxBufferFree_000cf8ca + 2,1,0);
  thunk_EXT_FUN_0040010c(puVar2 + 0xe);
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  uVar1 = DAT_000cf8dc;
  *(undefined1 *)(puVar2 + 0x20) = param_2;
  puVar2[0x21] = uVar1;
  puVar2[0x22] = 0xff;
  *(undefined1 *)(puVar2 + 0x23) = 0;
  *(undefined1 *)((int)puVar2 + 0x8d) = 1;
  *(undefined1 *)((int)puVar2 + 0x8e) = 0;
  *(undefined1 *)((int)puVar2 + 0x8f) = 1;
  *(undefined1 *)(puVar2 + 0x24) = 0;
  *(undefined1 *)((int)puVar2 + 0x91) = 1;
  if (param_3 == 0) {
    iVar4 = *DAT_000cf8e0;
    puVar2[0xc] = &DAT_000cf8e4;
    puVar2[1] = iVar4 + 0x2000;
    *(undefined1 *)(puVar2 + 8) = 0x14;
    iVar3 = FUN_001dbf80(&DAT_000cf8e4,&uStack_30);
    iVar4 = DAT_000cf8ec;
    if (iVar3 == 0) {
      puVar2[9] = local_28;
      puVar2[0x21] = local_24;
      *(undefined1 *)(puVar2 + 0x23) = local_2f;
      *(undefined1 *)((int)puVar2 + 0x8d) = local_2e;
      *(undefined1 *)((int)puVar2 + 0x8e) = local_2d;
      *(undefined1 *)((int)puVar2 + 0x8f) = local_2c;
      *(undefined1 *)(puVar2 + 0x24) = local_2b;
      *(undefined1 *)((int)puVar2 + 0x91) = local_2a;
      puVar2[0x22] = local_20;
      *(undefined4 **)(iVar4 + puVar2[10] * 4) = puVar2;
      *(undefined4 *)(puVar2[1] + 4) = 1;
      FUN_0007640c(*(undefined1 *)(puVar2 + 8));
      if (*(char *)(puVar2 + 0x20) == '\x01') {
        iVar4 = FUN_000765ec(puVar2);
        if (iVar4 == 0) {
          return puVar2;
        }
      }
      else {
        FUN_000767e8();
      }
      FUN_00076594(puVar2);
      FUN_000765bc(puVar2);
      FUN_000cf5d0(puVar2);
      FUN_000762f4(*(undefined1 *)(puVar2 + 8),DAT_000cf8f0,puVar2);
      FUN_000763a8(*(undefined1 *)(puVar2 + 8));
      *(undefined4 *)puVar2[1] = 1;
      iVar4 = *DAT_000cf8f4;
      *DAT_000cf8f4 = iVar4 + 1;
      if (iVar4 + 1 == 1) {
        FUN_001f05b8(DAT_000cf8f8);
      }
      FUN_000b4c34(puVar2);
      FUN_00044fdc(puVar2[0xc],*(undefined4 *)(puVar2[1] + 0xff8));
    }
  }
  return puVar2;
}

