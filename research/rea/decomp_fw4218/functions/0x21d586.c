// rea decompile_all
// name: FUN_0021d586
// address: 0x21d586
// body: available
// range: 0x21d586-0x21d65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021d586(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  
  local_20 = *(char **)(param_2 + 0x10);
  pcVar4 = *(char **)(local_20 + 4);
  iVar2 = 1;
  iVar3 = param_2 + 0x19;
  while (pcVar4 != (char *)0x0) {
    local_20 = pcVar4;
    iVar2 = FUN_0022dd14(iVar3,param_3,pcVar4 + 0x10);
    if (iVar2 == 0) {
      pcVar4 = *(char **)(pcVar4 + 0xc);
    }
    else {
      pcVar4 = *(char **)(pcVar4 + 8);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    local_24 = local_20;
    if (iVar2 != 0) {
      local_1c = *(char **)(*(int *)(param_2 + 0x10) + 8);
      iVar2 = FUN_002247e4(&local_24,&local_1c);
      if (iVar2 != 0) {
        FUN_0021d660(&local_18,param_2,0,local_20,param_3);
        uVar1 = 1;
        local_1c = local_18;
        goto LAB_0021d658;
      }
      if ((*local_24 == '\0') && (*(char **)(*(int *)(local_24 + 4) + 4) == local_24)) {
        local_24 = *(char **)(local_24 + 0xc);
      }
      else {
        pcVar4 = *(char **)(local_24 + 8);
        if (*(char **)(local_24 + 8) == (char *)0x0) {
          do {
            pcVar4 = *(char **)(local_24 + 4);
            bVar5 = local_24 == *(char **)(pcVar4 + 8);
            local_24 = pcVar4;
          } while (bVar5);
        }
        else {
          do {
            local_24 = pcVar4;
            pcVar4 = *(char **)(local_24 + 0xc);
          } while (pcVar4 != (char *)0x0);
        }
      }
    }
    iVar2 = FUN_0022dd14(iVar3,local_24 + 0x10,param_3);
    if (iVar2 == 0) {
      uVar1 = 0;
      local_1c = local_24;
      goto LAB_0021d658;
    }
  }
  FUN_0021d660(&local_1c,param_2,0,local_20,param_3);
  uVar1 = 1;
LAB_0021d658:
  *param_1 = local_1c;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

