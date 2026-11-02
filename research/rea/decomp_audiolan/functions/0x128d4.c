// rea decompile_all
// name: FUN_000128d4
// address: 0x128d4
// body: available
// range: 0x128d4-0x12a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000128d4(int param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    *(uint *)(param_1 + 0x108) = param_3 + param_2;
    return;
  }
  cVar1 = *(char *)(param_1 + 0xfd);
  if (*(char *)(param_1 + 0xfc) != cVar1) {
    bVar2 = *(byte *)(param_1 + 0xc0);
    iVar3 = FUN_000a7b84();
    if (iVar3 != 0) {
      local_26 = *(undefined1 *)(param_1 + 0xbe);
      local_28 = 3;
      local_27 = 0;
      local_20 = 0;
      uStack_1c = 0;
      local_25 = cVar1;
      local_24 = (uint)bVar2;
      iVar3 = FUN_00154df8(iVar3,&local_28);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_1 + 0xfd);
      }
    }
    *(uint *)(param_1 + 0x108) = param_3;
  }
  if ((*(uint *)(param_1 + 0x108) != param_3) && (iVar3 = FUN_000a7b84(), iVar3 != 0)) {
    local_26 = *(undefined1 *)(param_1 + 0xbe);
    local_28 = 3;
    local_27 = 0;
    local_20 = 0;
    uStack_1c = 0;
    local_25 = '\x06';
    local_24 = param_3;
    iVar3 = FUN_00154df8(iVar3,&local_28);
    uVar4 = DAT_00013000;
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0xfc) = 6;
      *(undefined4 *)(param_1 + 0x100) = uVar4;
    }
  }
  *(uint *)(param_1 + 0x108) = param_3 + param_2;
  if (*(int *)(param_1 + 0x104) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x104) + -1;
  *(int *)(param_1 + 0x104) = iVar3;
  if (iVar3 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xd4);
  uVar4 = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xe4) = 0xfffffff;
  iVar3 = FUN_000a7b84();
  if (iVar3 != 0) {
    local_26 = *(undefined1 *)(param_1 + 0xbe);
    local_28 = 3;
    local_27 = 0;
    local_20 = 0;
    uStack_1c = 0;
    local_25 = 5;
    local_24 = uVar4;
    FUN_00154df8(iVar3,&local_28);
    return;
  }
  return;
}

