// rea decompile_all
// name: FUN_0001debc
// address: 0x1debc
// body: available
// range: 0x1debc-0x1e02b inclusive
// range: 0x1e184-0x1e19b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001debc(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = _DAT_0001e02c;
  if (param_1 == (int *)0x0) {
    FUN_00002898(s_ERROR__CHAIoNet_InitEx__Bad_para_0001e05c);
    return 5;
  }
  if ((*_DAT_0001e02c & 1) != 0) {
    FUN_00002898(s_E_ERROR__CHAIoNet_InitEx__Alread_0001e02e + 2);
    return 7;
  }
  if (*param_1 != 0x14) {
    return 5;
  }
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  _DAT_0001e02c[0x3d] = 0x14;
  puVar1[0x3e] = uVar4;
  puVar1[0x3f] = uVar5;
  puVar1[0x40] = uVar6;
  puVar1[0x41] = param_1[4];
  iVar2 = FUN_001f0168(puVar1 + 2,&DAT_0001e084);
  if (iVar2 == 0) {
    puVar1[0xc] = 0;
    uVar4 = FUN_001f01c4(puVar1[0x74],1);
    puVar1[0xb] = uVar4;
    if (uVar4 == 0) {
      FUN_00045ca8();
      FUN_00002898(DAT_0001e19c);
      return 1;
    }
    FUN_00003c08(uVar4,puVar1[0x74],0x32);
    iVar2 = FUN_001cf8e8(puVar1 + 0xc,s__VnmTcpListener_0001e0bb + 1,_DAT_0001e0b8,0);
    if (iVar2 == 0) {
      *puVar1 = 1;
      uVar3 = FUN_001db66c(0);
      iVar2 = FUN_001dead4(uVar3,_DAT_0001e104);
      if (iVar2 != 0) {
        thunk_FUN_00002898(s__ERROR__CHAIoNet_InitEx__Failed_t_0001e107 + 1);
      }
      uVar3 = FUN_001db66c(0);
      iVar2 = FUN_001deaa8(uVar3,_DAT_0001e144);
      if (iVar2 != 0) {
        thunk_FUN_00002898(s__ERROR__CHAIoNet_InitEx__Failed_t_0001e147 + 1);
      }
      return 0;
    }
    FUN_00045ca8();
    FUN_00002898(s_ERROR__CHAIoNet_InitEx__Failed_t_0001e0cc);
    return 1;
  }
  FUN_00002898(s_ERROR__CHAIoNet_InitEx__Failed_t_0001e088);
  return 1;
}

