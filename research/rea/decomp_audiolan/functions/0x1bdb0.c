// rea decompile_all
// name: FUN_0001bdb0
// address: 0x1bdb0
// body: available
// range: 0x1bdb0-0x1bf1f inclusive
// range: 0x1c078-0x1c08f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001bdb0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = _DAT_0001bf20;
  if (param_1 == (int *)0x0) {
    FUN_000028a4(s_ERROR__CHAIoNet_InitEx__Bad_para_0001bf50);
    return 5;
  }
  if ((*_DAT_0001bf20 & 1) != 0) {
    FUN_000028a4(s_F_ERROR__CHAIoNet_InitEx__Alread_0001bf21 + 3);
    return 7;
  }
  if (*param_1 != 0x14) {
    return 5;
  }
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  _DAT_0001bf20[0x3d] = 0x14;
  puVar1[0x3e] = uVar4;
  puVar1[0x3f] = uVar5;
  puVar1[0x40] = uVar6;
  puVar1[0x41] = param_1[4];
  iVar2 = FUN_001a07ac(puVar1 + 2,&DAT_0001bf78);
  if (iVar2 == 0) {
    puVar1[0xc] = 0;
    uVar4 = FUN_001a0808(puVar1[0x74],1);
    puVar1[0xb] = uVar4;
    if (uVar4 == 0) {
      FUN_00041290();
      FUN_000028a4(DAT_0001c090);
      return 1;
    }
    FUN_00003850(uVar4,puVar1[0x74],0x32);
    iVar2 = FUN_0017b1b0(puVar1 + 0xc,s__VnmTcpListener_0001bfaf + 1,_DAT_0001bfac,0);
    if (iVar2 == 0) {
      *puVar1 = 1;
      uVar3 = FUN_0018ab18(0);
      iVar2 = FUN_0018dc6c(uVar3,_DAT_0001bff8);
      if (iVar2 != 0) {
        thunk_FUN_000028a4(s__ERROR__CHAIoNet_InitEx__Failed_t_0001bffb + 1);
      }
      uVar3 = FUN_0018ab18(0);
      iVar2 = FUN_0018dc40(uVar3,_DAT_0001c038);
      if (iVar2 != 0) {
        thunk_FUN_000028a4(s__ERROR__CHAIoNet_InitEx__Failed_t_0001c03b + 1);
      }
      return 0;
    }
    FUN_00041290();
    FUN_000028a4(s_ERROR__CHAIoNet_InitEx__Failed_t_0001bfc0);
    return 1;
  }
  FUN_000028a4(s_ERROR__CHAIoNet_InitEx__Failed_t_0001bf7c);
  return 1;
}

